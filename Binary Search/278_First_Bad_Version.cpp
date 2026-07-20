class Solution {
public:
    int firstBadVersion(int n) {
        int start = 1;
        int end = n;
        int mid = start + (end-start)/2;
        int ans = -1;
        while(start<=end)
        {
            if(isBadVersion(mid) == true)
            {
                ans = mid;
                end = mid -1;
            }
            else
            {
                start = mid+1;
            }
            mid = start + (end-start)/2;
        }
        return mid;
    }
};