#include "UnionFind.hpp"

class Solution {
public:
    bool equationsPossible(std::vector<std::string>& equations) {
        lmj::UnionFind<int> uf(26, 0);
        for (const std::string& str: equations) {
            if (str[1] == '=') {
                int index1 = str[0] - 'a';
                int index2 = str[3] - 'a';
                uf.join(index1, index2);
            }
        }
        for (const std::string& str: equations) {
            if (str[1] == '!') {
                int index1 = str[0] - 'a';
                int index2 = str[3] - 'a';
                if (uf.find(index1) == uf.find(index2)) {
                    return false;
                }
            }
        }
        return true;
    }
};

int main(int argc, char const *argv[])
{
    Solution s;
    std::vector<std::string> equations = {"a==b", "b!=a"};
    bool ans = s.equationsPossible(equations);
    assert(ans == false);

    equations = {"b==a","a==b"};
    ans = s.equationsPossible(equations);
    assert(ans == true);

    equations = {"a==b","b==c","a==c"};
    ans = s.equationsPossible(equations);
    assert(ans == true);

    equations = {"a==b","b!=c","c==a"};
    ans = s.equationsPossible(equations);
    assert(ans == false);

    equations = {"c==c","b==d","x!=z"};
    ans = s.equationsPossible(equations);
    assert(ans == true);

    std::cout<<"all test case pass!"<<std::endl;

    return 0;
}
