#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    
    int a[n];
    for( int i =0; i<n; ++i){
        cin>>a[i];
    }

    int target;
    cin>> target;

    //linear search

    int ans = n; //stores the index where the element is found
    

    for(int i =0; i<n; i++){
        if (a[i] == target){
            ans = i;
            break;
        }
    }
    cout<< ans << endl;

}

