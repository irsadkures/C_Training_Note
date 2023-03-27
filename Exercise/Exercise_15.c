#include<stdio.h>
int main(){
	int misal;
	int erxad[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int i,j;
	int mavlan[3][3];
	
	printf("misal sayisini giriniz:");
	scanf("%d",&misal);
	
	switch(misal){
    case 1:	       
	printf("%d",erxad[1][2]);
	break;
	
	case 2:
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
		  printf("%d ",erxad[i][j]);	
		}
		printf("\n");
	}	
	break;
	
	case 3:
		for(i=0;i<3;i++){
		for(j=0;j<3;j++){
		  scanf("%d",&mavlan[i][j]);
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
		  printf("%d ",mavlan[i][j]);	
		}
		printf("\n");
	}	
	break;		
}
	return 0;
}
