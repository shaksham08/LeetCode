#include <iostream>
#include <vector>
using namespace std;

//!Brute Fore Approach
vector<int> twoSumBrute(vector<int> &nums, int target)
{
    vector<int> result;
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[i] + nums[j] == target)
            {
                result.push_back(i);
                result.push_back(j);
            }
        }
    }
    return result;
}

int main(int argc, char const *argv[])
{
    vector<int> nums;
    int n, target;
    cin >> n;
    while (n--)
    {
        int c;
        cin >> c;
        nums.push_back(c);
    }
    cin >> target;
    vector<int> result = twoSumBrute(nums, target);
    cout << "The Result is : ";
    for (auto x : result)
    {
        cout << x << " ";
    }
    return 0;
}
