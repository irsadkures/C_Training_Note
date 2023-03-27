#include<stdio.h>
#include<string.h>
struct student{
	char isim[20]; 
	char soyisim[20];
	int numara;
};
int main(){
	struct student student1;
	struct student *tut;
	strcpy(student1.isim,"erxad");
	strcpy(student1.soyisim,"abdulgani");
	student1.numara=20008814;
	tut=&student1;
	
	printf("%s %s %d\n",student1.isim,student1.soyisim,student1.numara);
	printf("%s %s %d\n",tut->isim,tut->soyisim,tut->numara);
//----------------------	*tut.isim==tut->isim
	return 0;
}
