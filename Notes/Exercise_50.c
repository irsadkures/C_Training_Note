#include<stdio.h>
int main(){
	FILE *filep=fopen("erxad.txt","r"); //dosya i�indeki de�eri kaybetmeden deyi�tirmemizi sa�liyor
	if(filep==NULL)
	printf("dosya yok");
	else 
	printf("dosya var");
	
	return 0;
}
