#include <stdio.h>
int main()
{
    int counter;
    int grade;
    int total;
    float average;
    total = 0;
    counter = 0;
    printf("Enter grade, -1 to end:");
    scanf("%d", &grade);
    while(grade!=-1){
        total = total + grade;
        counter++;
        printf("Enter grade, -1 to end:");
        scanf("%d", &grade);
    }
    if(counter!=0){ //Counter will be more than 0 as long as a grade is entered
        average = total / counter;
        printf("Class average is %.2f\n", average); //%.2f means display float value to 2 decimal points
    }
    else{ //If no grade is entered, and the counter DOES equal 0...
        puts("No grades were entered");
    }
}
