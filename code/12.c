#include <stdio.h>
#include <stdbool.h>  

bool isPalindrome(int x) {
    int original = x;
    int reversed = 0;
    
  
    while (x > 0) {
        reversed = reversed * 10 + x % 10;
        x /= 10;
    }
    
   
    return original == reversed;
}

int main() {
    int number;
    
 
    printf("Enter a number: ");
    scanf("%d", &number);
    
 
    if (isPalindrome(number)) {
        printf("%d is a palindrome.\n", number);
    } else {
        printf("%d is not a palindrome.\n", number);
    }
    
    return 0;
}

