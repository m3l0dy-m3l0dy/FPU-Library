#include <stdio.h>

int main()
{
    printf("Enter two integers, I will tell you the relationships they satisfy\n");
    int num1;
    int num2;

    scanf("%d %d", &num1, &num2);

    if (num1 == num2){
        printf("%d is equal to %d\n", num1, num2);
    }
    if (num1 != num2){
        printf("%d is not equal to %d\n", num1, num2);
    }
    if (num1 < num2){
        printf("%d is less than %d\n", num1, num2);
    }
    if (num1 > num2){
        printf("%d is greater than %d\n", num1, num2);
    }
    if (num1 <= num2){
        printf("%d is less than or equal to %d\n", num1, num2);
    }
    if (num1 >= num1){
        printf("%d is greater than or equal to %d\n", num1, num2);
    }
}
