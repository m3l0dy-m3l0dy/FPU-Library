#include <stdio.h> //Using the & and * pointer operators
int main()
{
    int a=7;
    int *aPtr=&a; //set aptr to the address of a
    printf("The address of a is %p\nThe value of aPtr is %p\n\n", &a, aPtr);
    printf("The value of a is %d\nThe value of *aPtr is %d\n\n", a, *aPtr);
    printf("Showing that * and & are complements of eachother:\n&*aPtr=%p\n*&aPtr=%p\n", &*aPtr, *&aPtr);
}
