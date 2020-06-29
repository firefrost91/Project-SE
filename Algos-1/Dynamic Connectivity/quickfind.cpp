#include <iostream>
using namespace std ;
void connect(int p , int q , int points[] , int size){
    int pid = points[p];
    int qid = points[q]; 
    for(int i = 0 ; i < size ; i++){
        if(points[i]==pid){
            points[i]=qid ; 
        }
    }
}
int isconnected( int p , int q ,int points[] , int size ){
    return points[p]==points[q]; 
}
int main (){
 int points[10]={1,2,3,4,5,6,7,8,9,10}; 
 
//  cout << "Enter pair of connected inputs" << endl ; 
 for(int i=0  ; i < size ; i ++) {
     points[i]=i ; 
 }
   connect(0 ,1 , points , 10);
   connect(1 ,2 , points , 10) ;
   cout<< isconnected(0 ,1 , points , 10) << endl; 
   cout<<isconnected(1,2 , points , 10) << endl;
   cout<< isconnected(3,0 , points , 10) << endl;
}
