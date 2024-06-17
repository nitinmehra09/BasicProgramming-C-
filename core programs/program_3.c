/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

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
