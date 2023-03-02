#include<stdio.h>
int main(){
	int islem,i,toplam=0,k=0;
	printf("sec:");
	scanf("%d",&islem);
	switch(islem){	
case 1:	
	for(i=0;i<=10;i++){
	
	if(i%2==1){
		continue;
	}	
	toplam+=i;	
printf("%d\n",i);	
}	
	printf("%d",toplam);
	break;

  case 2:
	while(k<=10){
	
	if(k%2==1){
		k++;
		continue;
	}	
	toplam+=k;	
	k++;
	printf("%d\n",k);	
}	
	printf("%d",toplam);
	break;
}
	return 0; 
}
