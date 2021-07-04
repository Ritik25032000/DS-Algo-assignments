class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int>target;
        //target.push_back(nums[0]);
        for(int i=0;i<nums.size();i++)
        {
           target.insert(target.begin()+index[i],nums[i]); 
        }
        return target;
    }
};
