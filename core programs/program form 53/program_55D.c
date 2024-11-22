#include<stdio.h>
void main(){
	int a[]={10,43,30,19,50},*p,i,sum=0;
	
	p=&a[0];
	
	for(i=0; i<5; i++){
		
	sum=sum+*p;
	p++;
	
	}
	
	printf("Sum of array is %d",sum);
	
}
