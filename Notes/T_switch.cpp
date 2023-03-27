#include<stdio.h>
int main(){
   int number;
   printf("enter your number");
   scanf("%d",&number);
   
switch(number){
	case 0:       
	case 1:
	case 2:                                   //collact the same case ..........
	case 3:	
		printf("you are a good student");
		break;
	case 4:
	    printf("you are a bad student");
		break;
	default:
		printf("wrong number");
}    		
	return 0; 
}
