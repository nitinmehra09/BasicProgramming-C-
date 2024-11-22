#include<stdio.h>
int prime(int);

void main(){
	int n,f;
	printf("Enter a number : ");
	scanf("%d",&n);
	
	f=prime(n);
	if(f==1){
		printf("no it is not prime no. ");
	}
	else{
		printf("yes it is prime no. ");
	}

}

int prime(int n){
	int i,f;
	for(i=2; i<=n/2; i++)
	{
		if(n%i==0){
			f=1;
			break;
		}
		
	}
	return f;
}
