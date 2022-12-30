#include<stdio.h>
int main()
{
    int n,i,xx,aa,yy;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d%d%d",&xx,&yy,&aa);
        if(aa>=xx && aa<yy)
        {
            printf("YES
");
        }
        else
        {
            printf("NO
");
        }
    }
}