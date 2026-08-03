class Solution {
public:
    void rotate(vector<int>& nums, int k) {
       int n=size(nums);
       int temp[n];
        int i=0;
        k = k % nums.size();
        for(i=0;i<n;i++){
       temp[(i + k) % n] = nums[i];
       }
       for(i=0;i<n;i++){
        nums[i]=temp[i];
       } 
    }
};