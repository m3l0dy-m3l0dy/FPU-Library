#include <stdio.h>//This code will be written in notebook
int square(int y); //The header of the programmer defined function needs to be defined at the top of the program
int main(){
    int x, y;
    printf("Enter a whole number you want to find the square of:\n");
    scanf("%d", &y);
    printf("The square of that number is %d", square(y));} //The defined function name and variable is called.
int square(int y){ //The programmer defined function is HERE this is the header
    return y * y;}
