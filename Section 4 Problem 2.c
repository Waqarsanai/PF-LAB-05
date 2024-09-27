#include <stdio.h>

int main() {
    int inputNumber, oneCount = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &inputNumber);

    if (inputNumber & 1) oneCount++;
    if (inputNumber & 2) oneCount++;
    if (inputNumber & 4) oneCount++;
    if (inputNumber & 8) oneCount++;
    if (inputNumber & 16) oneCount++;
    if (inputNumber & 32) oneCount++;
    if (inputNumber & 64) oneCount++;
    if (inputNumber & 128) oneCount++;

    printf("Number of 1s in the binary representation: %d\n", oneCount);

    return 0;
}
