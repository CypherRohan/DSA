// Given an integer array nums, handle multiple queries of the following type:

// Calculate the sum of the elements of nums between indices left and right inclusive where left <= right.
// Implement the NumArray class:

// NumArray(int[] nums) Initializes the object with the integer array nums.
// int sumRange(int left, int right) Returns the sum of the elements of nums between indices left and right inclusive (i.e. nums[left] + nums[left + 1] + ... + nums[right]).
 

// Example 1:

// Input
// ["NumArray", "sumRange", "sumRange", "sumRange"]
// [[[-2, 0, 3, -5, 2, -1]], [0, 2], [2, 5], [0, 5]]
// Output
// [null, 1, -1, -3]

// Explanation
// NumArray numArray = new NumArray([-2, 0, 3, -5, 2, -1]);
// numArray.sumRange(0, 2); // return (-2) + 0 + 3 = 1
// numArray.sumRange(2, 5); // return 3 + (-5) + 2 + (-1) = -1
// numArray.sumRange(0, 5); // return (-2) + 0 + 3 + (-5) + 2 + (-1) = -3
 

// Constraints:

// 1 <= nums.length <= 104
// -105 <= nums[i] <= 105
// 0 <= left <= right < nums.length
// At most 104 calls will be made to sumRange.



class NumArray {
public:
    vector<int>a;//Initialising array to usee it in the NumArray constructor.
    vector<int>sum;
    NumArray(vector<int>& nums) {
        a=nums;
        for(int i=1;i<a.size();i++){
            a[i]=a[i]+a[i-1];
        }
        sum=a;
    }
    
    int sumRange(int l, int r) {//uses NumArray constructor ,once by calling it one then calling sumRange.
        
           if(l==0) return sum[r];
            else{
               return sum[r]-sum[l-1];
            }
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */
