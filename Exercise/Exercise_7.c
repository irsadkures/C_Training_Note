#include<stdio.h>
int main(){
	int n,hane=0,toplam=0;
	printf("sayiyi giriniz:");
	scanf("%d",&n);
	
	do{
		
	toplam +=n%10;
	hane++;
	n=n/10;
	printf("%d\n",n);
	printf("%d\n",toplam);	
		
	}
	
	while(n>0);
	printf("rakamlar toplami %d  %d haneli",toplam,hane);  
	return 0;
}
