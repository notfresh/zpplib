#include <vector>

namespace zpplib {
    
    // 找到插入的位置
    // 二分查找的变体
    // @leetcode https://leetcode.cn/problems/search-insert-position/
    template<typename T>
    int search_insert_position(std::vector<T>& vec, const T& val){
        int left = 0;
        int right = vec.size() - 1;
        while(left < right){
            int mid = (left + right) / 2;
            if(vec[mid] >= val){
                right = mid;
            }else{
                left = mid + 1;
            }
        }    
        if( left < vec.size() && vec[left] >= val){
            return left;

        }
        if ( left < vec.size() && vec[left] < val){
            return left + 1;
        }
        return -1;
    }
}
