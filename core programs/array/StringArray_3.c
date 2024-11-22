#include<stdio.h>
#include<string.h>
void main(){
    char a[30];
    int i;
    
    printf("Enter a string : ");
    gets(a);
    
    printf("\n reverse of you entered : ");
    i=strlen(a);
   	while(i>=0){
   		printf("%c",a[i]);
   		i--;
	   }
    
}
