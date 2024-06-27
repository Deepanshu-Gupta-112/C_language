#include<stdio.h>
int main(){

	int arr[]={1,2,3,1,2,3,5,6};
	int s=sizeof(arr)/sizeof(int);

	 for(int i=0;i<sizeof(arr)/sizeof(int);i++){
                 for(int j=0;j<sizeof(arr)/sizeof(int)-i-1;j++){
                         if(arr[j]>arr[j+1]){
                                 int temp=arr[j];
                                 arr[j]=arr[j+1];
                                 arr[j+1]=temp;
                          }
                 }
                }
        int uni=0;
	for(int i=0;i<=sizeof(arr)/sizeof(int)-1;i++){
	  if(arr[i]!=arr[i+1]){
		  uni++;
	  }
	} 
	int uniq[uni];
	int p=0;
       	for(int i=0;i<=sizeof(arr)/sizeof(int)-1;i++){
          if(arr[i]!=arr[i+1]){
             uniq[p]=arr[i];
	     p++;
          }
        }
	for(int i=0;i<uni;i++){
         printf("%d",uniq[i]);
        }


	printf("\n%d\n",uni);
	return 0;
}
