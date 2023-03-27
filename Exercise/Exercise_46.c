#include<stdio.h>
#include<string.h>
struct student{
	char isim[20];
	char soyisim[20];
	int numara;
};
void show(struct student *p){
	printf("%s %s %d",p->isim,p->soyisim,p->numara);
}
int main(){
	struct student student1={"erxad","abdulgani",24	};
	show(&student1);
	return 0; 
}
