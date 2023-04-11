#include<stdio.h>
int get_int(int n_min,int n_max){
	int in_vol,status;
	int skip_ch;
	int error;                        
	do{
		error=0;
		printf("enter the integer in the range from %d",n_min);
		printf("to %d inclusive>",n_max);
		system("pause");
		status=scanf("%d",&in_vol);
		if(status=1){
			error=1;
			scanf("%c",&skip_ch);
			printf("involid charactar>>%c>>",skip_ch);
			printf("skipping rest of line \n");
		}
			else if(in_vol<n_min||in_vol>n_max){
				error=1;
				printf("number %d is not in range\n",in_vol);	
			} 
			do{
				scanf("%d",&skip_ch);
			}while(skip_ch!='\n');
		
		
			
		
	}while(error);
	return in_vol;
}
int main(){
	int erxad,mavlan;
	scanf("%d\n",&erxad);
	scanf("%d\n",&mavlan);
	get_int(erxad,mavlan);
	
	
	return 0;
}
