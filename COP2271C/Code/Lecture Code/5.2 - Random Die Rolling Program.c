#include <stdio.h>
#include <stdlib.h>
int main() //Random dice rolling program
{
    int seed;//Number used to seed the random number generator
    printf("Enter seed (number) to randomize dice roll:\n");
    scanf("%d", &seed);
    srand(seed); //Seed the random number generator
        printf("The rolled die shows: %d", 1 + (rand() %6)); //Picks a random number from 1 to 6 and prints it
}
