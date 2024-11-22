#include<stdio.h>
#include<string.h>
void main(){
	char a[10],*p;
	int i=0,ln;
	p=&a[0];
	gets(a);
	while (*p!='\0')
	{
		p++;
	}
	ln=p-a;

	p=&a[ln];
	
	for(i=0; i<=ln; i++){
		printf("%c",*p);
		p--;
	}

	
}
