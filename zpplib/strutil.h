#include <iostream>

namespace zpplib{

// 计算两个字符串之间的编辑距离（Levenshtein距离）
// 编辑距离是指将一个字符串转换为另一个字符串所需的最少单字符编辑操作次数
// 允许的操作包括：插入、删除、替换字符
// 使用动态规划算法实现，时间复杂度 O(m*n)，空间复杂度 O(m*n)
// @param word1 第一个字符串
// @param word2 第二个字符串
// @return 返回两个字符串之间的最小编辑距离
int minDistance(const string &word1, const string &word2) {
    int word1_len = word1.size();
    int word2_len = word2.size();
    if(word1_len == 0) return word2_len;
    if(word2_len == 0) return word1_len;
    vector<vector<int>> dp_table(word2_len+1, vector<int>(word1_len+1));
    for(int i=0; i<word1_len+1; i++) dp_table[0][i] = i;
    for(int i=0; i<word2_len+1; i++) dp_table[i][0] = i;
    //print_helper(dp_table, "Init table is ");
    for(int row = 1; row <word2_len+1; row++){
        for(int col = 1; col < word1_len + 1; col++){
            if(word1[col-1] == word2[row-1]){
                dp_table[row][col] = dp_table[row-1][col-1];
            }else{
                dp_table[row][col] = min({dp_table[row-1][col-1], dp_table[row][col-1], dp_table[row-1][col]}) + 1;
            }
        }
    }
    return dp_table[word2_len][word1_len];
}

}