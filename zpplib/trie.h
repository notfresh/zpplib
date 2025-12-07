#include <vector>
#include <string>

using std::vector;
using std::string;

namespace zpplib{
class Trie {

public:
    vector<Trie*> children; // 弹性长度，非26个?使用的其实是固定字典。
    bool endable; //两个关键方法
    Trie() : children(26), endable(false) {} // 初始化列表

    Trie* searchPrefix(string prefix) { // 私有方法
        Trie* node = this;
        for (char ch : prefix) { // 挺像prefix作为一个链表
            int index = ch - 'a'; 
            if (node->children[index] == nullptr) {
                return nullptr;
            }
            node = node->children[index]; // 挺像prefix作为一个链表，这里非常像
        }
        return node;
    }

    void insert(string word) {
        Trie* node = this;
        for (char ch : word) { //就是一个链表啊
            int index = ch - 'a'; 
            if (!node->children[index]) {
                node->children[index] = new Trie();
            }
            node = node->children[index];
        }
        node->endable = true; // 一定要把这个节点的is_end置为true, 这样做好的好处是，不用每次都判断还有没有下一个节点，其实这么做是更加高效的，明白了吧。
    }

    bool search(string word) {
        auto found_node = searchPrefix(word);
        return found_node && found_node->endable;
    }

    bool startsWith(string prefix) {
        return searchPrefix(prefix);
    }
};
}