#include <stdio.h>
#include <string.h>

int main(){
    int num, y, count = 0;
    printf("Enter a number : ");
    scanf("%d\n", &num);
    y = num;
    while(num != 0){
        num = num / 10;
        count++;
    }
    printf("No.of digits : %d\n", count);
    char x[count], copy[count];
    int i;
    sprintf(x, "%d", y);
    strcpy(copy, x);
    for(i = 0; i < count; i++){
        x[i] = copy[count - i - 1];
    }
    printf("Reversed --> %s", x);
    if(strcmp(x,copy) == 0){
        printf("\nThe number is a palindrome!");
    }
    else{
        printf("The number is not a palindrome.");
    }
    
    return 0;
}