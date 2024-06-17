#include<stdio.h>

void main()

{
int a=0,b=1,c,i,j,n;

	printf("\nENTER n : ");
	scanf("%d",&n);

	printf("\nFibonacci series : ");
	printf("%d\t",a);
	printf("%d",b);
	
	i=3;
	while (i<=n)
{
		
	c=a+b;
	printf("\t%d",c);
	a=b;
	b=c;
	i++;
}
}
