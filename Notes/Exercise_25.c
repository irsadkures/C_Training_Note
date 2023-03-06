#include<stdio.h>
int main(){
	
	int i=5;
	
	int *p=&i;
	
	printf("%u\n",p);      // %u    eksi olmayan  10ci derecedeki deðeri alýyor  // deðiþkenin adres bilgisini bastiriyor
	
	printf("%d",*p);       // eðer * var ise deðiþkenim adresteki deðerini alýyor
	
	// &  deðiþkenin adres bilgisini veriyor
	
	// *  deðiþkenim adresteki deðerini alýyor
	
		
	return 0;
}
