#include<stdio.h>
int main()
{
    int n;
    int rev=0,rem;
    scanf("%d",&n);
    int x=n;
    while(n!=0) {
        rem=n%10;
        rev=rev*10+rem;
        n/=10;
    }
    if (rev==x) printf("True");
    else printf("False");
}