#include<iostream>
using namespace std;

// time complexity: o(n)
//space complexity: o(k)

int main() {
    int arr[] = {1,0,3,2,3,1,2,0,2};
    int n = sizeof(arr) / sizeof(int);

    int k =3;
    int freq[10] = {0};

    for(int i =0; i < n; i++) {
        int x =arr[i];
        freq[x]++;
    }
    for(int i =0; i<=k; i++){
        cout<< "freq(" <<i <<") = " <<freq[i] <<endl; 
    }

    for(int i=0; i<=k; i++){
        for(int j =1; j<=freq[i]; j++){
            cout<< i << " ";
        }
    }

    return 0;
}    