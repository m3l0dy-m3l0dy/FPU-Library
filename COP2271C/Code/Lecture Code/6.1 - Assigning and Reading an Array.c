#include <stdio.h.>
int main()
{
    int n[5] = {32, 27, 64, 18, 95};
    printf("%s%13s\n", "Element", "Value"); //tabular header

    for(int i = 0; i<5; ++i){//loop will read all array elements
        printf("%7u%13d\n", i, n[i]); //tabular output of array
    }
}
