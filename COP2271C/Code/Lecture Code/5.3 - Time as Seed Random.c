#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int main() //Random number generator using the current time as the seed and user input for max and minimum
{
    int a, b, c, x;
    printf("Enter the min and max you'd like the random number to be:\n");
    printf("Minimum:\n");
    scanf("%d", &a);
    printf("Maximum:\n");
    scanf("%d", &b);
    c = b - a + 1; //making the inputed max (b) actually work as max in the function.
    srand(time(NULL));
        x=a+rand()%c; //x=(random number range). x=minimum + rand()%'max-minimum + 1'
        printf("The random number is: %d\n", x);
    return 0;
}
