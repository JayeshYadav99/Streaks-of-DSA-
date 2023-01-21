void reverseArray(vector<int> &arr , int m)
{
 
   int a=0,b=0;
   int n=arr.size();
    for(int i=m+1;i< m+(n-m+1)/2;i++)
    {
        a=arr[i];
        b=arr[n-(i-(m+1))-1];

     arr[i]= arr[i]+ arr[n-(i-(m+1))-1];

      arr[n-(i-(m+1))-1]= arr[i]- arr[n-(i-(m+1))-1];

        arr[i]= arr[i]- arr[n-(i-(m+1))-1];

    }
}
   