#include<stdio.h>
#define MAX 50
void  selectionsort(int arr[],int size){
	int i,j;
	int min;
	for(i=0;i<size;i++){
		min=i;
		for(j=i+1;j<size;j++){
			if(arr[j]<arr[min]){
			min=j;  
		} 
     	}
     		int temp=arr[i];
			arr[i]=arr[min];
			arr[min]=temp; 
	    }
        }
int main(){
int array[MAX];
int i,size;
printf("enter your size number:");
scanf("%d",&size);
printf("enter the elements:");
for(i=0;i<size;i++){
	scanf("%d",&array[i]);
}
selectionsort(array,size);
for(i=0;i<size;i++){
	printf("%d",array[i]);	
}
return 0;
} 




