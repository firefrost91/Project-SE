#include <bits/stdc++.h> 
using namespace std; 
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
         sort(v1.begin() , v1.end());
         for (int i = 0 ; i < n ; i ++) {
          cout << v1[i] ; " " ; 
         }
         cout << endl ; 
     }
} 
