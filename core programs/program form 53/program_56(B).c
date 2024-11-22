#include<stdio.h>
#include<string.h>
void main(){
	char a[10],*p;
	int i;
	p=&a[0];
  
	printf("Enter a string : ");
	gets(a);
	
	while (*p!='\0')
	{
		printf("%c",*p);
		p++;
	}
		printf("\n%d",p-a);

}

