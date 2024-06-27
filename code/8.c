#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6,1,1,6};
    for(int i=0;i<sizeof(arr)/sizeof(int);i++){
       int occ=0;
       for(int j=0;j<sizeof(arr)/sizeof(int);j++){
	       if(arr[i]==arr[j]){
		       occ++;
	       }
	      
    }
         printf("element %d occ %d times\n",arr[i],occ);

    }
 


    printf("\n");

    return 0;
}

