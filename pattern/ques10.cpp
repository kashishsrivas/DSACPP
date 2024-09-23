#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int number = 1;
    int i = 1;
    //printing every number from 1- n

    // Full Pyramid
    while (i <= n) {
        // spaces for left alignment
        int space = n - i;
        while (space) {
            cout << "  ";
            --space;
        }

        // Print numbers in the current row
        int j = 1;
        while (j <= 2 * i - 1) { // Full pyramid needs 2*i-1 elements in each row
                cout << number << " ";
                ++number;
                ++j;
            }
            cout << endl;
            ++i;
        }
}
