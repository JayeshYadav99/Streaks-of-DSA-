int sumOfMaxMin(int arr[], int n){
  int Max=INT_MIN;
    int Min=arr[0];
    for(int i=0;i<n;i++)
    {
       if(arr[i]>Max)
       {
           Max=arr[i];
           
       }
      else  if(arr[i]<Min)
       {
           Min=arr[i];
            
        }
        
        
    }
    return Max+Min;
}