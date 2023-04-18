#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
//	double a[3],toplam=0.0;
//	int i;
//	
//	a[0]=1.2;
//	a[1]=2.3;
//	a[2]=3.1;
//	
//	for(i=0;i<3;i++){
//		printf("Dizi elemanýn degeri:%.2f\n",a[i]);
//		toplam+=a[i];
//	}
//	printf("Dizi toplamý:%.2f\n",toplam);
/*
   char isim[]="metin turan",temp;
   int i=0,j=strlen(isim)-1;
    	printf("dizginin boyu : %d\n",j);  
	for(;i<j;i++,j--)
	{                          
		temp=isim[i];
		isim[i]=isim[j];
		isim[j]=temp;
	}
	
	for(i=0;i<strlen(isim);i++)
    printf("%c",isim[i]);
	printf("\n");
*/	
	int A[]={5,7,12,8,9};
	int B[3]={3,9,7};
	int C[5];
	int sizeA=5,sizeB=3;
	int durum,secim,min,max,i;
	do{
		printf("**************************\n");
		printf("* 1- A-B vektor islemi   *\n");
		printf("* 2- B-A vektor islemi   *\n");
		printf("**************************\n");
		printf("           Seciminiz(1/2):");
		durum=scanf("%d",&secim);
		if (durum!=1 || (secim!=1 && secim!=2) ){
			printf("Secimi doðru giriniz lutfen,sizinle ugrasacak vaktim yok!...\n");
			getch(); //bir tusa basýlmasý beklenecek
			fflush(stdin); //giriþ bufferýný temizle
			system("cls");
		}	
    } while (durum!=1 || (secim!=1 && secim!=2) );
	
	if (secim==1)
	    printf("seciminiz --> A-B vektor islemi\n ");
	else
		printf("seciminiz --> B-A vektor islemi\n ");
	//ortak olan ve farklý olanlarý belirledim
	if (sizeA>sizeB)
	{
		min=sizeB;
		max=sizeA;
	}
	else
	{
		min=sizeA;
		max=sizeB;
	}
		
	switch (secim){
		case 1: for(i=0;i<min;i++)
		           C[i]=A[i]-B[i];
		        for(;i<max;i++)
		           if (max==sizeA)
		               C[i]=A[i];
		           else
				       C[i]=-B[i];
				break;
		case 2: for(i=0;i<min;i++)
		           C[i]=B[i]-A[i];		
		        for(;i<max;i++)
		           if (max==sizeA)
		               C[i]=-A[i];
		           else
				       C[i]=B[i];
				break;
	}
	for(i=0;i<max;i++)
	    if (i==(max-1))
	       printf("%d\n",C[i]);
        else
	       printf("%d,",C[i]);
	
	
	return 0;
}
