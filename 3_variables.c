#include<stdio.h>
int main()
{
   //# VARIABLES ARE LIKE BOXES WHERE YOU CAN PUT YOUR THINGS
   int a = 12 ; //   HERE "int a" IS YOUR BOX OR VARIABLE AND 12 IS YOUR THINGS THAT YOU ARE PUTTING IN VARIABLE 

   //# WHY DO WE NEED VARIABLES ?
   // IT CAN BE HELPFUL IN MANY WAYS BUT FOR NOW FOR OUR UNDERSTANDING I WILL SHOW ONE EXAMPLE
   
   printf("%d box, %d house, %d Women\n",a,a,a);

   // NOW IF WE WANT TO CHANGE THE NUMBER WE CAN JUST SIMPLY DO IT WITHOUT CHANGING EVERY LETTER ONE BY ONE
   a = 92;
   printf("%d box, %d house, %d Women\n",a,a,a);



   return 0;
}