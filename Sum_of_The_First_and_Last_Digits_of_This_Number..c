#include<stdio.h>
#include<math.h>
int main()
{
    int n,l,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int ln;
        scanf("%d",&l);
        ln=log10(l)+1;
        int a=l%10;
        int b=l/pow(10,ln-1);
        int sum=a+b;
        printf("%d
",sum);
    }
}