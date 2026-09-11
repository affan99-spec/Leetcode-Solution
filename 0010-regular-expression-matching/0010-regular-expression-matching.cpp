class Solution {
public:
    bool isMatch(string s, string p) {

        // If pattern is finished
        if (p.length() == 0) {
            return s.length() == 0;
        }

        // Check whether first characters match
        bool firstMatch = false;

        if (s.length() > 0 &&
            (s[0] == p[0] || p[0] == '.')) {
            firstMatch = true;
        }

        // If next character is '*'
        if (p.length() >= 2 && p[1] == '*') {

            // Case 1: '*' matches zero characters
            // Case 2: '*' matches one or more characters
            return isMatch(s, p.substr(2)) ||
                   (firstMatch && isMatch(s.substr(1), p));
        }

        // Normal character or '.'
        return firstMatch && isMatch(s.substr(1), p.substr(1));
    }
};