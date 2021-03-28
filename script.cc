#include "iostream"
#include "stdio.h"
#include<stdlib.h>
#include<string.h>
using namespace std;
struct login {
private:     
  char id [30];
  double pin [4];
  int intentos=0;
  int faltan=3;
public: 
login(); 
    char  nombrar();  
    void escribir();
    void entrar(); };
login::login()
{ pin = 0; }
//f1
char login::nombrar(){
    printf("\n Meter ID: ");
    scanf("%s",id); }
//f2
void login::escribir(){
    printf("\n Meter Pin: ");
    scanf("%s\n",pin); }
//f3
void login::entrar(){
do{
fflush(stdin);
  if (strcmp(id,pin)==0){
  printf("\n Bienvenid@: %s \n" ,id); 
  break; }
  else
  printf("Pin incorrecto\n");printf("\n");
  faltan--; }
  while (faltan>0 && strcmp(id,pin)!=0);
  if(faltan==0)
  printf("Intentos maximos alcanzados\n");printf("\n");
  } 

int main()
{
login l;
l.nombrar();
l.escribir();
l.entrar();

system ("PAUSE");
return 0;
}
