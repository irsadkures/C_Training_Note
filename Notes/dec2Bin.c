#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define BITCOUNT 8
int bin2dec(short binary[])
{
  int i;
  int decimal=0;	
  for (i=0;i<BITCOUNT;i++)
     decimal+=pow(2,i)*binary[i];	
  return decimal;
}

int main(int argc, char *argv[]) {
	
	short binary[BITCOUNT]={1,1,0,1,0,1,0,0}; //1 bayt, 8 bits
	printf("decimal number is %d\n",bin2dec(binary));
	return 0;
}
