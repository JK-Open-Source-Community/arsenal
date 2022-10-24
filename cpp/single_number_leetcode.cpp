class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
        
        int i=0, l=nums.size(),k=0;
        while(i<l)
          {
            k^=nums[i];
            i+=1;                           
          }
            return k;
        }
};
