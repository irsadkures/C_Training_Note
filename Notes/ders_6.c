#include<stdio.h>
int main(){
	 int a,b;
	 printf("enter your number:");
	 scanf("%d",&a);
	 
	 if(a>10){
	 	printf("welcome:\n");
	 	int b=0;
	 	while(b<10){
	 		printf("%dfine\n",b);
	 		b++;
		 }
	 printf("%d bitti",b);	
	 }
	else{
		int n;
	int c=1;
	printf("n=");
	scanf("%d",&n);
		 
	 	while(n!=0){
	 		printf("%d\n",n);
	 		c=n*c;
	 		n--;
		 }
	 	printf("%d",c);	
		 
}
       return 0; 
}
