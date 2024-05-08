#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements that you want to find the maximum:");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        printf("Enter the %d element:", i + 1);
        scanf("%d", &a[i]);
    }
    int max = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }
    printf("Max number is %d\n", max);
    return 0;
}