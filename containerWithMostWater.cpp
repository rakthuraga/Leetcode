
#include <vector>
#include <cmath>
#include <algorithm>


class Solution {
public:
    int maxArea(std::vector<int>& height) {
        int left = 0;
        int n = height.size();
        int right = n-1;
        int currentArea = 0;
        int maxArea = 0;
        int length= 0;

        while(left < right)
        {
            length = right - left;
            currentArea = length * (std::min(height[left],height[right]));
            maxArea = std::max(maxArea,currentArea);

            if(height[left] < height[right])
            {
                left++;
            }
            else
            {
                right--;
            }
        }
        return maxArea;


        
    }
};