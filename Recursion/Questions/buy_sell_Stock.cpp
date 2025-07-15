#include<iostream>
#include<vector>


using namespace std;

void maxProfitHelper(vector<int>&nums, int i , int &minPrice, int &maxProfit){
    // base case 
    if ( i == nums.size())
    {
        return;
    }

    if(nums[i] < minPrice){
        minPrice = nums[i];
    }

    int todayProfit = nums[i] - minPrice;

    if (todayProfit > maxProfit)
    {
        maxProfit = todayProfit;

    }

    maxProfitHelper(nums, i+1, minPrice, maxProfit);
}

int maxProfit(vector<int>& nums){
    int minPrice = INT_MAX;
    int maxProfit = INT_MIN;
    maxProfitHelper(nums, 0, minPrice, maxProfit);

    return maxProfit;
}

int main() {
    vector<int> nums;
    int n;

    cout << "Enter how many stock prices: ";
    cin >> n;

    cout << "Enter the prices of the stock:" << endl;
    for (int i = 0; i < n; i++) {
        int price;
        cin >> price;
        nums.push_back(price); 
    }

    int result = maxProfit(nums);

    cout << "The maximum profit will be " << result << endl;
    

    return 0;
}