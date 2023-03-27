#include<stdio.h>
int main(){
	int a;
	printf("enter your letter :");
	scanf("%c",&a);
	
	switch(a){
		case 'A'...'Z':
			printf("it is uppercase letter");
			break;
		case 'a'...'z':
			printf("it is lowercase letter");
			break;		
		case '0'...'9':
			printf("it is numeric letter");
			break;
		default :
			printf("it is special letter");		
	}
	return 0;
}
