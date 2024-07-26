class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int a = nums.size() -1;
        for(int j = 0; j<k; j++){
       int last = nums[a];
       for(int i = a; i>0; i--){
            nums[i] = nums[i-1];
       } 
       nums[0] = last;
    }
    }
};
