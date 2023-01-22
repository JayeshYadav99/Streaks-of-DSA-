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