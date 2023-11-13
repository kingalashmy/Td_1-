#include<iostream>
#include <iomanip>
using namespace std ; 
int main(){
    int nombre ; 
    cout<< "entre la linge de triangule : "; cin>> nombre ; 

    for(int ligne = 1 ; ligne<=nombre ; ligne++ ){
        // for(int espace = 1 ; espace<= nombre-ligne ; espace++){
        //     cout<<" "; 

        // }
         cout << setw(nombre - ligne +1  );
        for(int col = 1 ; col<= 2*ligne - 1 ; col++ ){
            cout<<"*"; 
        }
        cout << endl;
    }
}