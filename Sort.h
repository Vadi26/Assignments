#include <stdio.h>

void print(int arr[], int size){
	for(int i = 0; i < size; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void swap(int *a, int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void Bubble(int arr[], int size){
	int i;
	for(i = 0; i < size - 1; i++){
		for(int j = 0; j < size - i - 1; j++){
			if(arr[j] > arr[j + 1]){
				swap(&arr[j], &arr[j + 1]);
			}
		}
		print(arr, size);
	}
}

void Insertion(int arr[], int size){
	int i, key, j;
	for (i = 1; i < size; i++)
	{
		key = arr[i];
        j = i - 1;
		while (key < arr[j] && j >= 0) {
            arr[j + 1] = arr[j];
            --j;
        }
		arr[j + 1] = key;
        print(arr, size);
	}
	
} 

void Selection(int arr[], int size){
    int i, min, temp, j, k;
    for(i = 0; i < size; i++){
        k = i;
		min = arr[i];
        for(j = i + 1; j < size; j++){
            if(min > arr[j]){
                min = arr[j];
                k = j;
            }
        }
		if(k == i);
		else{
        	temp = arr[i];
    		arr[i] = min;
    		arr[k] = temp;
		}
        print(arr, size);
    }
}