#include <iostream>

using namespace std;

int removeDuplicates(int nums[], int N) {
    if (N == 0) return 0;  // If the array is empty, return 0

    int newLength = 1;  // Start with the first element as unique

    // Iterate through the array starting from the second element
    for (int i = 1; i < N; i++) {
        if (nums[i] != nums[newLength - 1]) {  // Compare with the last unique element
            nums[newLength] = nums[i];  // Move unique element to the next position
            newLength++;  // Increase the count of unique elements
        }
    }
    
    return newLength;
}

int main() {
    int N;
    cin >> N;
    
    int nums[N];
    
    for (int i = 0; i < N; i++) {
        cin >> nums[i];
    }
    
    int newLength = removeDuplicates(nums, N);
    
    cout << newLength << endl;
    
    for (int i = 0; i < newLength; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
    
    return 0;
}
