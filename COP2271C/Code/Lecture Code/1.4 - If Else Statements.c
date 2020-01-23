#include <stdio.h>
int main()
{
    int grade;
    printf("Please enter the grade\n");
    scanf("%d", &grade);

    if(grade>=90){
        printf("You have an A in the course.\n");
    }
    else if(grade>=80){
        printf("You have a B in the course.\n");
    }
    else if(grade>=70){
        printf("You have a C in the course.\n");
    }
    else if(grade>=60){
        printf("You have a D in the course.\n");
    }
    else{
        printf("You have not passed");
    }
}
