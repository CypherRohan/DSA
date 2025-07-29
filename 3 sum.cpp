class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& a) {
        vector<vector<int>>ans;
        int n=a.size();
        sort(a.begin(),a.end());
        for(int i=0;i<n;i++){
            if(i>0 && a[i]==a[i-1])  continue;
            int l=i+1;
            int r=n-1;
            while(l<r){
                int sum=a[i]+a[l]+a[r];
                if(sum<0){
                    l++;
                }
                else if(sum>0){
                    r--;
                }
                else{
                        vector<int>temp={a[i],a[l],a[r]};
                        ans.push_back(temp);
                        l++;
                        r--;
                        while(l<r && a[l] == a[l-1]) l++;
                        while(l<r && a[r]==a[r+1])  r--;
                }

            }
        }
        return ans;
    }
};