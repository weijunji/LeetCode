class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1) return s;

        string ret;
        int n = s.size();
        int cycleLen = 2 * numRows - 2;
        // line 0: 2*numRows-2
        // line i: k(2*numRows?2)+i & (k+1)(2*numRows-2)- i
        for (int i = 0; i < numRows; i++) {
            for (int j = 0; j + i < n; j += cycleLen) {
                ret += s[j + i];
                if (i != 0 && i != numRows - 1 && j + cycleLen - i < n)
                    ret += s[j + cycleLen - i];
            }
        }
        return ret;
    }
};