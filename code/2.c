#include<stdio.h>
int main(){
	int arr[]={1,2,3,4,5,6,7,8,9,10};
        int maxi=1;
	int mini=100;
	for(int i=0;i<=9;i++){
	  if(maxi<arr[i]){
		  maxi=arr[i];
	  }
	  if(mini>arr[i]){
		  mini=arr[i];
	  }

	}
	printf("Maximum = %d\n",maxi);
	printf("Minimum = %d\n",mini);
	return 0;
}
