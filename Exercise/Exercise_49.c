#include<stdio.h>
int main(){
	FILE *filep=fopen("erxad.txt","w");
	if(filep==NULL)
	printf("dosya olusturulmadi");
	else
	printf("dosya olusturuldi");
	
	return 0;
} 
