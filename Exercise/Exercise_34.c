 #include<stdio.h>
#include<string.h>
char *donus(char *p,int index){   //donecek olan yazidir sayi de�il bu y�zden char funkisye kolland�k ve char *xxx() bu �ekilde
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
}          /*e�er pointerlara bir adres vermezse ,istedi�i bir adresi al�r, belki sistem dosya adresini al�p yanl��l�k 
��k�rabilir, bu y�zden �nlemek i�in null veya 0 pointerlara versek ba�ka adresleri aramiyor
    int *p;
    printf("%d",*p);       bunun gibi          so      int *p=NULL;  
*/
