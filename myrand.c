#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void displayRows(int rows)
{
    //Seed random number generator
    srand(time(NULL));
    int i = 1;
    //Display 5 columns of random numbers
    //with a number of given rows
    for(;i <= rows ; i++)
    {
        printf("   %14d", rand());
        printf("%14d", rand());
        printf("%14d", rand());
        printf("%14d", rand());
        printf("%14d\n", rand());
    }//for 

}//displayRows

int main(void)
{
    int rows;
    //Welcome message
    printf("Welcome to myrand. \n\n");
    printf("The program will produce a five ");
    printf("column table of random numbers.\n\n");
    printf("Please enter the number of rows you would like: ");
    scanf("%d", &rows);

    //Print out columns
    displayRows(rows);
    printf("\nThank you for using myrand. Bye!\n\n");

    return 0;
}