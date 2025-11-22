#include <stdio.h>

void insertion_sort(int arr[], int n);

int main(){
    int arr[10] = {9, 5, 7, 2, 3, 6, 10, 1, 8, 4};

    insertion_sort(arr, 10);

    printf("The sorted array is: ");
    for(int i = 0; i < 10; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}


void insertion_sort(int arr[], int n){
    if(n <= 1){
        return;
    }

    insertion_sort(arr, n - 1);

    int last = arr[n - 1];
    int j = n - 2;

    while (j >= 0 && arr[j] > last) {
        arr[j + 1] = arr[j];
        j--;
    }

    arr[j + 1] = last;
}
