class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        vector<int> counter(nums.size(), 1);
        for (int i=0; i<nums.size();i++){
            if (nums[i]>0 && nums[i]<nums.size()+1 && counter[nums[i]-1] > 0 ){
                counter[nums[i]-1] = -1;
            } 
        }
    return distance(counter.begin(), find(counter.begin(), counter.end(), 1))+1;
    }
};
