#include <stdio.h>

int main()
{
    int int1; //first number to be entered by user
    int int2; //second number to be entered by user

    printf("Enter two numbers you wish to add.\n");
    scanf("%d", &int1); //reads the first integer
    scanf("%d", &int2); //reads the second integer

    int sum; //variable in which sum will be stored
    sum = int1 + int2; //assign total to sum

    printf("Sum is %d\n", sum); //print sum
}
