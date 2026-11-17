#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

class Solution{
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs){
        unordered_map<string , vector<string>> s_strs;
        for (const auto s:strs)
        {
            string sort_s=s;
            sort(sort_s.begin(),sort_s.end());  
            s_strs[sort_s].push_back(s);    //将排序后的字符串作为键，插入原字符串作为值
        }
        vector<vector<string>> v;
        for(const auto g:s_strs)
        {
            v.push_back(g.second);
        }
        return v;
    }
};

int main(){

    return 0;
}