#include <stdio.h>
#include <cs50.h>

int main(void)

{
    //Declaring my variables
    int height;
    int rows;
    int space;
    int hash;

    //prompts user for integer until integer is 0 to 23
    do
    {
        height = get_int("Number: ");
    }
    while(height<=0 || height>23);

   //loop to create the number of rows in the pyramid entered by the user

   for(rows =0; rows<height; rows++)
   {

    // print the number of spaces to preceed each hash(#)
        for (space =(height-rows); space>0; space--)
        {
            printf(" ");
        }

    // print the number of hash(s) (#) per line
        for (hash =1 ; hash<=(rows+1); hash++)
        {
            printf("#");
        }
 // print 2 spaces to seperate the left and right pyramid
        printf("  ");

 // print the right pyramid which is identical to the left
         for (hash =1 ; hash<=(rows+1); hash++)
        {
            printf("#");
        }
        printf("\n");
   }
   return 0;

}
