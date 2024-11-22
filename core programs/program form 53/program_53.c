#include<stdio.h>
void main(){
	int a=10, *p;
	p=&a;
	printf("%d\n",a);	//10
	printf("%d\n",p);	//2011
	printf("%d\n",*p);	//10
	printf("%d\n",&p);	//2022
	printf("%d\n",&a);	//2011
	printf("%d\n",&*p);	//2011
}
/*
a=10  	 2011
p=2011   2022

*/
