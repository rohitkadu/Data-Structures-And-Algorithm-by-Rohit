class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        int start = 0 ;
        int mid = 0 ;
        int end = nums.size()-1;

        while( start <= end )
        {

            mid = start + (end-start)/2;

            if ( target == nums[mid] )
            {
                return mid;
            }
            else if( target > nums[mid] )
            {
                start = mid + 1 ;
            }
            else 
            {
                end = mid - 1;
            }
        }
        return start;
    }
};

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    
    return 0;
}