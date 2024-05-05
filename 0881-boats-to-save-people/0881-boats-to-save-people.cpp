class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());

        int left = 0;
        int right = people.size() - 1;
        int boatsCount = 0;

        while (left <= right) {
            if (people[left] + people[right] <= limit) {
                boatsCount++;
                left++;
                right--;
            } else if (people[right] <= limit) {
                boatsCount++;
                right--;
            }
        }

        return boatsCount;
    }
};
