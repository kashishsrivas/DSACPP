#include<iostream>
using namespace std;

void targetSumPairs(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                cout << "(" << arr[i] << ", " << arr[j] << ")" << endl;
            }
        }
    }
}

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60};
    int n = sizeof(arr) / sizeof(int);
    int target = 60;

    targetSumPairs(arr, n, target);

    return 0;
}
