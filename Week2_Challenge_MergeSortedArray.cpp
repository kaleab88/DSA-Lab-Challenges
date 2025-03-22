#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    // Start from the end of the arrays
    int i = m - 1; // Last valid element in nums1
    int j = n - 1; // Last element in nums2
    int k = m + n - 1; // Last position in nums1

    // Merge nums2 into nums1 from the back
    while (i >= 0 && j >= 0) {
        if (nums1[i] > nums2[j]) {
            nums1[k--] = nums1[i--]; // Place nums1[i] at the end
        } else {
            nums1[k--] = nums2[j--]; // Place nums2[j] at the end
        }
    }

    // If there are remaining elements in nums2, copy them
    while (j >= 0) {
        nums1[k--] = nums2[j--];
    }
}

int main() {
    // Example inputs
    vector<int> nums1 = {1, 2, 3, 0, 0, 0}; // nums1 has space for nums2
    int m = 3; // Number of elements in nums1
    vector<int> nums2 = {2, 5, 6};
    int n = 3; // Number of elements in nums2

    // Call the merge function
    merge(nums1, m, nums2, n);

    // Output the result
    cout << "Merged array: ";
    for (int num : nums1) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
