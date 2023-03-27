#include<stdio.h>
#include<string.h>
struct address{
	char mahalle[20];
	char cadde[20];
	char sokak[10];
};
struct student{
   char isim[20];	
   char soyisim[20];
   int  numara;
   int yax;
   struct address adres;	
};
int main(){
   struct student student1;
   strcpy(student1.isim,"erxad");	
   strcpy(student1.soyisim,"abdulgani");
   student1.numara=200008814;
   student1.yax=25;
   strcpy(student1.adres.mahalle,"topkapi");
   strcpy(student1.adres.cadde,"bicanyokux");	
   strcpy(student1.adres.sokak,"no:47");
   
   printf("%s %s %d %d %s %s %s",student1.isim,
   student1.soyisim,
   student1.numara,
   student1.yax,
   student1.adres.mahalle,
   student1.adres.cadde,
   student1.adres.sokak);
	return 0; 
}
