#include <stdio.h>

#define MAX_SIZE 100

int CheckOddEven(int num) {
    int flag;

   
    if (num % 2 == 0) {
        flag = 0; 
    } else {
        flag = 1; 
    }

    return flag;
}

int main() {
    int n, i, num, flag, sum_even = 0, sum_odd = 0;
    int arr[MAX_SIZE];

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the array elements:\n");
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i+1);
        scanf("%d", &num);

        flag = CheckOddEven(num);

        if (flag == 0) {
            sum_even += num;
        } else {
            sum_odd += num;
        }
    }

    printf("Sum of even numbers: %d\n", sum_even);
    printf("Sum of odd numbers: %d\n", sum_odd);

    return 0;
}
