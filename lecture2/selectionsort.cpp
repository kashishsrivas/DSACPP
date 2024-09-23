#include<iostream>
using namespace std;

int main() {

    int n;
    cin>> n;

    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin>> a[i];
    }    

    //selection sort code.
    // find the smallest n-2 times and put it at its correct position

    //task: find the smallest certain number of times.

    for(int i =0; i< n; i++){
      //for the current task number which is : task i, find the ith smallest element from the range i to n-1
      //And Swap it with ith index.

     int current_element= a[i];
     //you are presuming that the smallest element in the range of index from i to n-1 index. 
     // is a[i] only and hence for the time being storing it.

     //now check-in range for index i+1 to n-1 
     //koi or element to nh h h jo current element a[mini_index] se chota h  
    
    int j = i-1;
    while (j>= 0 and a[j]>current_element){
        a[j+1] = a[j];
        j--;
    }

    a[j+1] = current_element;
    }
     //now i have the smallest element in the range of i to n-1 index and since we are trying to find the ith smallest element
     //put the ith smallest element in its correct position.
    for(int i =0; i<n; i++){
        cout<< a[i] << " ";
    }

}
