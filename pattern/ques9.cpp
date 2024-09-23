#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;

//inverted pyramid 

    int row =n; 
    while(row>=1){

        //space
        int space = n-row;
        while(space){
            cout << " ";
            space--;
        }

        int col = 1; 
        while(col<=2*row -1){
            cout << "*"; 
            col++;
        }
        cout << endl;
        row--;
    }
}        