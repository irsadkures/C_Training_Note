#include<stdio.h>
#define     KMS_PER_MILE     1.609
int main (){
    //it is changed automatically;	
	int x=6;
	float y=1.56;
	printf("%.2f\n",x/y);
	
	printf("%f\n",2*2.25/1.5+3.38);
	printf("%d\n",(int)4.5);
	printf("%f\n",(float)4);
	
	//example of scanf;
	double miles,kms;
	printf("enter the distance in miles:");
	scanf("%lf",&miles);                        /* float =%f    double=%lf   */
	kms=KMS_PER_MILE*miles;
	printf("that equals %.2f kilomatres\n",kms);	 
	return 0; 
}
