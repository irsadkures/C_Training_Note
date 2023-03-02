#include<stdio.h>
int main(){
	char isim[]="erxad";
	printf("%c\n",isim[2]);
	
	char name[20];
	printf("enter your name:");
	scanf("%s",name);                     //we do not enter & when using %s
	printf("your name is %s",name);		  //in scanf   it can not read the words after  (kongge)  example: erxad xxx(not read xxx)
	
	
	
	
	
	
	
	
	return 0;
}
