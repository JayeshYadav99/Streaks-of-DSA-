#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

  void bubbleSort(int arr[], int n)
    {
     for(int i=0;i<n-1;i++)
    {
        bool swapped=false;
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
        }
        if(swapped==false)
        {
            break;
        }
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
bubbleSort(arr,5);
display(arr,5);

 
 
return 0;
}