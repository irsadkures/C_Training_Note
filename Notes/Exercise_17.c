#include<stdio.h>
void  erxad(int hata,int hata2){
	printf("wrong code %d %d",hata,hata2);
}
int main(){
	int sayi;
	printf("nagetive olmayan sayi girin: ");
	scanf("%d",&sayi);
	
	if(sayi>0){
		
		printf("right");
	
	}
	else{
		
		erxad(1994,20);
		
	}	
	return 0;
}
