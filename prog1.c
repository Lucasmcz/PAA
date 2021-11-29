#include <stdio.h>
void p1(int k)
{
    int count = 0;
    if(k == 1)
    {
        printf("OI ");
        count =  count + 1;
        printf("%d\n",count);
        return;
    }
    else
    {
        for(int i = 1;i <= k;i++)
        {
            printf("A variavel i%d ",i);
            printf("OI ");
            count =  count + 1;
            printf("%d\n",count);
        }
        p1(k-1);  
    }
       
    


}

int main()
{
    int n;
    scanf("%d",&n);
    p1(n);
    return 0;

}