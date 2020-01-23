#include <stdio.h>
int main()
{
    int counter = 1;
    int grade;
    int average;
    int csize;
    int total = 0;

    printf("How many students are in the class?\n");
    scanf("%d", &csize);

    while(counter<=csize){
        printf("Enter grade\n");
        scanf("%d", &grade);
        total = total + grade;
        counter++;
    }
    average = total / csize;
    printf("The class average is %d\n", average);
}
