vector<int> separateNegativeAndPositive(vector<int> &nums){
    //te your code here.
   int n=nums.size();
   int j = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] < 0) {
            swap(nums[i], nums[j]);
            j++;
        }
    }
    for (int i = j; i < n; i++) {
        if (nums[i] > 0) {
            swap(nums[i], nums[j]);
            j++;
        }
    }

}
//2nd approach
vector<int> separateNegativeAndPositive(vector<int> &nums){
    //te your code here.
   int start=0;
   int mid=0;
   int end=nums.size()-1;
   while(mid<=end)
   {
       if(nums[mid]<0)
       {
           swap(nums[start],nums[mid]);
           start++;
           mid++;
       }
       else
       {
           swap(nums[mid],nums[end]);
           end--;
           
           
       }
   }
return nums;
}
//3 rd approach using datastructures
vector<int> separateNegativeAndPositive(vector<int> &nums)
{
int n=nums.size();    
   vector<int>v;  
     for(int i=0;i<n;i++) 
    { 
   if(nums[i]<0)     
    {          
       v.push_back(nums[i]);
    }  
    }   
      for(int i=0;i<n;i++) 
    {   
     if(nums[i]>=0)    
    {    
            v.push_back(nums[i]);      
    }    
    }  
                return v; 
                
      }