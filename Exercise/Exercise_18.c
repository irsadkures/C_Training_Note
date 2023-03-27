#include<stdio.h>
int erxad(int aa,int bb){
	return  (aa+bb);
}
int main(){
	int sayi1,sayi2;
	printf("sayi girin");
	scanf("%d  %d",&sayi1,&sayi2);
	printf("%d",erxad(sayi1,sayi2));
	
	return 0; 
}
