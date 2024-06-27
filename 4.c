/*
 *
 * Write a program to convert Binary to decimal
 *
 */

#include<stdio.h>
int power(int n,int i){
   if(i==0){
        return 1;
   }
   int r=1;
   for(int j=1;j<=i;j++){
      r*=2;
    }
   return r;
}

int main(){
        int a;
        printf("Enter the binary  number");
        scanf("%d",&a);
        int i=0;
        int ans=0;
        while(a>0){
         int rem = a%10;
         a/=10;
         ans+=rem * power(2,i);
         i++;	 
	}
	printf("Decimal Number =%d\n",ans);
	return 0;
}
