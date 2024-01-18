//LEETCODE PROBLEM
//69. Sqrt(x)

#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
using namespace std;

class Solution {
public:
    int mySqrt(int x) {
        int start=0;
        int end=x;
        int ans=-1;
        while(start<=end){
            long long int mid=start+(end-start)/2;
            if(mid*mid==x){
                return mid;
            }
            else if(mid*mid<x){
                ans=mid;
                start=mid+1;
            }
            else if(mid*mid>x){
                end=mid-1;
            }
        }
        return ans;
    }
};