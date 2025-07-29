class Solution {
public:
    vector<int> twoSum(vector<int>& a, int k) {
        int n=a.size();
        vector<int>v;
        int l=0,r=n-1;
        
        while(l<r){
            if(a[l]+a[r]>k) r--;
            else if(a[l]+a[r]<k)    l++;
            else{
                v.push_back(l+1);
                v.push_back(r+1);
                return v;
            }
        }
        return v;
    }
};