#include<stdio.h>
#include<string.h>
void main(){
	int a[]={10,20,30,40,50},*p,i;
	
	p=&a[4];
	
//	printf("enter a number : \n");
//	for(i=0; i<5; i++){
//		printf("Enter a no. at %d position ",i+1);
//		scanf("%d",&a[i]);
//	}
	
	for(i=0; i<5; i++){
		printf("%d\n",*p);
		p--;
	}
	
}
