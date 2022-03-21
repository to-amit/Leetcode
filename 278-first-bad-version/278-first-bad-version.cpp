// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
         unsigned int l = 1;
        unsigned int r = n;
        while (l <= r) {
            unsigned int m = (l+r)/2;
            if (!isBadVersion(m))
                l = m+1;
            else
                r = m-1;
        }
        return r+1;
    }
};