#include<stdio.h>
#include<math.h>

int main(){
	//example of function;
	int a,b,c;
	float x1,x2;
	float delta;
	printf("a=");
	scanf("%d",&a);
	printf("b=");
	scanf("%d",&b);
	printf("c=");
	scanf("%d",&c);
	
	delta= b*b-4*a*c ;                                  
	x1=(-b+(sqrt(delta)))/2*a;
	x2=(-b-(sqrt(delta)))/2*a;
	printf("x1=%.2f x2=%.2f",x1,x2); 
	 
	return 0;
}
