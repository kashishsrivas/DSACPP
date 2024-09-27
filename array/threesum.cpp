#include <iostream>
using namespace std;

const int DIGIT_COUNT = 10;
bool digit(int count[DIGIT_COUNT]) {
    for (int i = 0; i < DIGIT_COUNT; ++i) {
        if (count[i] > 0) {
            for (int j = i; j < DIGIT_COUNT; ++j) {
                if (i == j && count[j] < 2) continue;
                if (count[j] > 0) {
                    for (int k = j; k < DIGIT_COUNT; ++k) {
                        if ((i == k && count[i] < 2) || (j == k && count[j] < 2)) continue;
                        if (count[k] > 0) {
                            if ((i + j + k) % 10 == 3) {
                                return true;
                            }
                        }
                    }
                }
            }
        }
    }
    return false;
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int count[DIGIT_COUNT] = {0};
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        count[num % 10]++;
    }
    if (digit(count)) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
    return 0;
}