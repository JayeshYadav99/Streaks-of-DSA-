#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;
    void selectionSort(int arr[], int n)
    {
       for(int i=0;i<n-1;i++)
       {
           int minindex=i;
           for(int j=i+1;j<n;j++)
           {
               if(arr[j]<arr[minindex])
               {
                   minindex=j;
               }
           }
           swap(arr[minindex],arr[i]);
       }
    }
    void display(int arr[],int n)
    {
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

int main(){
int arr[]={1,7,6,14,9};
display(arr,5);
selectionSort(arr,5);
display(arr,5);

 
 
return 0;
}