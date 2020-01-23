/*Forty students were asked to rate the quality of the food in the student
cafeteria on a scale of 1 to 10 (1 means awful and 10 means excellent). Place
the 40 responses in an integer array and summarize the results of the poll*/
#include <stdio.h>
#define RESPONSES_SIZE 40
#define FREQUENCY_SIZE 11
int main()
{
    int frequency[FREQUENCY_SIZE] = {0};
    int responses[RESPONSES_SIZE] = {1,2,6,4,8,5,9,7,8,10,1,6,3,8,6,10,3,8,2,7,6,5,7,6,8,6,7,5,6,6,5,6,7,5,6,4,8,6,8,10}; //The responses of the 40 student survey
    for(int answer=0;answer<RESPONSES_SIZE;++answer){ //
        ++frequency[responses[answer]]; // [responses[answer]] reads the array of responses_size. The read value is frequency[value] and gets increased by 1 in that array.
    }
    printf("%s%17s\n", "Rating", "Frequency"); //Table header
    for(int rating =1; rating<FREQUENCY_SIZE;++rating){
        printf("%6d%17d\n", rating, frequency[rating]);
    }
}
