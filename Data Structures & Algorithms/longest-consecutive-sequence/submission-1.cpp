class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty())
            return 0;

        set<int> mp;

        for (auto it : nums) {
            mp.insert(it);
        }

        int count = 1;
        int longest = 1;

        for (auto it = mp.begin(); it != mp.end(); ++it) {
            auto next = std::next(it);

            if (next != mp.end() && *next - *it == 1) {
                count++;
            } else {
                longest = max(longest, count);
                count = 1;
            }
        }

        return longest;
    }
};