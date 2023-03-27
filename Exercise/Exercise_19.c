#include<stdio.h>
int erxad(int sayi){
int	i=1;
for(;sayi>0;sayi--){
	i*=sayi;
}
	return  i;
}
int main(){
	int n;
	printf("factoriya sayi girin\n");
	scanf("%d",&n);
	printf("%d",erxad(n));
	return 0; 
}
