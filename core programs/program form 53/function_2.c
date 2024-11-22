//functions
#include<stdio.h>
int add(int a,int b);
void main(){
	int a,b;
	printf("Enter first number :");
	scanf("%d",&a);
	
	printf("Enter first number :");
	scanf("%d",&b);
	
    int sum = add(a,b);
	printf("sum =%d",sum);
}
int add(int a, int b){
	int c;
	c=a+b;
	return c;
}
