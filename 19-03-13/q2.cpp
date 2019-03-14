#include <iostream>
#include <vector>

using namespace std;

int maxProfit(vector<int>& prices) {
  int profit = 0;
  vector<int> profits;
  for(int i = 0; i < prices.size(); ++i){
    for(int j = i+1; j < prices.size(); ++j){
      profit = prices[j] - prices[i];
      profits.push_back(profit);
    }
  }
  sort(profits.begin(), profits.end());
  if(profits.back() < 0)
    return 0;
  else
    return profits.back();   
}

int main(int argc, char** argv){
  int a[6] = {7, 6, 5, 4, 3, 1};
  vector<int> test(a, a+6);
  cout << maxProfit(test) << endl;;
}
