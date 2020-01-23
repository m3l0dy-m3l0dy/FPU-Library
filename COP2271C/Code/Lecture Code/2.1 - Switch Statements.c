#include <stdio.h>

int main() {
int num;
printf("input a value 1-3\n");
scanf("%d", &num);

  switch (num) {                             //if(num==1){printf("One\n");
  case 1:
    printf("One\n");
    break;
  case 2:                                   //else if(num==2){printf("Two\n");
    printf("Two\n");
    break;
  case 3:
    printf("Three\n");
    break;
  default:
    printf("Not 1, 2, or 3.\n");
    }
}
