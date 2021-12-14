#include <stdio.h>

int main()
{
  int n;
  scanf("%d",&n);
  int a[n];
  int maior = 0;
  int menor = 0;
  int dia_maior = 0;
  int dia_menor = 0;
  for(int i = 0;i < n;i++)
  {
     if(i == 0)
     {
       scanf("%d",&a[i]);
       menor = a[i];
     }
     else
     {
       scanf("%d",&a[i]);
       if(a[i-1] < menor || menor == 0)
       {
         menor = a[i-1];
         dia_menor = i-1;
       }
       if(a[i] - menor > maior - menor)
       {
         maior = a[i];
         dia_maior = i;
       }
     }
  }

  printf("Deveriam comprar no dia %d e vender no dia %d",dia_menor+1,dia_maior+1);
  return 0;
}
