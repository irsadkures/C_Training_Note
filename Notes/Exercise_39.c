#include<stdio.h>
struct student {
	char name[10];
	char surname[10];
	int  number;
	int age;	
};
int main(){
    struct student erxad={"erxad","abdulhani",20008814,25
};	
	
	printf("%s %s %d %d",erxad.name,erxad.surname,erxad.number,erxad.age);

	return 0;
}
