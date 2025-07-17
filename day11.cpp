// Reverse String


class Solution {
public:
    void reverseString(vector<char>& s) {
        int i=0;
        int j=s.size()-1;
    while(i<j){
        swap(s[i],s[j]);
        i++;
        j--;
    }
    }
};



// 125. Valid Palindrome

class Solution {
public:
    bool isPalindrome(string s) {
        int l = 0;
        int r = s.size() - 1;
        while (l <= r) {
            if (!isalnum(s[l])) {
                l++;
                continue;
            }
            if (!isalnum(s[r])) {
                r--;
                continue;
            } 
            if (tolower(s[l]) != tolower(s[r]))
                return false;
            else {
                l++;
                r--;
            }
        }
        return true;
    }
};




// 680. Valid Palindrome II

class Solution {
public:
    bool pal(int l, int r, string s){
        while(l<r){
            if(s[l]!=s[r])  return false;
            l++;
            r--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int l=0, r=s.length()-1;
        while(l<r){
            if(s[l]!=s[r]){
                return pal(l+1,r,s) || pal(l,r-1,s);
            }
            l++;
            r--;
        }
        return true;
    }
};