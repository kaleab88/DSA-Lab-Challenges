#include <iostream>
#include <vector>
#include <unordered_map>

std::vector<int> twoSum(std::vector<int>& nums, int target) {
    // Create a hash map to store numbers and their indices.
    std::unordered_map<int, int> numMap;

    // Iterate through the array.
    for (int i = 0; i < nums.size(); ++i) {
        // Calculate the complement (the number needed to reach the target).
        int complement = target - nums[i];

        // Check if the complement exists in the hash map.
        if (numMap.find(complement) != numMap.end()) {
            // If found, return the indices of the current number and its complement.
            return {numMap[complement], i};
        }

        // If the complement is not found, store the current number and its index in the hash map.
        numMap[nums[i]] = i;
    }

    // If no solution is found, return an empty vector (this should not happen in this problem).
    return {};
}

int main() {
    // Example usage:
    std::vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    std::vector<int> result = twoSum(nums, target);

    // Print the result.
    std::cout << "[" << result[0] << ", " << result[1] << "]" << std::endl;

    return 0;
}