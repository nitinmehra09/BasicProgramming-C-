#include<stdio.h>
void main(){
    int a[10],i,min;
    printf("ENTER 10 Number : \n");
    for(i=0;i<10;i++){
        printf("ENTER A NUMBER ON %d POSITION ",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++){
    	if (min>a[i]){
    		min=a[i];
		}
	}
	printf("Minimum is %d",min);
}
