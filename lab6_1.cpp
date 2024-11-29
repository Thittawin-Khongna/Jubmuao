#include<iostream>
using namespace std;

int main(){
    int evenNum = 0 , oddNum = 0 ;
    int i ;
    while(true){
        cout << "Enter an integer: ";
        cin >> i ;
        
        if (i == 0 || i < 0)
        {
            break;
        }
        
        if (i%2 == 0){
            evenNum++ ;
        } 
        else {
            oddNum++ ;
        }
        
    }
    cout << "#Even numbers = " << evenNum << endl;
    cout << "#Odd numbers = " << oddNum << endl;
    return 0;
}