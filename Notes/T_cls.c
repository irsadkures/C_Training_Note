//system("cls");         ***********    clear the screen


//system("pause");       ***********    stop the system and it can be run with any key 

/*
    do{
        scanf("%c",&skip_ch);             ======  fflush(stdin);    clear the buffer    
      }while(skip_ch !='\n')  */
    
//  EOF(end of file)=-1    and    ctrl+z 

//   input_status= scanf("%d",&score);      scanf  score= -3,-4,5,6,7,8    but   input_status=6   (how many time will be in scanf)  

/*
#include <stdio.h>
void main()
{
    int ch;
    do {
        ch=getchar();
        printf("ch=%d\n", ch );         you can go out of loop with ctrl+z  because ctrl+z = -1   
    } while ( ch!=EOF );
}     */

/*
#include <stdio.h> 
// copy input to output; 1st version 
main()
{
	int c; 
	c = getchar();
	while (c != EOF) 
	{
		putchar(c);                   // ********* putchar();     like  printf 
		c = getchar();
	}
}*/
/*
#include <stdio.h>
main(){
	int input_status,score,sum=0; 
	
	input_status=scanf("%d",&score);         //  %d and %c   fark etmez ctrl+z ile döngüden çikacaz
	while (input_status != EOF)    
	{
    printf("%d\n",score);
    sum+=score;
    	input_status = scanf("%d",&score); 
	}
	printf("%d",sum);
} */
