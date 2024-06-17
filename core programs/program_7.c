#include<stdio.h>

void main(){
	int a,b,max;
	
	printf("Enter first number ");
	scanf("%d",&a);
	
	printf("Enter second number ");
	scanf("%d",&b);
	
	a<b?printf("%d is greater then %d ",b,a):printf("%d is greater then %d",a,b);
	
}
