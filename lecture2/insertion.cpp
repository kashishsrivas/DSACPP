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

    //insertion sort
    // logic: put three current element at its correct position. 
    /*
    algo:  we are maintaining two halfs one is sorted and other ione is unsorted and we are
    trying to put the all the elements from the unsorted half to the sorted half one by one and since
    the first half is sorted one the elements from unsorted half will be automatically placed
    at the correct position.

    implementation: we have to perform some task i.e. put all the elements from unsorted to sorted one so we can say 
    we have to put elements from index 1 to sorted half by presuming in the start that index 0 is the element 
    present in the sorted half.  
    */

    for(int i = 1; i < n; i++){

        //for the current element find the first element that is having the element smaller than the 
        //current element . 
        //store the current element.
        //shift all the elements from the first index having minimum element to the current element index by 1 .
        //we are clubbing the above two task. 
        
        int ce = a[i];
        int j = i-1; 

        while(j>=0 and a[j] > ce ) {

            //shift till you found the element.

            a[j+1] = a[j];
            j --;
        }  

        //you have found the first element index having element which is smaller than ce.
        //stored in j index.

        a[j+1] = ce;
    }

    for(int i =0; i<n; i++){
        cout<< a[i]<<" ";
    }

}   