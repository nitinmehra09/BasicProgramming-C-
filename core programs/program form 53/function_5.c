#include<stdio.h>
int rev(int);

void main(){
	int n,r;
	printf("Enter a number : ");
	scanf("%d",&n);
	r = rev(n);
	
	if(r==n){
		printf("palindrome ");
	}
	else{
		printf("non palindrome ");
	}
}
	int rev(int n){
		int r,sum = 0;
			while(n!=0){
				r=n%10;
				sum=sum*10+r;
				n=n/10;
		}
		return sum;
}
