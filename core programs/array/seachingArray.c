//searching
#include<stdio.h>
void main(){
	int a[]={22,8,99,89,67,45,87,56,45,55};
	int i,n,f=0;
	printf("Enter a number b/w 1 to 100 : ");
	scanf("%d",&n);
	
	for(i=0; i<10; i++){
		if(a[i]==n){
			f=1;
			break;
		}
	}
	if(f==1){
		printf("%d is in given array at %d position",n,i);
	}
	else{
		printf("%d is not in given array ",n);
	}
}
