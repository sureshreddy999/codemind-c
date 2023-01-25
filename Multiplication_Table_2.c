#include<stdio.h>
int main()
{
    int i,n,n1;
    scanf("%d%d" ,&n,&n1); 
    for(i=1;i<=n1;i++)
    {
        printf("%d x %d = %d" ,n,i,n*i);
        printf("
" );
    }
    
}