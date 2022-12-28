#include<stdio.h>
int main()
{
	int a,b,c,d;
	float e,f,g,h;
	scanf("%d%d",&a,&b);
	scanf("%f%f",&e,&f);
	c=a+b;
	d=a-b;
	g=e+f;
	h=e-f;
	printf("%d",c);
	printf(" %d",d);
	printf("
%0.1f",g);
	printf(" %0.1f",h);
}