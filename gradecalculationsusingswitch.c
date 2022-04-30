#include<stdio.h>
int main()
{
   int marks;
   printf("\nEnter the Marks Between 0 To 100:");
   scanf("%d", &marks);
   if(marks>100)
   {
    printf("\nPlease Enter marks between 0 to 100\n");
   }
   else
   {
   switch(marks/10)
   {
       case 1 :
          // Marks between 90-100
           printf("\n Your Grade is: A");
           break;
       case 8 :
            // Marks between 80-89
           printf("\n Your Grade is: B" );
           break;
       case 7 :
           // Marks between 70-79
           printf("\n Your Grade is: C" );
           break;
       case 6 :
           // Marks between 60-69
           printf("\n Your Grade is: D" );
           break;
       case 5 :
            // Marks between 50-59
           printf("\n Your Grade is: E" );
           break;
       default :
           //Marks less than 50
           printf("\n You Grade is: F & you're Failed\n");
   }
 }
   return 0;
}
