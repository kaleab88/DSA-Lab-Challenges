#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int longestPalindrome(string s) {
    // Step 1: Count the frequency of each character
    unordered_map<char, int> freq;
    for (char c : s) {
        freq[c]++;
    }

    // Step 2: Calculate the longest palindrome length
    int palindromeLength = 0;
    bool hasOdd = false; // Check if we can include one odd character
    for (auto entry : freq) {
        // Add all pairs (even frequencies)
        palindromeLength += entry.second / 2 * 2; // Add only even parts

        // If there's an odd frequency, we can include one odd character
        if (entry.second % 2 != 0) {
            hasOdd = true;
        }
    }

    // Include one odd character if available
    if (hasOdd) {
        palindromeLength++;
    }

    return palindromeLength;
}

int main() {
    // Example input
    string input;
    cout << "Enter a string: ";
    cin >> input;

    // Call the function
    int result = longestPalindrome(input);

    // Output the result
    cout << "Longest palindrome length: " << result << endl;

    return 0;
}
