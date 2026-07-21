class Solution {
public:
    int mySqrt(int x) {
        int start = 1;
        int end = x;
        int mid = start + (end-start)/2;
        int ans = -1;

        if(x==0)
        {
            ans = 0;
            return ans;
        }
        while(start<=end)
        {
            if((long long)mid*mid == x)
            {
                return mid;
            }
            else if((long long)mid*mid <x)
            {
                ans=mid;
                start = mid+1;
            }
            else 
            {
                end = mid -1;
            }
            mid = start + (end-start)/2;
        }
        return ans;
    }
};