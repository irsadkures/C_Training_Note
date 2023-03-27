#include<stdio.h>
int max(int *a,int size){         // you can use a[] instead of *a
	int maxs=*a;              // you can use a[0] instead of *a 
	printf("%d\n",*a);
	int i;
	for(i=1;i<size;i++){
		if(a[i]>maxs){
			maxs=a[i];
		}
	}
	return maxs;
}
int main(){
	int sayilar[5]={3,4,43,100,2};
	int maxnumber=max(sayilar,5);
	printf("%d",maxnumber);
	
	return 0;
}
