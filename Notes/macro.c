#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define myPow(x,n) (pow(x,n))

      

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int c=myPow(3,5);
	printf("5 power of 3:%d\n",c);
	return 0;
}
