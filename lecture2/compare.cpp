#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    int a[n];
    for( int i =0; i<n; ++i){
        cin>>a[i];
    }

    int b[n];
    for( int i =0; i<n; ++i){
        cin>>b[i];
    }

    int c[n];
    for( int i =0; i<n; ++i){
        cin>>c[i];
    }


    //bubble sort

     for (int  i = 0; i < n-1; i++)
    {

        for (int j=0; j< n-i-1; j++){
            if (a[j] > a[j+1]){
                swap(a[j], a[j + 1]);
            }
            
        }
    }

    //insertion sort

    for(int i = 1; i < n; i++){ 
        int ce = b[i];
        int j = i-1; 

        while(j>=0 and b[j] > ce ) {

            b[j+1] = b[j];
            j --;
        } 
        b[j+1] = ce;
    }

    //selection sort

    
   for(int i =0; i< n; i++){
     int current_element= c[i];
    int j = i-1;
    while (j>= 0 and c[j]>current_element){
        c[j+1] = c[j];
        j--;
    }

    c[j+1] = current_element;
    }

    for(int i=0; i<n; i++){
        cout<< a[i] << " ";
    }  
    cout<<endl;

    for(int i=0; i<n; i++){
        cout<< b[i] << " ";
    }  
    cout<<endl;

    for(int i=0; i<n; i++){
        cout<< c[i] << " ";
    }  
    cout<<endl;
}