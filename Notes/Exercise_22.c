#include<stdio.h>
void erxad(int mavlan[][4],int size){
	int i,j;
	for(i=0;i<size;i++){
		for(j=0;j<4;j++){
			printf("%d",mavlan[i][j]);
		}
		printf("\n");
	}	 
}
int main(){
	
	int matris[3][4];
	printf("enter your number :\n");
	int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			scanf("%d",&matris[i][j]);
		}
	}
	
	erxad(matris,3);
	return 0;
}
