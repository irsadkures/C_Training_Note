 #include<stdio.h>
#include<string.h>
char *donus(char *p,int index){   //donecek olan yazidir sayi deðil bu yüzden char funkisye kollandýk ve char *xxx() bu þekilde
    int number=strlen(p); 
	if(index>number){
		return NULL;    //*** you can use NULL or 0 *** these are same 
	}
	else{
		return p+index;
	}
}
int main(){
	char dizi[]="yazilim";
	char *a=donus(dizi,2);                                       
	if(a==NULL){
		printf("pointer null");
	}
	else{
		printf("%s\n",a);
		printf("%s\n",a+1);
		printf("%c",a[0]);
	}
	return 0;
}          /*eðer pointerlara bir adres vermezse ,istediði bir adresi alýr, belki sistem dosya adresini alýp yanlýþlýk 
çýkýrabilir, bu yüzden önlemek için null veya 0 pointerlara versek baþka adresleri aramiyor
    int *p;
    printf("%d",*p);       bunun gibi          so      int *p=NULL;  
*/
