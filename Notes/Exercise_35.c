#include<stdio.h>
char *gunismi(char *gundizisi[],int uzunluk,int hangigun){
	if(hangigun>0 && hangigun<8){
		return gundizisi[hangigun-1];    
	}
	else{
		return NULL;
	}
}
int main(){
	
 char *gunler[7]={"pazartesi","sali","carsenbe","persenbe","cuma","cumartesi","pazar"};
	printf("%s\n",gunler[0]);
	
	char *p=gunismi(gunler,7,5);
	if(p==NULL){
		printf("NULL"); 
	}
	else{
		printf("%s\n",p);
		printf("%s\n",p+1);
		printf("%c\n",p[0]);
	}
	return 0;
} 
