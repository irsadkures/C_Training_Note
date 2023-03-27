#include<stdio.h>
int main(){
	float toplam=0.0;
	float sayilar[5];
	int i;
	for(i=0;i<5;i++){
		printf("sayilari giriniz:");
		scanf("%f",&sayilar[i]);
	
		}
			for(i=0;i<5;i++){
			toplam+=sayilar[i];
		 
	}
	printf("%.2f\n",toplam/5);
	printf("%.2f\n%.2f",sayilar[2],sayilar[3]);
	
	return 0;
}
