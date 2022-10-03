class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) 
    {
        int length = colors.size();
        int left_pointer = 0, right_pointer = 0, spentTime = 0;
        
        while (right_pointer < length)
        {
            int maxTime = 0, totalTime = 0;
            while(colors[left_pointer] == colors[right_pointer])
            {
                maxTime = max(maxTime, neededTime[right_pointer]);
                totalTime += neededTime[right_pointer];
                right_pointer++;
            }
            
            if (right_pointer - left_pointer > 1)
            {
                spentTime += (totalTime - maxTime);
            }
            
            left_pointer = right_pointer;
        }
        return spentTime;
    }
};