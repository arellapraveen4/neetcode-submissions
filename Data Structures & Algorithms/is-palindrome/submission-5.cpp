#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0, right = s.size() - 1;

        while (left < right) {
            // Move left pointer to next alphanumeric
            while (left < right && !isalnum((unsigned char)s[left])) left++;
            // Move right pointer to previous alphanumeric
            while (left < right && !isalnum((unsigned char)s[right])) right--;

            // Normalize both characters once
            char l = tolower((unsigned char)s[left]);
            char r = tolower((unsigned char)s[right]);

            if (l != r) return false;

            left++;
            right--;
        }

        return true;
    }
};
