/*
 #include <stdio.h>

//Giving some delay
void delay( unsigned int value)
{
    unsigned int count1 =0;
    unsigned int count2 = 0;

    for(count1 = 0; count1 < value ; count1++ )
    {
        for(count2 = 0; count2 < count1 ; count2++ )
        {

        }
    }
}


// string to display Rocket
const char rocket[] =
    "           ^ \n\
          /^\\\n\
          |-|\n\
          | |\n\
          |I|\n\
          |S|\n\
          |R|\n\
          |O|\n\
         /| |\\\n\
        / | | \\\n\
       |  | |  |\n\
        `-\"\"\"-`\n\
";

int main()
{
    while(1==1)
    {



        int jumpControlAtBottom = 0;
        const int someDelay = 6000;
        int shifControl = 0;


        //jump to bottom of console

        for (jumpControlAtBottom = 0; jumpControlAtBottom < 30; ++jumpControlAtBottom)
        {
            printf("\n");
        }

        //Print rocket
        fputs(rocket,stdout);

        for (shifControl = 0; shifControl < 30; ++shifControl)
        {
            // Rocket move on the basis of delay
            delay(someDelay);

            // move rocket a line upward
            printf("\n");
        }
    }
    return 0;
}
*/

#include <stdio.h>
#include <math.h>
 
// C program to print the heart star pattern
int main()
{

    
    // set output size
    int size = 10;
 
    for (int x = 0; x < size; x++)
    {
        for (int y = 0; y <= 4*size; y++)
        {
            double dist1 = sqrt(pow(x - size, 2) + pow(y - size, 2));
            double dist2 = sqrt(pow(x - size, 2) + pow(y - 3*size, 2));
 
            if (dist1 < size + 0.5 || dist2 < size + 0.5) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
 
    for (int x = 1; x < 2*size; x++)
    {
        for (int y = 0; y < x; y++) {
            printf(" ");
        }
 
        for (int y = 0; y < 4*size + 1 - 2*x; y++) {
            printf("*");
        }
 
        printf("\n");
    }
 
    return 0;
}