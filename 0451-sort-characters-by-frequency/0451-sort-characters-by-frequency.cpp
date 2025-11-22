class Solution {
public:
    // Comparator: sort by frequency descending, then by char ascending
    static bool comp(pair<char, int>& a, pair<char, int>& b) {
        if (a.second != b.second) 
            return a.second > b.second; // Higher frequency first
        return a.first < b.first; // Tie-breaker: smaller char first
    }

    string frequencySort(string s) {
        // 1. Correct frequency array (size 256 for ASCII)
        vector<int> freq(256, 0); // Initialize all to 0
        for (char ch : s) {
            freq[ch]++; // Count frequency
        }

        // 2. Create vector of {char, frequency} pairs
        vector<pair<char, int>> chars;
        for (int i = 0; i < 256; i++) {
            if (freq[i] > 0) {
                chars.push_back({static_cast<char>(i), freq[i]});
            }
        }

        // 3. Sort using comparator
        sort(chars.begin(), chars.end(), comp);

        // 4. Build result string
        string res;
        for (auto& p : chars) {
            res += string(p.second, p.first); // Repeat char 'p.second' times
        }
        return res;
    }
};