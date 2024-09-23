#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    int a[n];
    for( int i =0; i<n; ++i){
        cin>>a[i];
    }

    //bubble sort

    //perform a certain number of tasks.

    for (int  i = 0; i < n-1; i++)
    {
        //while performing the current task perform a certain number of subtasks

        for (int j=0; j< n-i-1; j++){
            //for the current subtask compare the adjacent ones ans swap it

            if (a[j] > a[j+1]){
                swap(a[j], a[j + 1]);
            }
            
        }
    }
    for(int i=0; i<n; i++){
        cout<< a[i] << " ";
    }  
}