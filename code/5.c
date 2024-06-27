
#include<stdio.h>
int main(){
     int arr[]={1,2,3,4,5,6};
     int s=(sizeof(arr)/sizeof(int))-1;
     printf("Enter element to find\n");
     int key=-1;
     scanf("%d",&key);
    for(int i=0;i<=s;i++){
           if(arr[i]==key){
	   key=i;
	   break;
	   }
    }
    if(key==-1){
	    printf("Not Found");
    }  else{
	    printf("Index = %d",key);
    }

		    
    printf("\n");


        return 0;}


