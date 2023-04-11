#include<stdio.h>
#include<math.h>
#define  PI   3.14
 
      double findarea(double r){           //**********************************
      return PI*pow(r,2);	               // *********************************
	  }
	  int main (){
	  	
	  	int quentity;
	  	int D1,D2,width,density;
	  	double donutweight,totalweight,donutarea,donutvalue;
	  	
	  	printf("D1=");
	  	scanf("%d",&D1);
	  	printf("D2="); 
	  	scanf("%d",&D2);
	  	printf("width=");
	  	scanf("%d",&width); 
	  	printf("density=");
	  	scanf("%d",&density);
	  	printf("quentity=");
	  	scanf("%d",&quentity);
	  	
	  	donutarea=findarea(D1/2)-findarea(D2/2);
	  	donutvalue=donutarea*width;
	  	donutweight=donutvalue*density;
	  	totalweight=donutweight*quentity;
	  	
	  	printf("donutweight=%lf   totalweight=%lf",donutweight,totalweight);
	  	
	  	return  0;
	  }
