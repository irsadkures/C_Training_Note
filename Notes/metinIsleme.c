#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAKUZUN 100
#define ALFABEBOYU 8

char metin[MAKUZUN];

char alfabe[]={'a','b','c','d','e','f','g','h'};

int ozet[ALFABEBOYU][MAKUZUN];
int ozetindis[ALFABEBOYU];

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void temizle()
{
  int i;	
  for(i=0;i<ALFABEBOYU;i++)	
	  ozetindis[i]=0;
}

int karakterKontrol(char harf)
{
   int i;	
   for(i=0;i<ALFABEBOYU;i++)		
	  if (alfabe[i]==harf) return 1;
   return 0;
}

int karakterIndis(char harf)
{
   int i;	
   for(i=0;i<ALFABEBOYU;i++)		
	  if (alfabe[i]==harf) return i;
   return -1;
}

int ozetOlustur()
{
   int i,indis;	
   for(i=0;i<strlen(metin);i++){
   	  indis=karakterIndis(metin[i]);
   	  ozet[indis][ozetindis[indis]++]=i+1;
   }	
	
}

int alfabeUygunmu()
{
   int i;	
   for(i=0;i<strlen(metin);i++)	
	   if (!karakterKontrol(metin[i])){
	   	  printf("alfabede olmayan karakter kullanýlmýþ!..\n");
	   	  return 0;
	   }
   return 1;
}

void ozetYazdir()
{
  int i,j;
  system("cls");
  printf("Girilen Metin\n")	;
  printf("=============\n");
  puts(metin);
  printf("\n\n");
  
  printf("Ozet Tablo\n");
  printf("==========\n");
  	
  for(i=0;i<ALFABEBOYU;i++){
     printf("%c - geçisler ",alfabe[i]);
     //printf("Ýndis :%d\n",ozetindis[i]);
     for(j=0;j<ozetindis[i];j++)	{
	    printf("%d",ozet[i][j]);
        if (j!=ozetindis[i]) printf(",");
	 }
	 printf("\n\n");
  }
}

int main(int argc, char *argv[]) {
	
	temizle();
	do{
		printf("Metni giriniz:");
		gets(metin);
	}while (!alfabeUygunmu());
	//puts(metin);
	ozetOlustur();
	ozetYazdir();
	return 0;
}
