#include<stdio.h>
void main(){
	int a[]={10,50,60,20,44,66,87,98,10,99};
	int i,j,max;
	max=a[0];
	while (i<10){
		if (a[i]>max){
			max = a[i];
		}
		i++;	
	}
	printf("%d",max);		
}
