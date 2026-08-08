class Solution {
public:
    long long maxPairStrength(vector<int>& nums) {
        long long maxi=0;
        for(int i=0;i<nums.size();i++)
            {
                for(int j=i+1;j<nums.size();j++)
                    {
                        long long counter;
                        long long n=__gcd(nums[i],nums[j]);
                        counter=(1LL*nums[i]*nums[j])/(n*n);
                        maxi=max(counter,maxi);
                    }
            }
        return maxi;
        
    }
};