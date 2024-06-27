#include<stdio.h>
#include<string.h>
 
int main(){
        char s1[200];
        char s2[100];
        int i,
            j,
            flag,
            count = 0,
            length ;
 
        printf("Enter the string: ");
        scanf("%s",s1);
 
        length = strlen(s1);
        for ( i = 0 ; i < length ; i++ ){
                flag = 0;
                for ( j = 0 ; j < i ; j++ ){
                        if ( s1[i] == s1[j]){
                                flag = 1;
                                break;
                        }
                }
                if ( flag == 0 ){
                        s2[count] = s1[i];
                        count += 1;
                }
 
        }
 
        printf("%d\n",count);
 
        printf("String after duplicate removal is :\n%s \n",s2);
 
        return 0;
}
