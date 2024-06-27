#include<stdio.h>
int main(){
     int arr[]={1,2,3,4,5,6};
     int s=(sizeof(arr)/sizeof(int))-1;
     for(int i=0;i<=s/2;i++){
	    int temp=arr[s-i];
	    arr[s-i]=arr[i];
	    arr[i]=temp;
	
     }
    for(int i=0;i<=s;i++){
	    printf("%d",arr[i]);
    }
    printf("\n");
 

	return 0;}

