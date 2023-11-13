#include<iostream>
using namespace std ; 

int main(){
    double nombre ; 
    cout<<"entrez un nombre : " ; cin>> nombre ; 
    double sum =0  ; 
    if(nombre<0){
        cout<< "la nombre doit etre positive ! "; 
    }
    else{

    
    for(int i = 1 ; i<=nombre ; i++ ){
        sum +=  1.0 / i ; 
        cout<<" 1 / "<< i <<"  " ; 
    }
    // cout<<5/1 ;

    cout << "\n la somme de série harmonique est : " <<sum;
    }

}