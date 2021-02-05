class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int>hash_Set;
        for(int num:nums)
            hash_Set.insert(num);
        int longeststreak =0;
        for(int num:nums){
            if(!hash_Set.count(num-1)){
                int currentnum = num;
                int currentstreak =1;
                while(hash_Set.count(currentnum+1)){
                    currentnum += 1;
                    currentstreak += 1;
                }
                longeststreak = max(currentstreak,longeststreak);
            }
        }
        return longeststreak;

    }
};
