#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double begin, // these are interval variables
       end;
     

// x^2-1, roots are -1 and +1
double getValue()
{
  int status;
  double value;
  
  do {     
      printf("Enter a numeric value:");
      status=scanf("%lf",&value);       
      if (status!=1){
          printf("you have enter a different character!\n");
          getch();     
          system("cls");
          fflush(stdin); //clear buffer 
      }
  } while (status!=1);
  return value;     
}

double f(double point)
{
   return pow(point,2)-1;
}

int simPolarity(double value1,
                double value2)
{
  return (((value1*value2)>0)?1:0);              
}

void bisect()
{
   double errorRate,mid;
     
   if (simPolarity(f(begin),f(end))){
      printf("Bisect method can not be applied!...\n");
      printf("Because even roots exist in the given interval!..\n");
      return;                        
   }
   printf("Enter your aceptable error rate\n");
   printf("===============================\n");
   errorRate=getValue();     
   while (fabs(f(begin)-f(end))>errorRate){
        mid=(begin+end)/2;     
        if (f(mid)==0){
            printf("One of the root is %6.2f\n",mid);
            return;
        } 
        else if (simPolarity(f(begin),f(mid)))
                begin=mid;
             else 
                end=mid;
   }
   printf("One of the root under assumption of error rate %.8f \
           is %6.2f\n", errorRate, mid);    
}



void getInterval()
{
  double temp;   
  printf("Enter the Interval\n");
  printf("==================\n");
  begin=getValue();
  end=getValue();
  //replace if they are misordered
  if (end<begin){
     temp=end;
     end=begin;
     begin=temp;
  } 
  printf("The interval is %6.2f - %6.2f\n",begin,end);
}

int main(int argc, char *argv[])
{
  getInterval();
  bisect();
  //printf("The function value at 2 is %6.2f\n",f(2));
  
//  if (simPolarity(1,2))
//     printf("They have similar signs\n");
//  else
//     printf("They have different signs\n");
     
     
  system("PAUSE");	
  return 0;
}
