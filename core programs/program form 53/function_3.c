#include<stdio.h>
int fact(int);

void main(){
	int n,f;
	printf("Enter a number : ");
	scanf("%d",&n);
	
	f = fact(n);
	printf("factorial of n is %d",f);
}

int fact(int n){
	int f=1;
	while (n>1)
	{
		f=f*n;
		n--;
	}
	return f;
}


