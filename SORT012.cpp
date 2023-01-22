//3 methods
//two pointer

void sort012(int *arr, int n)
{
  int j = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            swap(arr[i], arr[j]);
            j++;
        }
    }
    for (int i = j; i < n; i++) {
        if (arr[i] == 1) {
            swap(arr[i], arr[j]);
            j++;
        }
    }
}
//3 pointer
void Sort012(int *arr, int n)
{
   int hi=n-1;
   int low=0;
   int mid=0;
   while(mid<=hi)
   {
      if(arr[mid]==0)
      {
         swap(arr[low++],arr[mid++]);
      }
     else if(arr[mid]==1)
      {
       mid++;
      }
     else if(arr[mid]==2)
      {
         swap(arr[mid],arr[hi--]); 
      }
   }
}
//normal
void sort012(int *arr, int n)
{
 int count0 = 0, count1 = 0, count2 = 0;

    
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0)
            count0++;
        else if (arr[i] == 1)
            count1++;
        else
            count2++;
    }

    
    for (int i = 0; i < count0; i++)
        arr[i] = 0;
    for (int i = count0; i < count0 + count1; i++)
        arr[i] = 1;
    for (int i = count0 + count1; i < n; i++)
    arr[i]=2;
}