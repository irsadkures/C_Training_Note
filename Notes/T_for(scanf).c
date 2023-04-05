#include<stdio.h>
int main(){
	int number;
	int i,sum=0;
	
	printf("enter positive integer value:");
	
	for(scanf("%d",&number);number<1;scanf("%d",&number)){
	printf("positive integer value is expected:\n");
	printf("enter positive integer value:");	
	}
	 for(i=1;i<=number;i++){
	 	sum+=i;
	 }
	 	printf("sum of integer value between %d and %d is %d :",i,number,sum);
	return 0;
} 
