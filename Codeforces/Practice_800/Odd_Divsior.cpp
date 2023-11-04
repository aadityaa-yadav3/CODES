#include <iostream>

int main() {
    int t; // Number of test cases
    std::cin >> t; // Read the number of test cases

    for (int i = 0; i < t; ++i) { // Loop for each test case
        long long int n; // The number to be checked
        std::cin >> n; // Read the number
        
        long long int div = n; // Initialize div variable with the value of n
        int od = 0;   // Initialize odd divisor flag as 0
        
        if (n & 1) {  // Check if n is odd (using bitwise AND with 1)
            od = 1;    // Set odd divisor flag to 1
        }

        while (div > 2) { // Loop until div becomes 2 or less
            div /= 2;      // Divide div by 2
            
            if (div & 1) { // Check if the current div is odd
                if (n % div == 0) { // Check if n is divisible by div
                    od = 1; // Set odd divisor flag to 1
                    break;  // Break the loop
                }
            }
        }
        
        // Print "YES" if an odd divisor other than 1 is found, otherwise print "NO"
        if (od) {
            std::cout << "YES" << std::endl;
        } else {
            std::cout << "NO" << std::endl;
        }
    }

    return 0; // Exit the program
}
