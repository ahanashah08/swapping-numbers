#include <iostream.h>
#include <stdio.h>
 
int main(){

   int x,y;
   
   printf("Enter values for x and y: ");
   scanf("%d%d",&x,&y); 
   
   x=x+y; 
   y=x-y; 
   x=x-y; 
   
   printf("After swaping the values are: x = %d and y = %d",x,y);
   
   return 0;
}
