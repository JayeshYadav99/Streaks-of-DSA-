#include <bits/stdc++.h> 
using namespace std;
vector<int> kthSmallLarge(vector<int> &arr, int n, int k)
{
    
 


sort(arr.begin(), arr.end());

  
    cout<<endl;
   int Min=arr[k-1];
   int Max=arr[n-k];
  
   cout<<endl;
   
  
     vector<int> v={Min,Max};  
return v;
}