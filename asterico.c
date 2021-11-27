#include <stdio.h>
void asterico(int n)
{
    if(n > 0)
    {
        asterico(n-1);
        for(int i = 1;i < n;i++)
        {
            printf("*");
        }
        asterico(n-1);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    asterico(n);
}