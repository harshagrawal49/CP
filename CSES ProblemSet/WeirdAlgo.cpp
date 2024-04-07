#include <iostream>

int main() {
    long long int n;
    std::cin >> n; // Take input from the user
    
    while (n != 1) { // Repeat until n becomes 1
        std::cout << n << " "; // Output the current number
        if (n % 2 == 0) // If the number is even
            n /= 2; // Divide it by 2
        else
            n = n * 3 + 1; // If the number is odd, apply 3n + 1
    }
    std::cout<<1;
    
    return 0;
}
