#include <bits/stdc++.h> 
using namespace std; 
int solve(vector<int> v1, int n) 
{   int count = -1  ; 
    sort(v1.begin(), v1.end()); 
    for (int i = n - 1; i >= 0; i--) { 
        int j = 0; 
        int k = i - 1; 
        while (j < k) { 
            if (v1[i] == (v1[j] + v1[k])) { 
                count++ ; 
                j++ ;  
            } 
            else if (v1[i] > (v1[j] + v1[k])) {
            j++;} 
            else{
            k--;} 
        } 
    }
    return count ; 
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
       
       int count =  solve(v1 , n )  ; 
       if(count == -1 ){
           cout << -1 << endl ; 
       }
       else { cout << (count+1) << endl ; 
     }   
} }
