#include<stdio.h>

void main()
{
    int a,b,c;
    
    printf("ENTER A NUMBER ");
    scanf("%d",&a);
    
    printf("ENTER SECOND NUMBER ");
    scanf("%d",&b);
    
    printf("BEFORE SWAPING a=%d and b=%d\n",a,b);
    
    c=a;
    a=b;
    b=c;
    
    printf("AFTER SWAPING a=%d and b=%d",a,b);
    
    getch();
    
    
    
  
}