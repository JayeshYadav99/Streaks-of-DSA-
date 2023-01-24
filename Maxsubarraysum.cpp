long long maxSubarraySum(int arr[], int n)
{
      long long  curr = 0 , Maxo = 0;
     for(int i = 0 ; i < n ; i++){
          curr = max(arr[i] + curr , 0LL);
          Maxo = max(Maxo , curr);
     } 
     return Maxo;
       

    
    
}