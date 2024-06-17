#include <stdio.h>

int main() {
	int a[]={10,20,30,40,50,60,70,80,90,100},i,n,f=0;
	
	printf("Pls entered a number :");
	scanf("%d",&n);
	
	for(i=0;i<10;i++){
		if (a[i]==n){
			f=1;
			break;
		}
	}
		if (f==1){
			printf("%d is in array",n);
		}
		else{
		printf("%d is not in array",n);
		}
}

