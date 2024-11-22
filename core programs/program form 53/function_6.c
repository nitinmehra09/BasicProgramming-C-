#include<stdio.h>
int swap(int *p ,int *q );
void main(){
	int a,b;
	printf("Enter first number : ");
	scanf("%d",&a);
	
	printf("Enter second number : ");
	scanf("%d",&b);
	printf("Before swappint a=%d b=%d \n",a,b);
	swap(&a,&b);
	printf("after swappint a=%d b=%d \n",a,b);
}

int swap(int *p, int *q){
	int c;
	c=*p;
	*p=*q;
	*q=c;
}
