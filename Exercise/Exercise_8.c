#include<stdio.h>
int main(){
	int misallar;
	int i,j;
	printf("misallar\n1.for\n2.for\n3.for\n");	
	printf("islem seciniz:");
	scanf("%d",&misallar);
	
	switch(misallar){
	  case 1:
	  	for(i=0;i<10;i++){	
	  		printf("%d\n",i);		
		  }
	  break;  
	  case  2:	
	  	for(i=0,j=1;i<10&&j<5;i++,j++){
	  		
	  		printf("%d  %d\n",i,j);		
		  }
	  break;	  
	  case  3:
	     	for(i=0;i<3;i++){
	     		
	  	     	for(j=0;j<3;j++){
	  	     	printf("%d  %d\n",i,j);	
				   }		
		  }
	  break;		
	}	
	return 0;
}
