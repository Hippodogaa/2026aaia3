// week03-1.cpp 學習計畫 Basic 第8題
// LeetCode 1882. Sign of the Product of  an Array
//
class Solution {
public:
       int arraySign(vector<int>& nums) {
              int neg = 0 ; // 負數有幾個, 迴圈前面, 一開始0個
              for (int num : nums) {
                    if (num==0) return 0;
                    if (num<0) neg++;
              }
              if (neg % 2 ==0) return 1;
              return -1;
            // int ans = 1;
            // for (int i=; i<n; i++) {
            //    ans = ans * nums[1];
            // }
            // if (ans>0) return 1;
            // if (ans<0) return -1;
            // return 0;
       }
};