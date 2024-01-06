#include<iostream>
#include<vector>
using namespace std;
#include<bits/stdc++.h>
    int majorityElement(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    int n=nums.size();
    int mid=n/2;
    return nums[mid];
    }