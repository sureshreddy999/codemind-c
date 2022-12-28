#include<stdio.h>
int main()
{
    int x,y,i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d%d",&x,&y);
        if((2*x)>(5*y))
        {
            printf("Chocolate
");
        } else
        if((2*x)==(5*y))
        {
            printf("Either
");
        } else
        if((2*x)<(5*y))
        {
            printf("Candy
");
        }
    }
}