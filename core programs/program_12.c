#include<stdio.h>
void main(){
	char ch;
	printf("Enter a char.. : ");
	scanf("%c",&ch);
	
	if (ch=='a') printf("%c is vowel",ch);
	else if (ch=='e') printf("%c is vowel",ch);
	else if (ch=='i') printf("%c is vowel",ch);
	else if (ch=='o') printf("%c is vowel",ch);
	else if (ch=='u') printf("%c is vowel",ch);
	else printf("%c is consonant",ch);
	
}
