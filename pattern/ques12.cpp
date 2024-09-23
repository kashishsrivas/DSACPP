#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int i = 1;

    // Full Pyramid pattern
    while (i <= n) {
      
        int space = n - i;
        while (space > 0) {
            cout << "  "; 
            --space;
        }

        int j = 1;
        while (j <= 2 * i - 1) {
            cout << i << " ";
            ++j;
        }

        cout << endl;
        ++i;
    }

    return 0;
}
