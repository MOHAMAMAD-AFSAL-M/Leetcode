class Solution {
public:
    void rotate(vector<int>& nums, int k) {
       int n=size(nums);
       int temp[n];
        int j=0;
        int e=n;
        int i=0;
        k = k % nums.size();
        while(e>0){
       temp[(i + k) % n] = nums[i];
       e--;
       i++;
       }
       for(i=0;i<n;i++){
        nums[i]=temp[i];
       } 
    }
};