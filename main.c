#include<stdio.h>
#include<stdlib.h>
#include"Search.h"
#include"Sort.h"

int main(){
    int size, x;
    printf("\nEnter what operation you want to perform 1 for Searching and 0 for Sorting : ");
    scanf("%d", &x);
    printf("\nEnter the size of array : ");
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand()%100 + 1;
    }
    print(arr, size);
    printf("\n");
    int key, y;
    if (x)
    {
        printf("Enter the element you want to find : ");
        scanf("%d", &key);
        printf("\nEnter which Searching algorithm you want 1 for Linear search and 0 for Binary search : ");
        scanf("%d", &y);
        if (y)
        {
            if (Linear_Search(arr, size, key) != -1)
            {
                printf("\nElement found at %d position.\n", Linear_Search(arr, size, key));
            }
            else
            {
                printf("\nElement not found in the given array.\n");
            }
        }
        else
        {
            Bubble(arr, size);
            if (Binary_Search(arr, size, key) != -1)
            {
                printf("\nElement found at %d position.\n", Binary_Search(arr, size, key));
            }
            else
            {   
                printf("\nElement not found in the given array.\n");
            }
        }
    }
    else{
        printf("Enter which Sorting algorithm you want to perform 1 for Bubble Sort, 2 for Insertion Sort and 3 for Selection Sort : ");
        scanf("%d", &y);
        if (y == 1)
        {
            printf("\nThe array changes after each iteration as follows : \n");
            Bubble(arr, size);
            printf("\nThe final array : \n");
            print(arr, size);
        }
        else if (y == 2)
        {
            printf("\nThe array changes after each iteration as follows : \n");
            Insertion(arr, size);
            printf("\nThe final array : \n");
            print(arr, size);
        }
        else{
            printf("\nThe array changes after each iteration as follows : \n");
            Selection(arr, size);
            printf("\nThe final array : \n");
            print(arr, size);
        }
    }

    return 0;
}