#include <bits/stdc++.h> 
using namespace std; 

int subArraySum(vector<int> arr, int sum, int n) 
{ 
	int curr_sum, i, j; 
	// Pick a starting point 
	for (i = 0; i < n; i++) { 
		curr_sum = arr[i]; 
		for (j = i + 1; j <= n; j++) { 
			if (curr_sum == sum) { 
				cout	<< i+1 <<" " << j <<endl ; 
				return 1; 
			} 
			if (curr_sum > sum || j == n) 
				break; 
			curr_sum = curr_sum + arr[j]; 
		} 
	} 
	cout << -1 << endl ; 
	return 0; 
} 
int main() 
{ 
 int t ; 
     cin >> t ; 
     while(t--){
         int n ; 
         cin >> n ; 
         long sum ; 
         cin >> sum ; 
         vector<int> v1 ; 
         for (int i = 0 ; i < n ; i ++) {
             int num ; 
             cin >> num ; 
             v1.push_back(num); 
         }
         subArraySum(v1 , sum , n );          
     }
} 
