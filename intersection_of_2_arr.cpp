#include <iostream>
#include <unordered_map>
#include <algorithm>

using namespace std;

void findIntersection(int arr1[], int arr2[], int N) {
    unordered_map<int, int> freqMap;
    int result[N];
    int index = 0;

    // Store frequencies of elements in the first array
    for (int i = 0; i < N; i++) {
        freqMap[arr1[i]]++;
    }

    // Find common elements in the second array
    for (int i = 0; i < N; i++) {
        if (freqMap[arr2[i]] > 0) {
            result[index++] = arr2[i];
            freqMap[arr2[i]]--;  // Decrement the frequency to handle duplicates
        }
    }

    // Sort the result array up to the current index
    sort(result, result + index);

    // Print the result
    cout << "[";
    for (int i = 0; i < index; i++) {
        cout << result[i];
        if (i < index - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;
}

int main() {
    int N;
    cin >> N;

    int arr1[N], arr2[N];

    for (int i = 0; i < N; i++) {
        cin >> arr1[i];
    }

    for (int i = 0; i < N; i++) {
        cin >> arr2[i];
    }

    findIntersection(arr1, arr2, N);

    return 0;
}
