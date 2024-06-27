/*
 *
 * To calculate Area and Circumference of a circle
 *
 */
#include<stdio.h>

int main(){
    int r;
    int op;
    printf("Enter the radius of curcle");
    scanf("%d",&r);
    printf("Enter 1 for Area and 2 for Circumference");
    scanf("%d",&op);
    if(op==1){
	    printf("%.2f",3.14*r*r);
    }else{
	    printf("%.2f",3.14*r);
    }
    return 0;
}
