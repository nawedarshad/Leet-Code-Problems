class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0) return 0;
        int newSize=1;
        nums.push_back(1000);
        for(int i=1; i<nums.size()-1; ++i){
            if(nums[i-1]==nums[i] && nums[i] == nums[i+1]){
                nums.erase(nums.begin() + i);
                i--;
            }else{
            ++newSize;
            }
        }
    return newSize;
    }
};
