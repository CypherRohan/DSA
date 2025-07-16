// Given an unsorted integer array nums. Return the smallest positive integer that is not present in nums.

// You must implement an algorithm that runs in O(n) time and uses O(1) auxiliary space.

 

// Example 1:

// Input: nums = [1,2,0]
// Output: 3
// Explanation: The numbers in the range [1,2] are all in the array.
// Example 2:

// Input: nums = [3,4,-1,1]
// Output: 2
// Explanation: 1 is in the array but 2 is missing.
// Example 3:

// Input: nums = [7,8,9,11,12]
// Output: 1
// Explanation: The smallest positive integer 1 is missing.
 

// Constraints:

// 1 <= nums.length <= 105
// -231 <= nums[i] <= 231 - 1






class Solution {
public:
    int firstMissingPositive(vector<int>& a) {
    int n=a.size();

    for(int i=0;i<n;i++){
        if(a[i]<=0) a[i]=n+1;
    }        

    for(int i=0;i<n;i++){
        int idx=abs(a[i])-1;//considering the elemnt as positive to check it,(idx+1-> zero based indexing)
        if(idx<n && a[idx]>0){
            // idx<n to check for valid index(i.e it should be in range of array size).
            //a[index]=value os array elemnt at the index 'idx' should be greater thean 0 'non- negative'. 
            a[idx]*=-1;
        }
    }

    for(int i=0;i<n;i++){
        if(a[i]>0)  return i+1;//zero based index
    }
    return n+1; // edge case- if every element is present then return size+1
    }
};
