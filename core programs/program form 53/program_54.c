#include<stdio.h>
void main(){
	int a,*p,**q;
	a=10;
	p=&a;
	q=&p;
	
	printf("%d\n",a);	//10
	printf("%d\n",p);	//2011
	printf("%d\n",q);	//1011
	printf("%d\n",*p);	//10
	printf("%d\n",*q);	//2011
	printf("%d\n",&p);	//1011
	printf("%d\n",&q);	//1234
	printf("%d\n",**q);	//10
//	printf("%d"**p);	//XYZ = error
	
}
/*
	a=10	2011
	p=2011 	1011
	q=1011	1234
	
*/
