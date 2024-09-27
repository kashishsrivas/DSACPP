#include <iostream>
using namespace std;

int main() {
    int n, k;
    cout << "Enter the size: ";
    cin >> n;

    int a[n];
    cout << "elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "sum (k) you want: ";
    cin >> k;

    int len = 0;
    for (int i = 0; i < n; i++) { // starting index
        for (int j = i; j < n; j++) { // ending index
            int s = 0;
            for (int k = i; k <= j; k++) { // sum the elements of subarray
                s += a[k];
            }

            if (s == k)
                len = max(len, j - i + 1);
        }
    }
    
    cout << "The length of the longest subarray is: " << len << "\n";
    
    return 0;
}
