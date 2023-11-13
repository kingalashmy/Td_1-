#include <iostream>
using namespace std ;
int main() {
int n=10, p=5, q=10, r ;
r = n == (p = q) ;
cout << "A : n = " << n << " p = " << p << " q = " << q << " r = "<< r << "\n" ;         // n = 10  p = 10  q = 10  r = 1 ;
n = p = q = 5 ;
n += p += q ;
cout << "B : n = " << n << " p = " << p << " q = " << q << "\n" ;                    // n = 15  p = 10  q = 5 
q = n < p ? n++ : p++ ;
cout << "C : n = " << n << " p = " << p << " q = " << q << "\n" ;                  //   n = 15  p= 11  q = 10 ;
q = n > p ? n++ : p++ ;
cout << "D : n = " << n << " p = " << p << " q = " << q << "\n" ;                 //    n = 16  p = 11 q = 15 ;
}