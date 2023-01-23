#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

int main() {
    int n,k;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        
    }
    cin>>k;
    int a[k];
    int i=0;
    while(i!=k)
    {
       a[i]=arr[i];
       i++;
    }
    
    int start=0;
    int mid=k;
    while(mid<n)
    {
        arr[start]=arr[mid];
        start++;
        mid++;
    }
    
    i=n-k;
    int j=0;
    
     while(k--)
    {
      arr[i]=a[j];
      
       i++;
       j++;
    }
    
     for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
        
    }



    return 0;
}

