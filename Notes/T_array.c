#include<stdio.h>
#include<math.h>

	
/*	char name[]="erxad mavlan";
	printf("%d",name[5]);*/

/*	             0   1   2   3   4   5   6   7   8
  int arrray[]={3.2,5.1,4.3,2.7,5.3,1.3,4.4,5.6,3.1};
  i=5;
  printf("%lf\n",4,array[4]);                        4         5.3
  printf("%lf\n",array[i]+1); 						 2.3
  printf("%lf\n",array[i+1]);                        4.4
  printf("%lf\n",array[i]+i);                        6.3
  printf("%lf\n",array[(int)arrray[4]]);              1.3
  printf("%lf\n",array[++i]);                        4.4

*/	

/*
float a=5.7;
printf("%lf\n",ceil(a));  6        
printf("%lf",floor(a));   5
return 0; 
*/

/*
int findmax(int number[],int size){
	int i;
	int biggest=number[0];
	if(size<=0){
	printf("size must be positive number:\n");
	return 0;
	}
	for(i=1;i<size;i++){
		if(biggest<number[i]){ 
			biggest=number[i];
		}                                          
	}
	return biggest;
}
int main(){
int erxad[]={3,8,5,9,10,2};
int size=6;
printf("%d",findmax(erxad,size));   // call by reference********erxad[4]  call by velue
}
*/

/*
int digit_sum(long number){     //********************
	int sum=0;
	while(number>0){
		sum+=(number%10);
		number/=10;
	}
	return sum;
}
int main(){
	int a;
	printf("enter your number:");
	scanf("%d",&a);
	printf("%d",digit_sum(a));
}
*/



