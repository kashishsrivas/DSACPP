#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;

//full pyramid 

    int row =1; 
    while(row<=n){

        //space
        int space = n-row;
        while(space){
            cout << " ";
            space--;
        }

        int col = 1; 
        while(col<=2*row -1){
            cout << "1"; 
            col++;
        }
        cout << endl;
        row++;
    }
}        