#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int largest = arr[0];
    int slargest = -1;

    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            slargest = largest;
            largest = arr[i];
        } else if (arr[i] > slargest && arr[i] != largest) {
            slargest = arr[i];
        }
    }

    cout <<  slargest << endl;

    return 0;
}
