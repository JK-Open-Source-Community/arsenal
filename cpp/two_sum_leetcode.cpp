class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
         int x;
         vector<int> out;
         x = nums.size();
         cout <<x;
        int y;
        for(int j=0; j<=x; j++){
            for(int i=0; i<x; i++){
                y = nums[i] + nums[j];
                if(y==target && i!=j){
                 out.push_back(j);
                 out.push_back(i);
                 return out;
                }
            }
        }
       return out; 
    }
};
