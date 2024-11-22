#include<stdio.h>
void main(){
	   char a[10],*p;
	   
	   p=&a[0];
	   
	   printf("Enter a string : ");
	   gets(a);     
	   
	   while (*p!='\0')
	   {
	   		printf("%c",*p);
	   		p++;
        }
}
