#include<stdio.h>
int main(){
	int sayilar[5]={1,2,3,4,5};
	int *p=sayilar; 				//  *p=&sayilar[0]  ikisi aynýdýr******baþlangýç adresini veriyor
	printf("%u\n",p);      
	printf("%u\n",p+1);
	printf("%u\n",p+2);
	printf("%u\n",p+3);
	printf("%u\n",p+4); 
	
	printf("%u\n",*p);      
	printf("%u\n",*p+1);
	printf("%u\n",*p+2);
	printf("%u\n",*p+3);          //   *p = p[0] =sayilar[0] ayný naticeyi verir
	printf("%u\n",*p+4);
	
	printf("%u\n",p[0]);      
	printf("%u\n",p[1]);
	printf("%u\n",p[2]);
	printf("%u\n",p[3]);
	printf("%u\n",p[4]);
	
	printf("%u\n",sayilar[0]);      
	printf("%u\n",sayilar[1]);
	printf("%u\n",sayilar[2]);
	printf("%u\n",sayilar[3]);
	printf("%u\n",sayilar[4]);
	
	
	return 0;
}
