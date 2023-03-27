#include<stdio.h>
int main(){
	FILE *filep;
	char text[256];
	filep=fopen("yaz.txt","a");
	
	if(filep==NULL){
		printf("dosya olusturulmadi ");
	}
	else{
		printf("bir sey yazim ;");
		fgets(text,256,stdin);
		fputs(text,filep);
		printf("dosya yazildi");
		fclose(filep);  
	}
	
	return 0;
}
