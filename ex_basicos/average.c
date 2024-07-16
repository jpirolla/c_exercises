#include <stdio.h>

int main() {
    float avg = 0, sum = 0; // Initialize sum and avg
    int num, count = 0;

    for (int i = 0; i < 4; i++) {
        scanf("%d", &num);
        if (num > 0) { 
            sum += num; 
            count++;
        }
    }

    if (count > 0) {
        avg = sum / count; // Compute the average if count is greater than 0
    }

    printf("%.2f\n", avg); // Print the average to 2 decimal places

    return 0;
}
