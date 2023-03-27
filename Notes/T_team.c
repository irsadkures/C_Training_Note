#include<stdio.h>
int main(){
	int team;
	printf("enter your team first letter:");
	scanf("%c",&team);
	team=toupper(team);                                        //  toupper    tolower  *********************** 
	printf("your team nema name is %s",team=='G'?"galatasaray":
	                                   team=='F'?"fenerbahca":
									   team=='B'?"besiktas":"nothing");
	return 0;
} 
