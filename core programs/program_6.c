#include<stdio.h>

void main()
{
	int a,b;
	printf("ENTER TWO NUMBER ");
	scanf("%d%d",&a,&b);
	
	a<b?printf("GREATER NUMBER IS %d",b):printf("GREATER NUMBER IS %d",a);
	
	getch();
	
}
