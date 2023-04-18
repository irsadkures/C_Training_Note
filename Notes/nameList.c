#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define MAXNAMES 20

char* namePtr[MAXNAMES];
int nameCnt=0;

void getName()
{
	char name[100];
	printf("Enter Name:");
	scanf("%s",name);
	namePtr[nameCnt]=(char *)
	                 malloc((strlen(name)+1)*sizeof(char));
    strcpy(namePtr[nameCnt++],name);
}

void display()
{
	int i;
	for (i=0;i<nameCnt;i++)
	   printf("%s\n",namePtr[i]);
}

int findName()
{
	char name[100];
	int i;
	printf("Enter your name to be searched:");
	scanf("%s",name);
	for (i=0;i<nameCnt;i++)
	    if (strcmp(namePtr[i],name)==0){
		   printf("Name is found in the list\n");
	       return i;
		}
	printf("Name is not found in the list\n");
	return -1;	
}

void replaceName()
{
	char name[100];
	int i=findName();
	if (i<0) return;
	printf("Enter your name to be replaced:");
	scanf("%s",name);
	free(namePtr[i]);
	namePtr[i]=(char *)
	                 malloc((strlen(name)+1)*sizeof(char));
	strcpy(namePtr[i],name);	
}   

int main(int argc, char *argv[]) {
	
	int i;
	for (i=0;i<3;i++)
	   getName();
	display();
	replaceName();
	display();
	return 0;
}
