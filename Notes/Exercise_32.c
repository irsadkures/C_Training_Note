#include<stdio.h>
#include<string.h>
int main(){
	char yazi[]="erxad";
    char *p=yazi;
    printf("%u\n",yazi);
    printf("%c",*p);                    
	printf("%c",*(p+1));
	printf("%c",*(p+2));
	printf("%c",*(p+3));
	printf("%c\n\n",*(p+4));
	
	printf("%s\n",yazi);
	printf("%s\n",p);      
	printf("%s\n",p+1);                     
	printf("%s\n",p+2);                                         
	printf("%s\n",p+3);
	printf("%s\n",p+4);
	
	return 0;
}
