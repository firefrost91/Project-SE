#include <iostream>
using namespace std ;
int count = 10 ; 
int root(int p , int points[]){
    while(points[p]!=p){
        p=points[p];
    }
    return p ; 
}
void connect(int p , int q , int points[]){
    int proot = root(p , points) ; 
    int qroot=root(q,points) ; 
   if(proot==qroot) return ; 
   else{
       points[proot]=qroot ; 
   }
   count -- ; 
}
int isconnected( int p , int q ,int points[]){
    int proot = root(p ,points);
    int qroot=root(q , points);
    return proot == qroot ; 
}
int main (){
 int points[10]={1,2,3,4,5,6,7,8,9,10}; 
 
//  cout << "Enter pair of connected inputs" << endl ; 
 for(int i=0  ; i < 10 ; i ++) {
     points[i]=i ; 
 }
   connect(0 ,1 , points );
   connect(1 ,2 , points ) ;
   connect(2 ,3 , points ); 
   connect(4 , 5 , points); 
   cout<< isconnected(0 ,1 , points ) << endl; 
   cout<<isconnected(1,2 , points ) << endl;
   cout<< isconnected(3,0 , points ) << endl;
   cout << "No of connected components are " << count << endl ; 
}
