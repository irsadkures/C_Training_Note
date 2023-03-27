#include<stdio.h>
struct student{
	char isim[20];
	char soyisim[20];
	int numara;
};
void show(struct student a){
	printf("%s %s %d",a.isim,a.soyisim,a.numara);
}
int main(){
	struct student student1={"erxad","abdulgani",200008814
	};
	show(student1);
	
	return 0;
} 
