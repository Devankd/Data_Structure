#include<bits/stdc++.h>
#include<iostream>
using namespace std;

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v;
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        int i=0;
        int j=0;

        while(i<nums1.size() && j<nums2.size())
        {
            if(nums1[i]<nums2[j])
            {
                i++;
            }
            else if(nums2[j]<nums1[i])
            {
                j++;
            }
            else
            {
                if(nums1[i]!= nums1[i-1])
                {
                    v.push_back(nums1[i]);
                    
                }
                i++;
                j++;
            }
        }
       
    return v;

}
int main()
{
    vector<int>num1= {1,2,2,1};
    vector<int>num2 = {2,2};

    // int ans = intersection(num1, num2);

    return 0;
}