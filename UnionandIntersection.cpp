#include <bits/stdc++.h> 
#include<vector>
using namespace std;
pair < int , int > findSimilarity(vector < int > arr1, vector < int > arr2, int n, int m) 
{
  int un=0,cnt=0;
  int i=0,j=0;
  
  
  
  
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<m;j++)
    {
      if(arr1[i]==arr2[j])
      {
        cnt++;

      }
     

    }
  }
  
 pair<int,int> ans;
 ans.first=cnt;//intersection
 ans.second=m+n-cnt;//union
 return ans;


}
