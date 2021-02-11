class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int>st;
        unordered_map<int, int> m;
        for(int i = 0;i<nums2.size();i++){
            m[nums2[i]] = -1;
            if(st.empty()){
                st.push(nums2[i]);
                continue;
            }
            else{
                while(!st.empty() && st.top() < nums2[i]){
                    m[st.top()] = nums2[i];
                    st.pop();
                }
            }
            st.push(nums2[i]);
        }
        vector<int> result;
        for(int i : nums1){
            result.push_back(m[i]);
        }
        return result;
    }
};
