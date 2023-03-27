#include<stdio.h>
void erxad(int a,int b){
	int temp=a;
	    a=b;
	    b=temp;
	    printf("a:%d   b:%d\n",a,b);
}
int main(){
	int x=5,y=10;
	erxad(x,y);                               //call by value 
	printf("x:%d   y:%d",x,y);
	                            
	return 0;
}
