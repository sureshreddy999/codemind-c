#include<stdio.h>
int main ()
{
    int i,n,x;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&x);
        if(x<3)
    {
        printf("LIGHT
");
    } else
    if(x>=3 && x<7)
    {
        printf("MODERATE
");
    } else
    if(x>=7)
    {
        printf("HEAVY
");
    }
    }
    
}