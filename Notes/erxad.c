#include<stdio.h>
#include<conio.h>
int main(){
	// showing in screen,separate distance,appear new line;         video1
	getch();
	printf("how are you\thow are things going on\n ");
	printf("what are you doing now\n"); 
	
    // showing byte of code;                                        video2
	printf("%d byte\n",sizeof(char));                    /*1byte*/ 
	printf("%d byte\n",sizeof(char*));                   /*8byte*/
	printf("%d byte\n",sizeof(int));       				 /*4byte*/
	printf("%d byte\n",sizeof(short int)); 				 /*2byte*/
	printf("%d byte\n",sizeof(long int));			     /*4byte*/
	printf("%d byte\n",sizeof(unsigned int));            /*4byte*/  
	printf("%d byte\n",sizeof(float));                   /*4vyte*/
	printf("%d byte\n",sizeof(double));                  /*8byte*/
	printf("%d byte\n",sizeof(long ));                   /*4byte*/
	printf("%d byte\n",sizeof(long long));				 /*8byte*/	
	printf("%d byte\n",sizeof(unsigned long));           /*4byte*/
	
	//input and output concept                                      video2
	char a1=101;
	char a2=114;
	int a3=120;
	short int a4=97;
	long int a5=116;
	unsigned int a6=1994;
	int a7 =47;
	long a8=0;
	int a9=2;
	int a10 =47;
	unsigned long a11 =20;
	float a12=1.68;
	int a13='c';
	int a14='m';
	printf("%c %c %c %c %c\t %d %c %d %d %c %d\t %.2f %c %c\t %s\n",a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,"erkek ve boytak"); 
	
	//add,minus,multiplied,divided    and     change sign;          video3
	printf("%d\t",1+2);
	printf("%d\t",3-1);
	printf("%.1f\t",2.1*2);
	printf("%.1f\t",4.2/2);
	printf("%d\t",12%9);
	
	int b1=2;
	int b2=-2;
	printf("%d\t %d\n",-b1,-b2);
	
    //extra contain about video 3;
    int b3=4;
    int b4=7;
    float b5=3.5;
    
    int l=b3+b4;
    int m=b4-b3;
    float n=b4/b5;
    double o=b5*b4;
    
    printf("l=%d m=%d n=%1.f o=%.1f\n",l,m,n,o);
    
    //lesson of teacher in class;
	int a,b,c;
	printf("enter the first number:");
	scanf("%d",&a);
    printf("enter the second number:");
    scanf("%d",&b);
    c=a+b;
    printf("the total:%d",c); 
    
    
    
    
	
	
	
	
	
	
	
	return 0;
}
