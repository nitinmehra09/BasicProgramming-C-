#include<stdio.h>
int add(int *p);
void main(){
	int a[10],i,sum;
	for(i=0; i<10; i++){
		printf("Enter number at %d  = ",i+1);
		scanf("%d",&a[i]);
	}
	sum = add(a);
	
	printf("Sum = %d ",sum);
}

int add(int *p){
	int i,sum=0;
	for(i=0;i<10;i++){
		sum=sum+*p;
		p++;
	}
	return sum;
}
