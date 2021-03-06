/**
 * @file 258.各位相加.cpp
 * @author Crpdim (crpdim7@gmail.com)
 * @brief https://leetcode-cn.com/problems/add-digits/
 * @version 0.1
 * @date 2022-03-03
 * 
 * @copyright Copyright (c) 2022
 * 给定一个非负整数 num，反复将各个位上的数字相加，直到结果为一位数。返回这个结果。
 */

/*
能够被9整除的整数，各位上的数字加起来也必然能被9整除，所以，连续累加起来，最终必然就是9。
不能被9整除的整数，各位上的数字加起来，结果对9取模，和初始数对9取摸，是一样的，所以，连续累加起来，最终必然就是初始数对9取摸。
*/
class Solution {
public:
    int addDigits(int num) {
        return (num-1)%9+1; 
    }
};