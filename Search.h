#include <stdio.h>
#include "Sort.h"

int Linear_Search(int arr[], int size, int key){
	int i;
	for(i = 0; i < size; i++){
		if(key == arr[i]){
			return i;
		}
	}
	return -1;
}

int Binary_Search(int arr[], int size, int key){
	Selection(arr, size);
	int low = 0, high = size, mid = (high + low)/2;
	while(low <= high){
		if(key == arr[mid]){
			return mid;
		}
		else if(key < arr[mid]){
			high = mid - 1;
		}
		else{
			low = mid + 1;
		}
	}
	return -1;
}
