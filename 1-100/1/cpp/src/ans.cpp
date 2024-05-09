class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        map<int, int> m;
        for(int i=0; i<nums.size(); i++){
            int diff = target - nums[i];
            if(m.find(diff) != m.end()){
                result.push_back(i);
                result.push_back(m[diff]);
                return result;
            }
            m[nums[i]] = i;
        }
        return result;
    }
};