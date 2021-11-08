#include <stdio.h>
void ordernar()
{

}
int ulam(int a)
{
  int count = 0;
  while(a != 4)
  {
    if(a % 2 == 0)
    {
      //printf("%d ",a);
      a = a/2;
      count = count +1;
    }
    else
    {
      //printf("%d ",a);
      a = (a*3) +1;
      count = count +1;
    }
  }
  //printf("4 2 1\n");
  //printf("Lenght da Sequencia: %d",count+3);
  return(count+3);
}
int main()
{
  int arr[65535];
  for(int i = 5;i < 65535;i++)
  {
    arr[i - 5] = ulam(i);
  }
  for(int i = 0;i < 10000;i++)
  {
    printf("%d: Resultdado :%d\n",i+5,arr[i]);
  }
}
