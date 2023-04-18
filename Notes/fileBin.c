#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct id{
	int idNo;
	char name[20];	
};

typedef struct id ID;



int main(int argc, char *argv[]) {
	FILE *fp;
	ID person;
	long distance;
	int i,searchedId;
	
	fp=fopen("erxad222.txt",
	         "w");
	
	for(i=0;i<3;i++){
		printf("Enter id:");
		scanf("%d",&person.idNo);
		fflush(stdin);
		printf("Enter name:");
		gets(person.name);
		
		distance=sizeof(ID)*(person.idNo-1);
		fseek(fp,distance,SEEK_SET);
		
		fwrite(&person,sizeof(char),sizeof(ID),fp);
	}
	fclose(fp);
	
	fp=fopen("erxad222.txt",
	         "r");	
	printf("Enter your person Id:");
	scanf("%d",&searchedId);
    distance=sizeof(ID)*(searchedId-1);
	fseek(fp,distance,SEEK_SET);
		
	fread(&person,sizeof(char),sizeof(ID),fp);
	
	printf("%d-%s\n",person.idNo,person.name);	
		
	return 0;
}
