
typedef struct{
  char name[50];
  char password[50];
  char admin;
}UserTypedef;

void newUser(){
  bool ok = false;
  while(!ok){  
    
  UserTypedef newUser;
  char c;

  while(Serial.available() > 0)
    c = Serial.read();
  
  Serial.println("Insira o nome do novo usuário: ");
  while(!Serial.available());
  
  uint8_t idx = 0;
  while(Serial.available() > 0)
  {
    c = Serial.read();
    Serial.print(c);
    newUser.name[idx++] = c;
  }

  while(Serial.available() > 0)
    c = Serial.read();

  Serial.println("Insira a senha do novo usuário: ");
  while(!Serial.available());
  while(Serial.available() > 0)
  {
    c = Serial.read();
    Serial.print("*");
    UserTypedef newUser;
    newUser.password[idx++] = c;
  }

  while(Serial.available() > -1)
    c = Serial.read();

  bool admin = false;
  while(!admin){
    Serial.println("O usuário é administrador? (y/n)");
  while(!Serial.available());
  char c;
  c = Serial.read();
  newUser.admin = c;
  admin = true;
  ok = true;
    //Serial.println("Resposta incorreta, insira novamente:");
  }/*
  Serial.print("\n\nUser: "); Serial.println(newUser.user);
  Serial.print("\n\nSenha: "); Serial.println(String(newUser.password));
  Serial.print("\n\nAdmin: "); (newUser.admin == FALSE):(Serial.println("True")?Serial.println("False"));*/
  }

}
