// Your code here...
#include <stdio.h>

int countLeadingZeros(unsigned int num) {
    int count = 0;
    int bits = 32;  // Since we're considering 32-bit representation

    // Loop to check each bit from the most significant to the least significant
    for (int i = bits - 1; i >= 0; i--) {
        if ((num >> i) & 1)
            break;
        count++;
    }

    return count;
}

int main() {
    unsigned int num;

    printf("Enter a number: ");
    scanf("%u", &num);

    int leadingZeros = countLeadingZeros(num);

    printf("%d",leadingZeros);

    return 0;
}
