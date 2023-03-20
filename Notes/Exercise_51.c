#include<stdio.h>
#include<string.h>
int main(){
	char veri[25]="yazilim bilimleri";
	int uzunluk=strlen(veri);
	int i;
	
	FILE *filep=fopen("erxad111.txt","w");              //dosya olusturuyor
	if(filep==NULL){
		printf("dosya olusturulmadi");
	}
	else{
		for(i=0;i<uzunluk;i++){
			fputc(veri[i],filep);                       //dosyaya karekter yazýyot
			printf("yazilan karakterler %c\n",veri[i]);
		}
		printf("dosya basariyle yazdirildi");
		fclose(filep);                                 // dosya kapatýlýyor
	} 
	return 0; 
}
