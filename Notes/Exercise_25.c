#include<stdio.h>
int main(){
	
	int i=5;
	
	int *p=&i;
	
	printf("%u\n",p);      // %u    eksi olmayan  10ci derecedeki de�eri al�yor  // de�i�kenin adres bilgisini bastiriyor
	
	printf("%d",*p);       // e�er * var ise de�i�kenim adresteki de�erini al�yor
	
	// &  de�i�kenin adres bilgisini veriyor
	
	// *  de�i�kenim adresteki de�erini al�yor
	
		
	return 0;
}
