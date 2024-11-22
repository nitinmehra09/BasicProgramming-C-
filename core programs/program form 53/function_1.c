//functions
#include<stdio.h>
void pyramid(int a);
void main(){
		printf("YOUR NAME :\n");
		pyramid(5);
		printf("COLLAGE NAME :\n");
		pyramid(7);
		printf("CITY NAME :\n");
		pyramid(10);
		
}

void pyramid(int a){
	int i,j;
	for (i=1;i<=a;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
