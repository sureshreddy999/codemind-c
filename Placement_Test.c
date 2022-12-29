#include<stdio.h>
int main()
{
    int i,n,x,y;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d%d",&x,&y);
        int c=(x/10)*y;
        printf("%d
",c);
    }
}