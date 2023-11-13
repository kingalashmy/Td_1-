#include<iostream>
using namespace std ; 
int main(){

char c = '\x05' ;
int n = 5 ;
long p = 1000 ;
float x = 1.25 ;
double z = 5.5 ;
cout<< "n + c + p = "<< n + c + p << endl  ; // long  1010 
cout << "2 * x + c  = "<< 2 * x + c  << endl ; //// float 5.25 
cout << "(char) n + c = "<< (char) n + c << endl ;  // \x0A 
cout<< " (float) z + n / 2 = " << (float) z + n/2 << endl ;// float 7.25 , la division n/2 = 2 car n de type int et la z + 2 = 7.25 de type float 

return 0 ; 
}