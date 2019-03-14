#include<iostream>
#include<cmath>
#include<vector>
#include<string>

using namespace std;

int maxArea(vector<int>& height)
{
	int integerNum = height.size();
	int maxArea = 0;
	int tmpArea = 0;

	for(int i = 0; i < integerNum - 1; i++)
	{
		for(int j = i+1; j < integerNum;j++)
		{
			if(height[j] >= height[i]) 
			{
				tmpArea = height[j] - height[i];
				if(tmpArea > maxArea) maxArea = tmpArea;
			}
		}
	}
	return maxArea;
}

int main()
{
	while(true)
	{
		vector<int> integers;
		char integerIn;
		int resultArea = 0;
		while(true)
		{
			cin >> integerIn;
			if(integerIn == ']') break;
			else if((integerIn != '[') && (integerIn != ','))
			{
				int integer = integerIn - '0';
				integers.push_back(integer);
			}
		}
		resultArea = maxArea(integers);
	
		cout << resultArea << endl;
	}

	return 0;
}