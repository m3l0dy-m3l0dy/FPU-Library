#include <stdio.h> //Indexing and pointer notations with arrays
#define ARRAY_SIZE 4
int main()
{
    int b[]={10,20,30,40};
    int *bptr=&b;
    puts("Array b printed with Array index notation"); //output array with index notation
    for(int loop=0;loop<ARRAY_SIZE;loop++){
        printf("b[%u]=%d\n",loop,b[loop]);
    }//output array with array name and pointer/offset notation
    puts("Pointer offset notation where the pointer is the array name");
    for(int offset=0;offset<ARRAY_SIZE;++offset){
        printf("*(b+%u)=%d\n", offset, *(b+offset));
    }//output array using bptr and array index notation
    puts("Pointer index notation");
    for(int i=0;i<ARRAY_SIZE;++i){
        printf("bptr[%u]=%d\n",i,bptr[i]);
    }//output array using bptr and pointer/offset notation
    puts("Pointer offset notation");
    for(int offset=0;offset<ARRAY_SIZE;++offset){
        printf("*(bptr+%u)=%d\n", offset, *(bptr+offset));
    }
}
