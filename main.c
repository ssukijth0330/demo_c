#include <stdio.h>

//Find max number in an array, by using contant n
int main() {
    int n=5;
    int a[n]=[1,2,3,4,5];
    int max = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }
    printf("Max number is %d\n", max);
    return 0;
}