#include<stdio.h>
int main()
{
    int n,c=0,r,ec=0,oc=0;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        c=c+1;
        if(r%2==0)
        {
            ec=ec+1;
        }
        else if(r%2!=0)
        {
            oc=oc+1;
        }
        n=n/10;
        
    }
    if(ec==c)
    {
        printf("Even");
    }
    else if(oc==c)
    {
        printf("Odd");
    }
    else
    {
        printf("Mixed");
    }
}