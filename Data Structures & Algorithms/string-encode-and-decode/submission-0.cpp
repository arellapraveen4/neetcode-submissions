#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Encode: turn list of strings into one string
    string encode(vector<string>& strs) {
        string encoded;
        for (auto &s : strs) {
            encoded += to_string(s.size()) + "#" + s; 
            // length + '#' + actual string
        }
        return encoded;
    }

    // Decode: turn encoded string back into list of strings
    vector<string> decode(string encoded) {
        vector<string> result;
        int i = 0;
        while (i < encoded.size()) {
            // read length until '#'
            int j = i;
            while (encoded[j] != '#') j++;
            int len = stoi(encoded.substr(i, j - i));
            i = j + 1; // move past '#'

            // extract the string of length 'len'
            string s = encoded.substr(i, len);
            result.push_back(s);

            i += len; // move to next encoded block
        }
        return result;
    }
};
