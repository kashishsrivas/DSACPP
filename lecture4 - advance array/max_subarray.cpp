#include<iostream>
#include<climits>
using namespace std;

// Time complexity = O(n^3)

int maxSubarraySum(int arr[], int n) {
    int lsf = INT_MIN; // Largest sum so far

    // Iterate over all possible starting indices
    for(int i = 0; i <= n - 1; i++) {
        // Iterate over all possible ending indices
        for(int j = i; j <= n - 1; j++) {
            int sum = 0;
            // Calculate the sum of subarray from index i to j
            for(int k = i; k <= j; k++) {
                sum += arr[k];
            }
            if (sum > lsf) {
                lsf = sum;
            }
        }
    }

    return lsf;  // Return the maximum subarray sum
}

int main() {
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(arr) / sizeof(int);

    // Print the maximum subarray sum
    cout << maxSubarraySum(arr, n) << endl;

    return 0;
}
