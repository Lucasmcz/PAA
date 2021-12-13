#include <stdio.h>
int main()
{
  int n;
  puts("O tamanho do Array A[]?");
  scanf("%d",&n);
  int a[n];
  for(int i = 0;i < n;i++)
  {
    scanf("%d\n",&a[i]);
    if(i > 1)
    {
      if(a[i] < a[i-1])
      {
        printf("%d %d\n",a[i],a[i-1]);
        printf("\np não posição i: %d",i);
        break;
      }
    }
  }

  return 0;
}
