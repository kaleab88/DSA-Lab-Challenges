#include <iostream>
#include <vector> // Include the vector library for handling string as an array

// Function to reverse the string
void reverseString(std::vector<char>& s) {
    // Initialize two pointers
    int start = 0;
    int end = s.size() - 1;
    
    // Loop until the pointers meet or cross
    while (start < end) {
        // Swap characters at 'start' and 'end'
        char temp = s[start];
        s[start] = s[end];
        s[end] = temp;
        
        // Move the pointers closer
        start++;
        end--;
    }
}

int main() {
    // Example input: Convert string to a vector of characters
    std::vector<char> s = {'h', 'e', 'l', 'l', 'o'};
    
    // Reverse the string
    reverseString(s);
    
    // Print the reversed string
    std::cout << "Reversed string: ";
    for (char c : s) {
        std::cout << c;
    }
    std::cout << std::endl;
    
    return 0;
}
