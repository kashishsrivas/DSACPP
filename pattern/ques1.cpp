#include<iostream>
using namespace std;
int main() {

    // print square with n =5

    // row = column

    int n;
    cin>>n;

    int i = 1;

    while(i<=n) { // print row

        int j =1; //print column 
        while(j<=n){
            cout<< "*" ;
           j = j+1;
        }

        cout<< endl;

        i = i+1;
    } 
} 