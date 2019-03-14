#include <iostream>
#include <vector>
using namespace std;

int maxArea(vector<int>& height) {
  double s = 0;
  vector<int> container;
  for(int i = 0; i < height.size() - 1; ++i){
    for(int j = i+1; j < height.size(); ++j){
      s = min(height[i], height[j]) * (j-i);
      container.push_back(s);
    }
  }
  sort(container.begin(), container.end());
  return container.back();  
}

int main(int argc, char ** argv){
  int a[9] = {1, 8, 6, 2, 5, 4, 8, 3, 7};
  vector<int> test_data(a, a+9);
  cout << maxArea(test_data)<<endl;
}
