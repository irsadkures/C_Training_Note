#include<stdio.h>
int main(){
	
	int islem;
	int bakiye=1000;
	int tutar;
	
	printf("islemler\n1:para cakme\n2:para yatirma\n3:havale yapma\n4:bakiye sogulama\n5:kart iade\n\n\n");
	while(1){
	
	printf("\n\n\nislem seciniz:");
	scanf("%d",&islem);
	
	switch(islem){
		
	case 1:
		printf("bakiyeniz:%d\n",bakiye);
		printf("cakilecek tutar");
	    scanf("%d",&tutar);
	    if(tutar>bakiye){
	    printf("bakiye yetersizdir");	
		}
		else{
		bakiye =bakiye-tutar;               // ****************************
		printf("bakiyeniz:%d",bakiye);	
		}
		break;
	case 2:
	   	printf("bakiyeniz:%d\n",bakiye);
		printf("yatirilan tutar");
	    scanf("%d",&tutar);
		bakiye +=tutar;
		printf("bakiyeniz:%d",bakiye);	   //*******************************
		break;
	case 3:
	    printf("bakiyeniz:%d\n",bakiye);
		printf("havale yapilan tutar");
	    scanf("%d",&tutar);
	    if(tutar>bakiye){
	    printf("bakiye yetersizdir");	
		}
		else{
		bakiye -=tutar;                    // *******************************
		printf("bakiyeniz:%d",bakiye);	
		}
		break;
	case 4:
	    printf("bakiyeniz:%d\n",bakiye);
	    break;
	case 5:
		printf("kart iade edildi");
		break;
	default:
	    printf("bilinmeyen islem");	
		break;	
	}	
}
	return 0;
}
