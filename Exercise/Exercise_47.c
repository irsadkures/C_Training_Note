#include<stdio.h>
#include<string.h>
struct student{
	char isim[20];
	char soyisim[20];
	int numara;
};
struct student *getvalue(struct student *p){
	strcpy(p->isim,"mavlan");
	strcpy(p->soyisim,"salahiddin");
	p->numara=55;
	return p; 
}

int main(){
	struct student student1={"erxad","abdulgani",24	}; 
	struct student *tut;
	tut=getvalue(&student1);
	printf("%s %s %d",tut->isim,tut->soyisim,tut->numara);
	return 0; 
}
