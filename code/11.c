#include<stdio.h>
int main(){
	int arr[]={1,2,3,4,5,6};
	int s = sizeof(arr)/sizeof(int);
        int f1=-1;
	int f2=-1;
	for(int i=0;i<s;i++){
		if(f1<arr[i]){
		  f2=f1;
		  f1=arr[i];
		}
		if(f2>arr[i] && arr[i]!=f1){
			f2=arr[i];
		}
	}
	printf("Second Highest No %d\n", f2);
	return 0;
}
