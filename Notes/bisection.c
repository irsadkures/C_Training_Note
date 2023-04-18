#include<stdio.h>
#include<math.h>

  double f_func(double x1){
  	     return pow(x1,3)+(3*x1)-5;
       }

       
int main(){
	
  double x_left,x_right,x_mid;
  double f_mid;
  double epsilon;
  
     printf("enter 2 number to lookfor the y is zero:\n");
     scanf("%lf%lf",&x_left,&x_right);
     printf("enter tolerance:\n");
     scanf("%lf",&epsilon);
     
       while((f_func(x_left)*f_func(x_right))>0){
       	printf("there are not any root\n");
        printf("again enter 2 number to lookfor the y is zero:\n");
        scanf("%lf%lf",&x_left,&x_right);
        printf("enter tolerance:\n");
        scanf("%lf",&epsilon);
	   }
	   while((f_func(x_left)*f_func(x_right))<0.0){
	   printf("x_left:%.7f  x_right:%.7f  f_left:%.7f   f_right:%.7f   tolerance:%.7f\n",x_left,x_right,f_func(x_left),f_func(x_right),x_right-x_left);
	   x_mid=(x_left+x_right)/2;
	    if(f_func(x_mid)*f_func(x_left)<0.0){
	    	x_right=x_mid;
		}
		if(f_func(x_mid)*f_func(x_right)<0.0){
	    	x_left=x_mid;
		}
		if(x_right-x_left<0.001){
			break;
		}
	    
	   }
	   
        printf("x_left:%.7f  x_right:%.7f  f_left:%.7f   f_right:%.7f   tolerance:%.7f",x_left,x_right,f_func(x_left),f_func(x_right),x_right-x_left); 
  	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
