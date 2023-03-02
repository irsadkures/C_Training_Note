#include<stdio.h>
int main(){
	
	int sayilar[]={1,2,3,4,5};    // location numbers  0 1 2 3 4
	int i=0;        			  // we can write i=0 to out of the for()	
	for(;i<5;i++){
		printf("%d\n",sayilar[i]);
	}
	
	return 0;
}
