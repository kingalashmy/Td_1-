#include<iostream>

using namespace std ; 

int main(){
    int nombre ; 
    cout<<"entre la nombre : "; cin>>nombre ; 

    if(nombre<0){
        cout<<"la nombre doit estr positive !!" ; 
    }
    else if (nombre == 1 || nombre == 2 ){
        cout<<"la valeur n eneme de suit   de Fibonacci est 1 ."; 
    }
    else {
         int nombre_1  = 1 , nombre_2 = 1 , sum = 0 ; 
        for(int i = 3 ; i<=nombre ; i++ ){
           sum = nombre_1 + nombre_2 ; 
           nombre_1 = nombre_2 ; 
           nombre_2= sum ; 

        }
        cout << "le nombre de suite de fibonnaci est : " <<sum;
    }
}
