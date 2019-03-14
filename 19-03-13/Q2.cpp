#include <iostream>
#include <vector>

int maxProfit(std::vector<int>& prices){
    int res = 0;
    int min_price = prices[0];
    for(const auto& p: prices){
        res = p - min_price > res ? p - min_price : res;
        min_price = p < min_price ? p : min_price;
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
    std::cout<<maxProfit(testCase)<<std::endl;
    return 0;
}

//testCase 1 pass!
//输入：[7,1,5,3,6,4]
//输出：5

//testCase 2 pass!
//输入：[7,6,4,3,1]
//输出：0
