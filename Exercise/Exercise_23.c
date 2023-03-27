#include<stdio.h>
int mavlan(char name[]){
	int uzunluk=0;
	int i;
	for(i=0;name[i]!='\0';i++){      // 'e' 'r' 'x' 'a' 'd' '\0'     6 tane 
		uzunluk++;
	}
	return uzunluk;
}
int main(){
	
	char isim[20];
	printf("enter your name:");
	scanf("%s",isim);
	
	printf("%d",mavlan(isim));
	
	
	
	return 0;
}
