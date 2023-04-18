#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct person{
	char name[20];
	int age;
};

typedef struct person Person;

struct node{
	Person data;
	struct node * next;
};

typedef struct node Node;

Node * head=NULL;

Person getPerson()
{
	Person p;
	printf("Enter person name:");
	scanf("%s",p.name);
	printf("Enter person age:");
	scanf("%d",&p.age);
	return p;	
}

void addNode()
{
	Node *newnode=(Node *)malloc(sizeof(Node));
	newnode->data=getPerson();
    newnode->next=head;
    head=newnode;
}
void dispPerson(Node * current)
{
	printf("person name:%s\n",current->data.name);
	printf("person age:%d\n",current->data.age);
}
void traverse()
{
   Node *current=head;	
   for (;current!=NULL;current=current->next)
      dispPerson(current);
}

void delNode()
{
	char name[20];
	Node *current=head,*previous=NULL;
	printf("Enter person name:");
	scanf("%s",name);
    for (;current!=NULL;current=current->next){
      if (strcmp(current->data.name,name)==0)
      {
      	if (previous==NULL)//at the beginning
      	   head=current->next;
      	else
      	   previous->next=current->next;
      	free(current);
      	printf("Item is deleted\n");
      	return;
	  }
	  previous=current;
    }
    printf("Item is not found\n");
}

int main(int argc, char *argv[]) {
    addNode();
    addNode();
    addNode();
    traverse();
    delNode();
    traverse();
	return 0;
}
