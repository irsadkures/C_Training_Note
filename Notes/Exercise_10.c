#include<stdio.h>
#define true 1
int main(){
    int toplam=0;
	int i;
	int sayi;
	
	for(i=0 ;true;i++){
		
		printf("sayi giriniz(cikmak icin -1 yi basiniz)");
		scanf("%d",&sayi);
		
		if(sayi == -1){
			
			break;
		}		
		toplam +=sayi;	
	}	
	
	printf("%d",toplam);	 
	return 0;
}
