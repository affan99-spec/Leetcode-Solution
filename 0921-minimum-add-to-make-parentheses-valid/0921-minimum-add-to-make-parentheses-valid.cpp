class Solution {
public:
    int minAddToMakeValid(string s) {
        int opencount = 0;
        int closecount = 0;

        for (auto ch : s) {

            if (ch == '(') {
                opencount++;
            }
            else {
                if (opencount > 0) {
                    opencount--;
                }
                else {
                    closecount++;
                }
            }
        }

        return opencount + closecount;
    }
};