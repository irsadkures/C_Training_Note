#include <stdio.h>
#include <stdlib.h>

#define BOSLUK "    " // 4 bosluk
#define YCIZGI "--------------------------" // 26 ara çizgi
char tahta[3][3]={{' ',' ',' '},
                  {' ',' ',' '},
				  {' ',' ',' '}};

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void tahtaCiz()
{
	int i;
	system("cls");
	printf("%4c%5c%4c%5c%4c%5c\n",BOSLUK,'1',
	           BOSLUK,'2',BOSLUK,'3');
	printf("%4c%s\n",BOSLUK,YCIZGI);
	for(i=0;i<3;i++){
		printf("%4c|   %c   |   %c   |   %c   |\n",
		        ((i==0)?'a':((i==1)?'b':'c')),
				tahta[i][0],tahta[i][1],tahta[i][2]);
		printf("%4c%s\n",BOSLUK,YCIZGI);
	}
}

int oynanmisHamle(int satir,int sutun)
{
   if (tahta[((satir=='a')?0:((satir=='b')?1:2))][sutun-1]
       !=' '){
	   printf("Oynanmýþ hamle, geçersiz!..\n");
       return 1;
   }
   return 0; // oynanmamýþ hamle
}


void hamleAl(char oyuncu)

{
	int hata;
	int satir,sutun;
	do{
		hata=0;
		printf("%c hamlesi:(satýr sutun)",oyuncu);
		fflush(stdin);
    	scanf("%c%d",&satir,&sutun);
    	if (sutun<1 || sutun >3){
		   printf("sutun 1-3 arasý olmalýdýr!..\n");
		   getch();
		   system("cls");
		   hata=1;
		   continue;
	    }
    	switch (tolower(satir)){
    	   case 'a': if (!oynanmisHamle(satir,sutun))
		                      tahta[0][sutun-1]=oyuncu;
		             else {
					      getch();
		                  system("cls");
		                  hata=1; 
		             }
		             break;	
    	   case 'b': if (!oynanmisHamle(satir,sutun))
		                      tahta[1][sutun-1]=oyuncu;
		             else {
					      getch();
		                  system("cls");
		                  hata=1; 
		             }
		             break;	
    	   case 'c': if (!oynanmisHamle(satir,sutun))
		                      tahta[2][sutun-1]=oyuncu;
		             else {
					      getch();
		                  system("cls");
		                  hata=1; 
		             }
		             break;
		   default:	 
		     printf("satir a-c arasý olmalýdýr!..\n");
		     getch();
		     system("cls");
		     hata=1;
		     continue;
    		
		}
	}while(hata);
}


int main(int argc, char *argv[]) {
    
    while (1){ // oyun döngüsü    	
    	tahtaCiz();
		hamleAl('o');    	
		tahtaCiz();
		hamleAl('x');		

	}
	return 0;
}
