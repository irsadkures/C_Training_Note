#include<stdio.h>
int benimstrlen(char *p){
	int uzunluk=0;
	int i;
	for(i=0;p[i]!='\0';i++) {
		uzunluk++;
	}
	return uzunluk;
}
int main(){
	char isim[]="erxad";
	printf("%d",benimstrlen(isim));
	
	return 0;
}
