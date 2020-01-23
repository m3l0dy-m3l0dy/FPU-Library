#include <stdio.h>
#define SIZE 100

int linearSearch(const int arrau[], int key, int size); //defined function
int main()
{
    int a[SIZE];
    for(int x=0; x<SIZE; x++){
        a[x]=2*x;
    }
    printf("Enter integer search key:\n");
    int searchKey;
    scanf("%d", &searchKey);
    int index=linearSearch(a,searchKey, SIZE); //locates searchKey in array
    if(index!=-1){
        printf("Found value at index %d\n", index);
    }
    else{
    puts("Value not found");
    }
}
int linearSearch(const int array[],int key,int size){ //the downside of the linear search is the array HAS to be sorted for it to be able to search. Otherwise it wont work.
    for(int n=0;n<size;++n){ //loop through array
        if(array[n]==key){
           return n; //return location of key
           }
    }
    return -1; //key not found
}
