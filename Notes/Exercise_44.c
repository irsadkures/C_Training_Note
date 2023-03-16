#include<stdio.h>
struct student{
	char isim[20];
	char soyisim[20];
	int numara;
};
void show(struct student a){
	printf("%s %s %d",a.isim,a.soyisim,a.numara);
}
struct student getvalue(){ 
	struct student yeni; 
	printf("enter your information:");
	scanf("%s %s %d",&yeni.isim,&yeni.soyisim,&yeni.numara);
	return yeni;
}
int main(){
	struct student student1=getvalue();
	show(student1); 
	
	return 0;
}
