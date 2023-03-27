/*   if *******
     () = condition ? true value:fause value 
     for example   a=b<c?b:c  
                                      */
                                      
/* #include<stdio.h>
int main(){
	int a;
	printf("what is your gender?");
	scanf("%c",&a);
	
	printf("my gender is %s",a=='f'?"female":"male");	
return 0;	
	
}    */                                
 #include<stdio.h>
int main(){
	int a,b;
	printf("what is your gender?");
	scanf("%c",&a);
	b=(a=='f');
	printf("my gender is %s",b?"female":"male");	
return 0;	
	  
}                                           
