/**
 * @file 11.盛水最多的容器.cpp
 * @author Crpdim (crpdim7@gmail.com)
 * @brief 给你 n 个非负整数 a1，a2，...，an，
 * 每个数代表坐标中的一个点 (i, ai) 。
 * 在坐标内画 n 条垂直线，
 * 垂直线 i 的两个端点分别为 (i, ai) 和 (i, 0) 。
 * 找出其中的两条线，使得它们与 x 轴共同构成的容器可以容纳最多的水。
 * @version 0.1
 * @date 2022-02-09
 * 
 * @copyright Copyright (c) 2022
 * 
 */



//双指针，使短板向中间靠拢
class Solution {
public:
    int maxArea(vector<int>& height) {
        int right = height.size()-1;
        int left = 0;
        int res = 0;
        while (left < right) {
            res = max(res,(min(height[right],height[left])*(right-left)));
            if (height[left] > height[right]) right--;
            else left++;
        }
        return res;
    }
};