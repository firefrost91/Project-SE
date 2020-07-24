#include <bits/stdc++.h> 
using namespace std; 
int Kadane(vector<int> v1, int n)
{   int maxsofar= INT_MIN  , maxendinghere= 0  ; 
    for(int i = 0 ; i < n ; i ++ ){
    maxendinghere +=v1[i] ; 
    if(maxendinghere < v1[i]){
        maxendinghere=v1[i];
    }
    if(maxsofar < maxendinghere){
        maxsofar = maxendinghere ; 
    }
    
   }
    return maxsofar ; 
} 
int main() 
{ 
     int t ; 
     cin >> t ; 
     while(t--){
         int n ; 
         cin >> n ; 
         vector<int> v1 ; 
         for (int i = 0 ; i < n ; i ++) {
             int num ; 
             cin >> num ; 
             v1.push_back(num); 
         }
       
       int maxsofar =  Kadane(v1 , n )  ; 
        cout << maxsofar << endl  ; 
} }
