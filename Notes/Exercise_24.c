#include<stdio.h>
#include<string.h>         // ********  strlen()       number of string
void erxad(char mavlan[]){
	int uzunluk,a,i;
	uzunluk=strlen(mavlan);   //  ********
	printf("%d\n",uzunluk);    // *********
	for(i=0;i<uzunluk/2;i++){
		a=mavlan[i];
		mavlan[i]=mavlan[uzunluk-1-i];    
		mavlan[uzunluk-1-i]=a;
	}
}
int main(){
	char isim[20];
	printf("enter your name :");
	scanf("%s",isim);
	
	erxad(isim);        //*************
	printf("%s",isim);	//	****************
	return 0;
}
