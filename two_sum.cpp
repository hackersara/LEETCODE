class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int size =nums.size();
    for (int i=0;i<size;i++)// [2,7,11,15]
    {
        for(int j=0;j<size;j++){
            int sum=nums[i]+nums[j];
        if(sum==target && i!=j ){
            return {i,j};
        }
    }
    }
    return{};
    }
};
