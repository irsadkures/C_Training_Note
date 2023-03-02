#include<stdio.h>
int main(){
	
	// replace the number;
    int x=5;
	int y=7;
	int a=2;
	
	x=y;
	y=x+1+a;
	printf("x=%d\t y=%d\t a=%d\n",x,y,a);           	/* x=7  y=10  a=2 */
	printf("x=%d\t y=%d\t a=%d\n",--x,++y,a++);         /* x=6  y=11  a=2 */ 
	printf("x=%d\t y=%d\t a=%d\n",x--,y++,a++);         /* x=6  y=11  a=3 */
	printf("x=%d\t y=%d\t a=%d\n",x,y,a);    			/* x=5  y=12  a=4 */
	
	x += a+1;
	y -= x+3;
	a -= x+y-7;											
	printf("x=%d y=%d a=%d\n",x,y,a);               	/* x=10 y=-1  a=2 */
	
	x=y=a+4;
	printf("x=%d y=%d a=%d\n",x,y,a);  					/* x=6  y=6   a=2 */
	
	// account of many numbers;
	printf("%d\t",x*y/a);                               // 18
	printf("%d\t",x-y*a);								// -6	
	printf("%d\t",a%y*x);								// 12
	printf("%d\t",x-a+y);								// 10
	printf("%d\t",(x+y)*2);								// 24
	
	

	
	return 0; 
	
}
