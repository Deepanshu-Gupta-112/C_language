#include<stdio.h>
int main(){
	int arr[]={5,4,3,2,1};
	for(int i=0;i<sizeof(arr)/sizeof(int);i++){
		 for(int j=0;j<sizeof(arr)/sizeof(int)-i-1;j++){
		         if(arr[j]>arr[j+1]){
				 int temp=arr[j];
				 arr[j]=arr[j+1];
				 arr[j+1]=temp;
		          }
		 }
                }

	for(int i=0;i<sizeof(arr)/sizeof(int);i++){
         	printf("%d",arr[i]);
	}
	printf("\n");
		return 0;
	}
