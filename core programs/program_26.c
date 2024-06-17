#include<stdio.h>
void main(){
    int a[10],i;
    printf("ENTER 10 Number : \n");
    for(i=0;i<10;i++){
        printf("ENTER A NUMBER ON %d POSITION ",i+1);
        scanf("%d",&a[i]);
    }
    for(i=1;i<10;i++){
    	if (a[i]%2==0){
    		printf(" %d is even \n",a[i]);
		}
	}
	
}



