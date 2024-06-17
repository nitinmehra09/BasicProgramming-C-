#include<stdio.h>
void main(){
	int a[10],i,j;
	printf("Enter 5 number:\n");
	for(i=0;i<5;i++){
		
		printf("Enter value at %d position : ",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++){
		printf("Your enter %d at %d position\n",a[i],i);
	}
}
