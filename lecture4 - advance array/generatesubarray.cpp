#include<iostream>
using namespace std;

// for an array of size n, it has n(n+1)/2 subarrays ~ n^2 subarrays
//time complexity: o(n^3)

void generateSubarrays(int arr[], int n){

    for(int i=0; i<=n-1; i++){ //iterate all possible starting indices
        for(int j=i; j<=n-1; j++){  //for any starting index i, iterate over all the position
           for(int k = i; k<=j; k++){ //generate subarrays that starts at the ith index and ends at the n-1
            cout<< arr[k] << " ";
           }
           cout<< endl;
        }  
        cout<< endl;
    }
}

int main() {

    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(int);

    generateSubarrays(arr, n); 

    return 0; 
    

}