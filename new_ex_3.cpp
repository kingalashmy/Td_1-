#include<iostream>

using namespace std ; 
int main(){
    int n = 5, p = 9 ;
int q ;
float x ;
q = n < p ; /* 1 */
q = n == p ; /* 2 */
q = p % n + p > n ; /* 3 */
x = ( p / n) ; /* 4 */
x = (float) p / n ; /* 5 */
x = (p + 0.5) / n ; /* 6 */
x = (int) (p + 0.5) / n ; /* 7 */
q = n * (p > n ? n : p) ; /* 8 */
q = n * (p < n ? n : p) ;


cout<<"  q = "<< (n < p );                                          // 1 : q = 1  
cout<<"  q = "<< ( n == p) ;                                          // 2  :  q = 0 
cout<<"  q = "<< p % n + ( p > n );                                   // 3 :  q = 1 ; 
cout<<"  x = "<< p / n ;                                          //  4 : x = 1 
cout<<"  x = "<< (float) p / n ;                                  // 5 : x = 1.8 
cout<<"  x = "<< (p + 0.5) / n ;                                   // 6 : 1.9 
cout<<"  x = "<< (int) (p + 0.5) / n ;                             // 7 : 1 
cout<<"  q = "<< n * (p > n ? n : p) ;                             // 8 : 25 
cout<<"  q = "<< n * (p < n ? n : p) ;                             // 9 : 45 

}