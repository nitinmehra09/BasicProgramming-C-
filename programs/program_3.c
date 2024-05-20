#include <stdio.h>

void main()
{
    int a,b,c,d,x;
    float av;
    printf("ENTER MARKS OF FRIST SUBJECT ");
    scanf("%d",&a);
    
    printf("ENTER MARKS OF SECOND SUBJECT ");
    scanf("%d",&b);
    
    printf("ENTER MARKS OF THRID SUBJECT ");
    scanf("%d",&c);
    
    printf("ENTER MARKS OF FOURTH SUBJECT ");
    scanf("%d",&d);
    
    
    x =a+b+c+d;
    
    av =x/4.0;
    
    printf("TOTAL MARKS IS  = %d",x);
    printf("\n AVARAGE MARKS  = %f",av);
    
}