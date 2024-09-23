#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;

    int row =1; 
    while(row<=n){

        //space
        int space = n-row;
        while(space){
            cout << " ";
            space--;
        }

        //numbers print 1st triangle
        int col = 1; 
        while(col<=row){
            cout << col; 
            col++;
        }

        //print 2nd traingle
        int col2 = row-1;
        while(col2){
            cout<<col2;
            col2--;
        }

        cout<<endl;

        row++;
    }
} 
