#include<stdio.h>
#include<string.h>
frequency(char isim[],char search,int *freq){
	int i;
	for(i=0;i<strlen(isim);i++){
		if(search==isim[i]){
			(*freq)++;
		}
	}
}
int main(){
	int freq=0;
	char isim[]="bugun hava yag�sl�";
    frequency(isim,'a',&freq);
    printf("%d",freq);
	return 0;
} 
