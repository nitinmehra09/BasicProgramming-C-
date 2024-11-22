#include<stdio.h>
void main(){
	int a[10],*p,i;
	
	p=&a[0];
	printf("enter a number : \n");
	for(i=0; i<10; i++){
		printf("Enter a no. at %d position ",i+1);
		scanf("%d",&a[i]);
	}
	
	for(i=0; i<10; i++){
		printf("%d\n",*p);
		p++;
	}
	
}
