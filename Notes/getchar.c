/*
#include<stdio.h>
int main(void)
{
    int a,b,c;
    printf("please input num a:\n");
    a=getchar();                               //  ***********  getchar();       there is \n after the letter we gave   
    printf("please input num b:\n");
    b=getchar();
    printf("please input num c:\n");
	c=getchar();	
    printf("%d,%d,%d",a,b,c);
	}

--------------------- */


/*
#include"stdio.h"
int main(void)
{
    int a,b,c;
    printf("please input num a:\n");
    a=getchar();
	getchar();
    printf("please input num b:\n");           //  ***********  getchar();       there is \n after the letter we gave 
    b=getchar();
	getchar();
    printf("please input num c:\n");
	c=getchar();
	getchar();
    printf("%d,%d,%d\n",a,b,c);
}
--------------------- */
/*
#include"stdio.h"
int main(void)
{
    int a,b,c;
    printf("please input num a:\n");
    a=getchar();
	fflush(stdin);
    printf("please input num b:\n");           //  ***********  fflush(stdin);     clear the buffer  
    b=getchar();
	fflush(stdin);
    printf("please input num c:\n");
	c=getchar();
	fflush(stdin);
    printf("%d,%d,%d\n",a,b,c);
}
--------------------- */
/*
#include "stdio.h"
#include  <conio.h>
int main(void)
{
    int a,b,c;
    printf("please input num a:\n");
    a=getch();	
    printf("please input num b:\n");           //  ***********   getch();    diractly read charactar 
    b=getch();
    printf("please input num c:\n");
	c=getch();
    printf("%d,%d,%d\n",a,b,c);

--------------------- */
/*
#include "stdio.h"
int main(void)
{
    int a,b,c;
    printf("please input num a:\n");
    scanf("%d",&a);
    printf("please input num b:\n");	     //  ***********    scanf %d  
    scanf("%d",&b);
    printf("please input num c:\n");
    scanf("%d",&c);	
    printf("%d,%d,%d\n",a,b,c);
}
--------------------- */
/*
#include "stdio.h"
int main(void)
{
    int a,b,c;
    printf("please input num a:\n");
    scanf("%d",&a);
	printf("getchar():%d\n",getchar());
    printf("please input num b:\n");	      //  ***********   getchar(); get char which is between first and second scanf 
    scanf("%d",&b);
    printf("please input num c:\n");	
    scanf("%d",&c);	
    printf("%d,%d,%d",a,b,c);
}
--------------------- */
/*
#include "stdio.h"
int main(void)
{
    char a,b,c;
    printf("please input num a:\n");
    scanf("%c",&a);
    printf("please input num b:\n");            //  ***********   scanf %c    there is \n after charactar we gave 
    scanf("%c",&b);   
    printf("please input num c:\n");
    scanf("%c",&c);
    printf("%c,%c,%c\n",a,b,c);
}
--------------------- */



