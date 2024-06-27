#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int arr2[] = {6, 3, 4, 6, 7, 4, 6, 7};
    int s1 = sizeof(arr) / sizeof(int);
    int s2 = sizeof(arr2) / sizeof(int);
    int s3 = s1 + s2;
    int arr3[s3];
    
 
    int i;
    for (i = 0; i < s1; i++) {
        arr3[i] = arr[i];
    }
  
    for (int j = 0; i < s3; i++, j++) {
        arr3[i] = arr2[j];
    }
 
    for (int i = 0; i < s3; i++) {
        printf("%d ", arr3[i]);
    }

    printf("\n");

    return 0;
}

