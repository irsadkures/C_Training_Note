#include<stdio.h>
#include<string.h>
struct student{
	char isim[20];
	char soyisim[20];
	int numara;
};
void getvalue(struct student *p){
	strcpy(p->isim,"mavlan");
	strcpy(p->soyisim,"salahiddin");
	p->numara=55;
	 
}

int main(){
	struct student student1={"erxad","abdulgani",24	}; 
	getvalue(&student1);
	printf("%s %s %d",student1.isim,student1.soyisim,student1.numara);
	return 0; 
}
