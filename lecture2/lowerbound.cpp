#include<iostream>
using namespace std;

// given an array data set (1,5,5,5,9,9,9,9,9,9,17,17,19) 
//find the first index i.e. having value >=9 i.e. 4th index. (lower bound problem)
//fint=d the first index is having a value>9 i.e. 10th index. (upper bound problem)
//given that x = 9;

int main() {
    int n;
    cin>>n;

    
    int a[n];
    for( int i =0; i<n; ++i){
        cin>>a[i];
    }

    int target;
    cin>> target;

    int s = 0, e = n-1; 
    int ans = n;

    while(s<=e){
        int mid = (s+e) / 2;
        if(a[mid] >= target){
            ans=mid;
            e = mid-1;
        }
        else{
            s = mid+1;
        }
    }
    cout << ans << endl;
}    