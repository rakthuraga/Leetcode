#include <vector>
class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {

        std::vector<int> solution;
        for(int i = 0; i < nums.size(); i++)
        {
           for(int k = 0; k < nums.size(); k++)
            {
                if(nums[i] + nums[k] == target && i!=k)
                {
                    //cout << "[" << nums[i] << "," << nums[k] << "]";  
                    solution.push_back(i);
                    solution.push_back(k);

                    return solution;
                }
            } 
        }
        return solution;
        
    }
};