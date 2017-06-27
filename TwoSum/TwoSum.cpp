//
// Created by glumes on 2017/6/27.
//

#include <vector>
#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

class Solution {
public:

    vector<int> twoSum(vector<int> &nums, int target) {
        vector<int> result;
        for (int i = 0; i < nums.size(); ++i) {
            for (int j = i + 1; j < nums.size(); ++j) {
                if (nums[i] + nums[j] == target) {
                    result.push_back(i);
                    result.push_back(j);
                }
            }
        }

        return result;
    }


    vector<int> twoSum2(vector<int> &nums, int target) {
        vector<int> result;
        unordered_map<int, int> map;
        for (int i = 0; i < nums.size(); i++) {
            if (map.find(nums[i]) == map.end()) {
                map[target - nums[i]] = i;
            } else {
                result.push_back(map[nums[i]] + 1);
                result.push_back(i + 1);
            }
        }
        return result;
    }

};


int main() {
    vector<int> data;
    data.push_back(2);
    data.push_back(7);
    data.push_back(11);
    data.push_back(15);

    Solution solution;
    vector<int> result = solution.twoSum(data, 9);

    vector<int>::iterator iter;
    for (iter = result.begin(); iter != result.end(); iter++) {
        cout << *iter << endl;
    }

    unordered_map<int, string> map;
    map.insert(make_pair(1, "Scale"));
    map.insert(make_pair(2, "Haskell"));
    map.insert(make_pair(3, "C++"));
    map.insert(make_pair(19, "Java"));

    unordered_map<int, string>::iterator iterator1;
    if ((iterator1 = map.find(3)) != map.end()) {
        cout << iterator1->second << endl;
    }

    return 0;

}