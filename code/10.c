#include<stdio.h>
int main(){
     int arr[]={1,2,3,4,5};
     int s=sizeof(arr)/sizeof(int);
     int shift;
     printf("Enter the no to shift\n");
     scanf("%d",&shift);
     for(int i=0;i<shift;i++){
       int temp=arr[0];
       for(int j=1;j<s;j++){
         arr[j-1]=arr[j];
       }
       arr[s-1]=temp;
     }
     for(int i=0;i<s;i++){
	     printf("%d",arr[i]);}

    return 0;

}

