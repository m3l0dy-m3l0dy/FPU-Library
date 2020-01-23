#include <stdio.h>
int main()
{
    int a[5]={10, 8, 9, 6, 7}; //original array
    int hold;
    for(int pass=0;pass<5;pass++){ //for loop for the size of the array to reloop and make sure array is properly restructured

            for(int i=0; i<4; i++){ //Program to restructure the array in ascending order
                if(a[i]>a[i+1]){
                    hold =a[i];
                    a[i]=a[i+1];
                    a[i+1]=hold;
                }
                if(a[3]>a[4]){ //last two values are made manual because the a[i+1] would not work
                    hold=a[3];
                    a[3]=a[4];
                    a[4]=hold;
                }
                if(a[4]>a[5]){
                    hold=a[4];
                    a[4]=a[5];
                    a[5]=hold;
            }
        }
    }
    for(int i=0;i<5;i++){
        printf("%d\n", a[i]);
    }
}
