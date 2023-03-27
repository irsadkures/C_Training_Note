#include<stdio.h>
#include<math.h>
int func1(void){
int var1=5;                                             //local variable
printf("var1 value is %d\n",var1);
return var1;
}
double power2(double b){
	return pow(b,2);
}
int main(){
	float var1=7;                                       //local variable
	printf("var1 value is %f\n",var1);
	var1=func1();
	printf("var1 value is %f\n",var1);
	var1=power2(var1);
	printf("var1 value is %f\n",var1); 
	return 0; 
}

