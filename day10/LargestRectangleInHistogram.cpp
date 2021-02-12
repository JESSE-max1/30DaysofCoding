class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        heights.push_back(0);
        const int h = heights.size();
        stack<int>s;
        int i=0,max_A = 0;
        while(i<h){
            if(s.empty() || heights[i] >= heights[s.top()]){
                s.push(i);
                i++;
            }
            else{
                int k = s.top();
                s.pop();
                max_A = max(max_A, heights[k]*(s.empty() ? i: i-s.top()-1));
            }

        }
        return max_A;
    }
};
