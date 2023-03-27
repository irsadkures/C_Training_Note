#include<stdio.h>
#include<math.h>
int main (){
      int a,b,c;
      float x;
      
      printf("a=");
      scanf("%d",&a);
      printf("b=");
      scanf("%d",&b);
      printf("c=");
      scanf("%d",&c);
      
      x=pow(c,3)-log10(b)+a*a/b;
      printf("x=%f",x);

return 0; 

}
