#include <stdio.h> //Modify values in an array
int main()
{
    int a[3]={100,200,300}; //original array values
    modifyArray(a,3); //modifyArray function. modifyArray(arrayName, arraySize);
    for(int i=0;i<3;i++){ //for loop to print the 3 array values
        printf("%d\n", a[i]);
    }
}
void modifyArray(int a[],int size){ //modifyArray function header.
    for(int i=0;i<size;i++){ //for loop that will multiply each array value, a[1], a[2], etc. by 2
        a[i]=a[i]*2; //doubles the current value in the array
    }
}
