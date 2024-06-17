#include<stdio.h>
void main(){
	int n;
	printf("Enter a number between 1 to 5 : ");
	scanf("%d",&n);
	
	if (n==1) printf("ONE");
	else if (n==2) printf("TWO");
	else if (n==3) printf("THREE");
	else if (n==4) printf("FOUR");
	else if (n==5) printf("FIVE");
	else printf("Pls type valid number");
	
}
