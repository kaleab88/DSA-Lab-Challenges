#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

// Function to find the index of the first unique character
int firstUniqChar(string s) {
    // Step 1: Create a frequency map for characters
    unordered_map<char, int> freq;
    for (char c : s) {
        freq[c]++; // Increment the count for each character
    }

    // Step 2: Traverse the string to find the first unique character
    for (int i = 0; i < s.size(); i++) {
        if (freq[s[i]] == 1) {
            return i; // Return index of the first unique character
        }
    }

    return -1; // No unique character found
}

int main() {
    // Input example for testing
    string input;
    cout << "Enter a string: ";
    cin >> input;

    // Call the function and get the result
    int result = firstUniqChar(input);

    // Output the result
    if (result != -1) {
        cout << "The first unique character is at index: " << result << endl;
    } else {
        cout << "No unique character found." << endl;
    }

    return 0;
}
