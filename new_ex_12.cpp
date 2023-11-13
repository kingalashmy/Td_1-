
#include<iostream>
#include<iomanip>

using namespace std ; 

int main(){
    int i , j ; 
    cout<< "X "<< setw(50)<<"Multiplaucationn"<< endl ; 

    for(i=1 ; i<=10 ; i++){
        if(i==1){
            cout<<setw(20);
        }else{
            cout << setw(10); 
            }
        cout<< i  ;
    }
    cout<< endl ; 

    for(i=1 ; i<30 ; i++ ){
        cout<< " *  " ; 
    }
    cout<< endl ; 
    for(i=1 ;  i<=10 ; i++){
        cout<< i <<setw(10) << " I "<< setw(10) ; 
    
    for(j=1 ; j<=10; j++){
        cout<<setw(10)<< i*j ; 
    }
    cout<< endl ; 
    }
}