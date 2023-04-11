#include<stdio.h>
int main(){
	int a=5;
	int *p=&a;
	int **t=&p;
	
	printf("%d\n",a);
	
	*p=6;
	printf("%d   %d   %u   %d   %u  %u   %d    %u  %u",**t,*t,t,*p,p,&p,a,&a,&t);
	
	
	return 0;
} 
