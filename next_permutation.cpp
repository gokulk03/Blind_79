class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int ind = -1;
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                ind = i;
                break;
            }
        }

        if(ind == -1){
            reverse(nums.begin(),nums.end());
           
        }
        else{
            for(int i=n-1;i>ind;i--){
                if(nums[i]>nums[ind]){
                    swap(nums[i],nums[ind]);
                    break;
                }
            
            }
            reverse(nums.begin()+ind+1,nums.end());
        }
        
    }
};
// firstly we use c++ stl next_permutation

// if they ask us implement the function :
// then we follow three steps: 1) find the dipping point from the last element in the array eg: 2154300 here 1 is the dipping point 
// 2) swap the dipping point element with the element just greater than it 
// 3) reverse the elements from the dipping point that just got swapped in the previous step to the last element 
//  if all the elements are in sorted order both in ascending or descing then reverse the entire array
