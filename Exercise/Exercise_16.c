#include<stdio.h>
int main(){
int erxad[3][5];
int i,j;
int sum=0;
          for(i=0;i<3;i++){
      	for(j=0;j<5;j++){
      		scanf("%d",&erxad[i][j]);
		  }
	}
      for(i=0;i<3;i++){
      	for(j=0;j<5;j++){
      		printf("%d    ",erxad[i][j]);
		  }
		  printf("\n");
	  }	
	
	for(j=0;j<5;j++){
      	for(i=0;i<3;i++){
      	sum+=erxad[i][j];
		  }
		  printf("%d     ",sum);
		  sum=0;	  
	  }	
	return 0;
	
}
