#include<stdio.h>
int main(){
       int arr[]={5,4,3,2,1};
       int s=sizeof(arr)/sizeof(int);

       for(int i=0;i<s;i++){
	   int min_index=i;
	   for(int j=i+1;j<s;j++){
		   if(arr[min_index]>arr[j]){
		       min_index=j;
		   }
	   } 
	   int temp=arr[i];
	   arr[i]=arr[min_index];
	   arr[min_index]=temp;
       }
       
       for(int i=0;i<s;i++){
	       printf("%d",arr[i]);
       }
       printf("\n");

	return 0;
}
