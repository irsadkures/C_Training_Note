#include<stdio.h>
int main(){
	//if  ,  else if   ,  else
	int test1,test2,final;
	float avarage,point_of_4;
	printf("test1:");
	scanf("%d",&test1);
	printf("test2:");
	scanf("%d",&test2);
	printf("final:");
	scanf("%d",&final);
	printf("the point as 4:");
	scanf("%f",&point_of_4);
	
	avarage=(float)(test1+test2+final)/3;
	printf("avarage=%.1f\n",avarage);
	
	if(avarage>=90){
	printf("AA\n");
	if(point_of_4>3.75){
	printf("100% scholarship");
	}else{
	printf("75% scholarship");	
	}
	}
	else if(90>avarage&&avarage>=85){
	printf("BA");	
	}
	else if(85>avarage&&avarage>=80){
	printf("BB");	
	}
	else if(80>avarage&&avarage>=75){
	printf("CB");	
	}
	else if(75>avarage&&avarage>=70){
	printf("CC");	
	}
	else if(70>avarage&&avarage>=65){
	printf("DB");	
	}
	else if(65>avarage&&avarage>=60){
	printf("DD");	
	}
	else{
	printf("fail");
	}	
	return 0;
}
