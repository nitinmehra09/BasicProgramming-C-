#include<stdio.h>

void main(){
	int a[0],i,f=0,j;
	
	for(i=0;i<10;i++){
	
	printf("Enter %d position number :",i);
	scanf("%d",&a[i]);
}
	for(i=0;i<10;i++){
	
		for (j=2;j<a[i]/2;j++){
		
		if(a[i]%j==0){
			f=1;
			break;			
		}
	}
}
	if(f==1){
		printf("%d is non prime number \n",a[i]);
	}
	else{
		printf("%d is prime number",a[i]);
	}
}

