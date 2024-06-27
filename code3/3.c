#include <stdio.h>

int main() {
    long int num;
    printf("Enter the number: ");
    scanf("%ld", &num);

    long int sq = num * num;

    long int temp = num;
    int n = 0;
    while (temp > 0) {
        temp /= 10;
        n++;
    }

    int d = 1;
    for (int i = 0; i < n; i++) {
        d *= 10;
    }

    long int check = sq % d;

    if (check == num) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}

