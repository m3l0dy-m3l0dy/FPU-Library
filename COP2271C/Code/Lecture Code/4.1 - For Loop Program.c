#include <stdio.h>
#include <math.h>
int main()
{
    float principal = 1000.00; //beginning balance
    float rate = .05; //interest rate annually

    printf("%4s%21s\n", "Year", "Amount on deposit");

    for(int year=1; year<=10; ++year){ //the for loop
        float amount = principal * pow(1.0+rate, year);
        printf("%4u%21.2f\n", year, amount); //the 4 and 21 are spaces for table formatting, the .2 makes the float display to the 2 decimal place
    }
}
