#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i=1,sum=0;
	
	if (argc>1){
        printf("My program name is %s\n",argv[0]);
		for(;i<argc;i++)
	        sum+=atoi(argv[i]);
	    printf("The sum of values is %d\n",sum);
	}
	else return;
	return 0;
}
