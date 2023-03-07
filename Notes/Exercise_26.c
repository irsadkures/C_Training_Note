#include<stdio.h>
int main(){
	int a=5,*ap;
	float b=3.2,*bp;
	double c=3.145,*cp;
	char d='a',*dp;
    int array[5]={1,2,3,4,5};
    int *arrayp;
    
    ap=&a;
    bp=&b;
    cp=&c;
    dp=&d;
    arrayp=&array[1];
    
    printf("%u adresindeki inttin degeri %d dir\n",ap,*ap);
    printf("%u adresindeki floatıntin degeri %f dir\n",bp,*bp);
    printf("%u adresindeki doublein degeri %lf dir\n",cp,*cp);
    printf("%u adresindeki charin degeri %c dir\n",dp,*dp);
    printf("%u adresindeki arrayin degeri %d dir\n",arrayp,*arrayp);
		
	return 0;
}
