#include<stdio.h>
int main()
{
    int n,i,a,b;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d%d",&a,&b);
        if(a>b)
        {
            printf("LOSS
");
        }
        else if(a<b)
        {
            printf("PROFIT
");
        } else if(a==b)
        {
            printf("NEUTRAL
");
        }
    }
}