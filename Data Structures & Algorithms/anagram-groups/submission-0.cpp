class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<vector<int>, vector<string>> charFreqToStringGroup;

        for (const string& s : strs) {
            vector<int> count(26, 0);
            for (char c : s) {
                count[c - 'a']++;
            }
            charFreqToStringGroup[count].push_back(s);
        }

        vector<vector<string>> result;
        result.reserve(charFreqToStringGroup.size());
        for (auto& [freq, group] : charFreqToStringGroup) {
            result.push_back(move(group));
        }

        return result;
    }
};