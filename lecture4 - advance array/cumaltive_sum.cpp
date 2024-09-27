#include<iostream>
#include<climits>
using namespace std;
//ques- find the cumaltive sum of the prefix array using given array.
// Time complexity = O(n^2) 

int main() {
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(arr) / sizeof(int);

    int csum[101];  
    csum[0] = 0;  

    for(int i = 1; i <= n; i++) {
        csum[i] = csum[i-1] + arr[i-1];
    }

    for(int i = 0; i <= n; i++) {
        cout << csum[i] << " ";
    }
    cout << endl;

    int lsf = INT_MIN; 

    for(int i = 0; i <= n - 1; i++) {
        for(int j = i; j <= n - 1; j++) {
            int sum = csum[j+1] - csum[i];
            lsf = max(lsf, sum);
        }
    }

    cout << lsf << endl;
    
    return 0;
}
