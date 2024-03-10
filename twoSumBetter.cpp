#include <vector>
class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {

        std::unordered_map<int, int> findNum;

        for(int i = 0; i < nums.size(); i++)
        {
            findNum[nums[i]] = i;
        }

        for(int k = 0; k < nums.size(); k++)
        {
            int complement = target - nums[k];
            if(findNum.count(complement) && findNum[complement]!= k)
            {
                return {k,findNum[complement]};
            }
        }

    return {};
        
    }
};