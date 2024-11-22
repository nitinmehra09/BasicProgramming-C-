#include<stdio.h>
int prime(int);

void main(){
	int n;
	printf("Enter a number : ");
	scanf("%d",&n);
	
	prime(n);

}

int prime(int n){
	if(n%2==0){
		printf("yes it is even number ");
	}
	else{
		printf("no it is odd number ");
	}
}

