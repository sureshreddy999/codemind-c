#include<stdio.h>
int main()
{
    int i,n,z=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            z++;
        }
    }
    if(z==2)
    {
        printf("Prime");
    } else
    {
        printf("Not Prime");
    }
}