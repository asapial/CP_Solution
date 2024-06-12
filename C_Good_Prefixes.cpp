#include <iostream>
#include <unordered_map>

using namespace std;

int countGoodPrefixes(int arr[], int n) {
    int count = 0;
    unordered_map<int, int> prefixSum;

    // A prefix can be good only if its sum is 0.
    // Initialize prefixSum[0] to 1 to count the empty prefix.
    prefixSum[0] = 1;

    int currentSum = 0;
    for (int i = 0; i < n; i++) {
        currentSum += arr[i];

        // Check if a good prefix exists for subtraction (sum = 0)
        count += prefixSum.count(currentSum) ? prefixSum[currentSum] : 0;

        // Update count for prefix sum ONLY if the prefix before adding current element is good
        if (prefixSum.count(currentSum - arr[i]) > 0) {
            prefixSum[currentSum - arr[i]]++;
        }
    }

    return count;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        cout << countGoodPrefixes(arr, n) << endl;
    }

    return 0;
}
