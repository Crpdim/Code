/**
 * @file 面试题01.06.字符串压缩.cpp
 * @author Crpdim (crpdim7@gmail.com)
 * @brief 字符串压缩。利用字符重复出现的次数，
 * 编写一种方法，实现基本的字符串压缩功能。比如，
 * 字符串aabcccccaaa会变为a2b1c5a3。若“压缩”后的字符串没有变短，
 * 则返回原先的字符串。你可以假设字符串中只包含大小写英文字母（a至z）。
 * @version 0.1
 * @date 2022-01-19
 * 
 * @copyright Copyright (c) 2022
 * 
 */


class Solution {
public:
    string compressString(string S) {
        int length = S.size();
        if (length == 0) return S;
        string ans = "";
        ans += S[0];
        char temp = S[0];
        int time = 1;
        for (int i = 1; i < length; ++i) {
            if (S[i] == temp) {
                time++;
            } else {
                ans += to_string(time);
                temp = S[i];
                ans += temp;
                time = 1;
            }
        }   
        ans += to_string(time);
        return ans.size() >= length? S:ans;
    }
};