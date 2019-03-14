#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

int maxArea(vector<int>& height)
{
	int integerNum = height.size();
	int maxArea = 0;
	int tmpArea = 0;
	int *areas;
	areas = new int[integerNum];
	for(int i = 0; i < integerNum; i++) areas[i] = 0;

	if(integerNum == 1)
	{
		cout << "at least two integers" << endl;
		return 0;
	}
	else
	{
		for(int i = 0; i < integerNum - 1; i++)
		{
			for(int j = i+1; j < integerNum;j++)
			{
				tmpArea = (j-i)*min(abs(height[j]),abs(height[i]));
				if(tmpArea > areas[i]) areas[i] = tmpArea;
			}
		}
		sort(areas,areas+integerNum);
		maxArea = areas[integerNum - 1];
	}
	for(int i = 0; i < integerNum; i++) cout << areas[i] << endl;
	return maxArea;
	delete[] areas;
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