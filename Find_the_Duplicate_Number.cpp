
#include<bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int>& nums) {

        int slow = nums[0];
        int fast = nums[0];

        slow = nums[slow];
        fast = nums[nums[fast]];

        while (slow != fast) {
            slow = nums[slow];
            fast = nums[nums[fast]];
        }

        fast = nums[0];

        while (slow != fast) {
            slow = nums[slow];
            fast = nums[fast];
        }

        return slow;
    }

    int main(){
        vector<int> a={1,2,3,4,4,5};
        int ans=findDuplicate(a);
        cout<<ans<<endl;
    }