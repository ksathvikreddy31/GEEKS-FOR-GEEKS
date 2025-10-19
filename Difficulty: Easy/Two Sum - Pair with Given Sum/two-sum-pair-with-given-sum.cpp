class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        // code here
        int n=arr.size();
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            if(mp.find(target-arr[i])!=mp.end()) return true;
            else{
                mp[arr[i]]=i;
            }
        }
        return false;
    }
};