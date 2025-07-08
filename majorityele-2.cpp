class Solution {
public:
    vector<int> majorityElement(vector<int>& a) {
        int n=a.size();
        int el1=0,el2=0;
        int cnt1=0,cnt2=0;

        for(int i=0;i<n;i++){
            if(cnt1==0 && a[i]!=el2){
                cnt1++;
                el1=a[i];
            }
            else if(cnt2==0 && a[i]!=el1){
                cnt2++;
                el2=a[i];
            }
            else if(el1==a[i])  cnt1++;
            else if(el2==a[i])  cnt2++;
            else{
                cnt1--;
                cnt2--;
            }
        }

        vector<int>v;
        cnt1=0,cnt2=0;
        for(int i=0;i<n;i++){
            if(el1==a[i])    cnt1++;
            if(el2==a[i])    cnt2++;
        }

        int mini=(n/3)+1;
        if(cnt1>=mini)   v.push_back(el1);
        if(cnt2>=mini)   v.push_back(el2);
        sort(v.begin(),v.end());
        return v;
    }
};