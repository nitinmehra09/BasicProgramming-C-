#include<stdio.h>
void main(){
	int a[]={100,43,30,19,50},*p,i,min;
	
	p=&a[0];
	min=*p;
	for(i=0; i<5; i++){
		if (min<*p){
			a[i]=min;
		}
	p++;
	}
	
	printf("min value is %d",min);
	
}
