#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct car{
	char owner[20];
	char brand[20];
	int  model;
	char color[20];
};

typedef struct car Car;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	FILE *fp;
	char ch;
	Car *car1=(Car *)malloc(sizeof(Car));
	
	fp=fopen("C:\\Users\\uskudar\\Desktop\\mycars.txt",
	         "w");
	if (fp==NULL){
		printf("The file does not exist!\n");
		exit(1);
	}
	for(i=0;i<3;i++){
		fflush(stdin);
		printf("Enter owner name:");
		gets(car1->owner);
		printf("Enter brand name:");
		scanf("%s",car1->brand);
		printf("Enter model:");
		scanf("%d",&car1->model);	
		printf("Enter color:");
		scanf("%s",car1->color);

	    fprintf(fp,"%s\t%s\t%d\t%s\n",car1->owner,
		                      car1->brand,
		                      car1->model,
		                      car1->color);
      }
	
    
//	while((ch=getc(stdin))!=EOF)
//	{
//		putc(ch,fp);
//		//printf("enter char:");
//	}
	fclose(fp);
//	getch();
//	fp=fopen("C:\\Users\\uskudar\\Desktop\\myfile.txt",
//	         "r");
//    while((ch=getc(fp))!=EOF)
//	{
//		putchar(ch);
//		//printf("enter char:");
//	}
//	fclose(fp);
	return 0;
}
