#include<stdio.h>
int main(){
	FILE *filep=fopen("erxad.txt","r"); //dosya içindeki deðeri kaybetmeden deyiþtirmemizi saðliyor
	if(filep==NULL)
	printf("dosya yok");
	else 
	printf("dosya var");
	
	return 0;
}
