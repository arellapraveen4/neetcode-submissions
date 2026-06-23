class Solution {
public:
    int characterReplacement(string s, int k) {
    vector<int> freq(26, 0);
    int l = 0, maxCount = 0, maxLength = 0;

    for (int r = 0; r < s.size(); r++) {
        freq[s[r] - 'A']++;
        maxCount = max(maxCount, freq[s[r] - 'A']);

        // If replacements needed > k, shrink window
        while ((r - l + 1) - maxCount > k) {
            freq[s[l] - 'A']--;
            l++;
        }

        maxLength = max(maxLength, r - l + 1);
    }

    return maxLength;
}
};
