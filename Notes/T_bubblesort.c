#include<stdio.h>
erxad(int number[],int n){
	int i,j;
	for(j=0;j<n;j++){
	for(i=0;i<n-1;i++){
		if(number[i]>number[i+1]){
			int temp=number[i];
			number[i]=number[i+1];
			number[i+1]=temp;
	}
	}
	}
    }
int main(){
	int number[6]={4,6,2,8,5,7};
	erxad(number,6);
	printf("%d\n",number[0]);
	printf("%d\n",number[1]);
	printf("%d\n",number[2]);
	printf("%d\n",number[3]);
	printf("%d\n",number[4]);
	printf("%d\n",number[5]);
	 
	return 0;
}
