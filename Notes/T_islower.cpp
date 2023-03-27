#include<stdio.h>
#include<ctype.h>                     //*****************************************
int main(){
	
	int a;
	printf("enter your letter:");
	scanf("%c",&a);
	
	if(isupper(a)){
		printf("it is uppercase latter");    // isupper   islower  isdigit    
	}
	else if(islower(a)){
		printf("it is lowercase latter");
	}	
	else if(isdigit(a)){
		printf("it is numeric latter");                                                                                     
	}	
	else {
		printf("it is special latter");
	}
	
	return 0;
}
