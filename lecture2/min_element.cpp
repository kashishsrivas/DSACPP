#include<iostream>
#include<climits>
using namespace std;
int main() {

    int n;
    cin>>n;
    int a[n];

    for(int i=0; i<n; ++i){
        cin>> a[i];
    }

    //find the minimum element in an array

    int mini = INT_MAX; //maximum positive integer
    //i can store integer variable


    int mini_index = -1;

    for(int i =0; i<n; i++){
        if(a[i] < mini){
            mini = a[i];
        }
    }

    cout<< mini_index << " " << mini <<  endl;
}