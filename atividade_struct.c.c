#include <stdio.h>

float soma(float a, float b){
    float result;
    result = a + (b);
    return result;
    
}

int main()
{
   struct{
       int projeto;
       float valor;
       char conta;
       
   }proj;
   
   float a,b,c,d;
   
   printf("digite o número do projeto:");
   scanf("%d", &proj.projeto);
   printf("digite o valor do projeto:");
   scanf("%f", &proj.valor);
   printf("digite o 1 para receita ou 2 para despesa:");
   scanf("%s", &proj.conta);
   if(proj.conta == 1){
       printf("digite o valor:");
       scanf("%f", &b);
       
   }else{
       printf("digite o valor:");
       scanf("%f", &d);
       b = -d;
       
   }
   
   a = proj.valor;
   c = soma(a,b) ;
   printf("saldo final %.2f", c );
  
  

    return 0;
}