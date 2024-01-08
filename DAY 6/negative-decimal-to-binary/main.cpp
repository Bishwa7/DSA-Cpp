#include <iostream>

void decimalToBinary(int n) {
    // Size of an integer in bytes
    int size = sizeof(n) * 8;

    // Iterate through each bit
    for (int i = size - 1; i >= 0; i--) {
        // Use bitwise AND operation to check the value of the ith bit
        int bit = (n >> i) & 1;

        // Print the bit
        std::cout << bit;
    }

    std::cout << std::endl;
}

int main() {
    int negativeNumber = -10;

    std::cout << "Binary representation of " << negativeNumber << " is: ";
    decimalToBinary(negativeNumber);

    return 0;
}
