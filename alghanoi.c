#include <stdio.h>
int move_torre(int cont,int n,char org,char dest)
{
  if(n == 1)
  {
    cont = cont + 1;
    printf("%d",cont);
    return 0;
  }
  else
  {
    move_torre(cont,n-1,org,dest);
    cont = cont + 1;
    move_torre(cont,n-1,org,dest);
  }
}

int main()
{
  int discos;
  int contador;
  printf("O numero de Discos que deseja");
  scanf("%d",&discos);
  move_torre(0,discos,'A','B');

}
