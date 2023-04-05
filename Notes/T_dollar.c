#include<stdio.h>
int main(){
	
   int erxad[20];
   int 	dollars,quarters,dimes,nickels,pennies,total_dollars,total_cents,change;
   
   printf("enter your firstname please:");
   scanf("%s",erxad);
   printf("\nMr %s welcome to your bank account \n",erxad); 
   printf("please,enter your coin information:\n");
   
   printf("number of dollars:");
   scanf("%d",&dollars); 
   printf("number of quarters:");
   scanf("%d",&quarters);
   printf("number of dimes:");
   scanf("%d",&dimes);
   printf("number of nickels:");
   scanf("%d",&nickels);
   printf("number of pennies:");
   scanf("%d",&pennies);
   
   total_cents=dollars*100+quarters*25+dimes*10+nickels*5+pennies;
   total_dollars=total_cents/100;
   change=total_cents%100;
   
   printf("total_cents=%d\ntotal_dollars=%d\nchange=%d\n%s",total_cents,total_dollars,change,"congratulation!!!"); 
   
	return 0;
}
