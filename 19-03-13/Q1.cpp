#include <iostream>
#include <vector>

int maxArea(std::vector<int>& height){
    int res = 0;
    int lo = 0, hi = height.size() - 1;
    while(lo < hi){
        int lower_height = std::min(height[lo], height[hi]);
        res = std::max(res, lower_height * (hi - lo));
        if(height[lo] < height[hi]) lo++;
        else hi--;
    }
    return res;
}

int main(){
    std::vector<int> testCase;    
    int inp;
    while(std::cin>>inp) {
        testCase.push_back(inp);
        if(std::cin.get() == '\n') break;
    }
    std::cout<<maxArea(testCase)<<std::endl;
    return 0;
}

//testCase 1 pass!
//输入：[1,8,6,2,5,4,8,3,7]
//输出：49
