#include <bits/stdc++.h>
using namespace std;
#define lli long long
#define pb push_back
#define pr pair<int,int>
#define prl pair <lli,lli>
//1. Think Greedy
//2. Think Brute Force
//3. Think solution in reverse order
//4. Think DP [ check constraints carefully ]
//5. Check base cases for DP and prove solution for Greedy
//6. Think Graph
//7. REMEMBER PARTITON USING GREEDY ON EVERY INDEX
//8. BINARY SEARCH ON SOLUTION SPACE IF TIME COMPLEXITY IS O(N*N), SELECT MID AND RUN A FEASIBILITY CHECK
//9. BINARY SEARCH APPLIED FOR EVERY INDEX, WHEN EVERY INDEX CAN BECOME THE ANSWER. TC: O(N*N*log(N))
//10. CALCULATE PREFIX AND SUFFIX SUM EXCLUDING THE CURRENT INDEX WHERE YOU WANT TO GET ANSWER ON INCLUDING AND EXCLUDING AN ELEMENT
void disp(vector<int> &vec)
{
for (int i = 0; i < vec.size(); i++)
{
    cout << vec[i]<<' ';
}
cout << endl;
}
void solve(){
    cout<<"This is a sample";
}
int main(){
   int t;
   cin>>t;
   while(t--){
      solve();
   }
   return 0;
}