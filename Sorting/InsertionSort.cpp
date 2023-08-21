#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;
void insertionSort(int arr[], int n)
    {
       for(int i=0;i<n;i++)
       {
           int temp=arr[i];
           int j=i-1;
           
           while(j>=0 && arr[j]>temp)
           {
               arr[j+1]=arr[j];
               j--;
           }
           arr[j+1]=temp;
           
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
insertionSort(arr,5);
display(arr,5);

 
 
return 0;
}