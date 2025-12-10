#include <iostream>
using namespace std;

int main() {

    /*
         1 
         2 2
         3 3 3
         4 4 4 4
    */

    int row;
    cin >> row;
    int num = 1;
    // for(int i = 1; i <= row; i++) {
    //     for(int j = 1; j <= col; j++) {
    //         if(i == 1 || j == 1 || i == row || j == col) {
    //             cout << "*";
    //         } else {
    //             cout << " ";
    //         }
    //     }
    //     cout << endl;
    // }

    for(int i = 1; i <= row; i++) {
        for(int k = 1; k <= i; k++) {
            cout << num << " ";
        }
        num++;
        cout << endl;
    }

    
    return 0;
}