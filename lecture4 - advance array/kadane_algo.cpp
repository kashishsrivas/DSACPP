#include<iostream>
using namespace std;

//ques- max subarray sum using kadane's algo
//time complexity: o(n)
//space complexity: o(n) 

int main() {
    int arr[] = {-3, 2, -1, 4, -5};
    int n = sizeof(arr) / sizeof(int);

    int x[100];   //based on constraints
    x[0] = arr[0];
    int lsf = x[0];

    for(int i =1; i<=n; i++){
       x[i] = max(x[i-1] + arr[i], arr[i]);
        lsf = max( lsf, x[i]);
    }
    cout<< lsf <<endl;

    // for(int i =0; i<=n; i++){
    //     cout<< x[i] <<" ";
    // }

    // cout<< endl;
    
    return 0;
}
