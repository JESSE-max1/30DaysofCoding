#include <bits/stdc++,h>
using namespace std;

void sort012(vector<int>&nums)
{
    int lo = 0;
    int mid = 0;
    int high = nums.size()-1;

    whike(mid <= high){
        switch(nums[mid]){

            case 0:
                swap(nums[low++],nums[mid++]);
                break;
            case 1:
                mid++;
            case 2:
                swap(nums[mid],nums[high--]);
                break;
        }

    }
}
