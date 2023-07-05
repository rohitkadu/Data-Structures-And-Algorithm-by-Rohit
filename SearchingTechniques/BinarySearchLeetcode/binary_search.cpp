class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int start = 0 ;
        int end = nums.size()-1 ;
        int mid;

        while( start <= end )
        {
            mid = start + (end-start)/2;

            if( target == nums[mid] )
                return mid;
            else if( target > nums[mid] )
                start = mid+1; 
            else 
                end = mid-1;
        }
        return -1;
    }
};

#include<vector>
#include<iostream>
using namespace std;

int main()
{
    return 0;
}