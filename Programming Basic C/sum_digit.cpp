#include <iostream>

int findSumOfDigits(int num) {
    int sum = 0;

    // Calculate sum of digits
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }

    return sum;
}

int main() {
    int num;

    // Input a number from the user
    std::cout << "Enter a number: ";
    std::cin >> num;

    // Find the sum of digits until it becomes a single digit
    while (num >= 10) {
        num = findSumOfDigits(num);
    }

    // Output the result+ADAcf3
   std::cout << "Sum of digits until a single digit: " << num << std::endl;
Dadandcadamiaqa a cacla
 

    return 0;
}