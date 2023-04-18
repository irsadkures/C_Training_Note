#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define ROWSIZE 2
#define COLSIZE 3

int matrix[ROWSIZE][COLSIZE];
int Tmatrix[COLSIZE][ROWSIZE]; //Transposed matrix                              

void fillMatrix()
{
  int i,j;
  for(i=0;i<ROWSIZE;i++) // process rows	
      for(j=0;j<COLSIZE;j++) // process columns
      {
      	printf("MATRIX[%d,%d]:",i+1,j+1);
      	scanf("%d",&matrix[i][j]);
	  }
}

void transpose()
{
  int i,j;
  for(i=0;i<COLSIZE;i++) // process columns	
      for(j=0;j<ROWSIZE;j++) // process rows
          Tmatrix[i][j]=matrix[j][i];
          
}

void dispMatrix(int matrix[] [(ROWSIZE>COLSIZE)?ROWSIZE:COLSIZE], int rowsize,int colsize)
{
  int i,j;
  for(i=0;i<ROWSIZE;i++) // process rows	
      for(j=0;j<COLSIZE;j++) // process columns
      	printf("MATRIX[%d,%d]:%d\n",i+1,j+1,matrix[i][j]);

}
int main(int argc, char *argv[]) {
	
	fillMatrix();
	printf("========ORIGINAL MATRIX========\n");
	dispMatrix(matrix,ROWSIZE,COLSIZE);		
	printf("===============================\n\n");
	printf("========TRANSPOSED MATRIX========\n");
	transpose();
	dispMatrix(Tmatrix,COLSIZE,ROWSIZE);
	printf("===============================\n\n");
	
	
	return 0;
}
