//ques. container with most water 

#include<iostream>
using namespace std;

// optimized method
//time complexity: o(n)

int containerwater(int arr[], int n){
    int left = 0;                
    int right = n - 1;
    int maxwater = 0;

    while (left < right)
    {
      int width = right - left;
      int height = min(arr[left], arr[right]);
      int area = width * height;

      maxwater = max(maxwater, area);

      if(arr[left] < arr[right]){
        left++;
      }
      else{
        right--;
      }
    }
    return maxwater;
}    
int main() {
    int arr[] = {1,8,6,2,5,4,8,3,7};
     int n = sizeof(arr) / sizeof(arr[0]);
    
     int result = containerwater(arr,n);
     cout<< result<< endl;
     return 0;
}



// brute force
//time complexity: o(n^2)
// int containerwater(int arr[], int n){
//     int maxwater = 0;

//      for(int i=0; i<= n-1; i++){

//         for(int j = i+1; j <=n-1; j++){

//             int area = min(arr[i], arr[j]) * (j - i);
//             maxwater = max(maxwater, area);
//         }
//      }
//      return maxwater;
// }

// int main() {
//     int arr[] = {1,8,6,2,5,4,8,3,7};
//     int n = sizeof(arr) / sizeof(arr[0]);
    
//     int result = containerwater(arr,n);
//     cout<< result<< endl;
//     return 0;
// }
