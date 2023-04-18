#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char text[100]="Qcd2s 	1";
	char mytext[100];//Qcd2s
	char mystr[100];//1
	int i;
	
//	printf("Enter a string:");
//	scanf("%s",text); gets(text);
	sscanf(text,"%s%s",mytext,mystr);
	printf("okunan:%s-%s\n",mytext,mystr);
	
	printf("%s\n",strchr(text,'d'));
	printf("%s\n",strstr(text,"cd2"));
	printf("============\n");
	strcat(text,mytext);
	printf("New text:%s\n",text);
	strncat(text,mytext,2);
	printf("N-New text:%s\n",text);	
	
	printf("============\n");
	
	for(i=0;text[i]!='\0';i++) 
	{
		switch(tolower(text[i])){
		 case 'a'...'z': printf("alpha character\n");
		                 break;	
		 case '0'...'9': printf("numeric character\n");
		                 break;
		 default: if (isspace(text[i]))
		             printf("space character\n");
				  	
		}
	}
	   
	return 0;
}
