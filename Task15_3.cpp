#include <iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int>val;
	int num;
	bool end = true;
	while (end)
	{
		cout << "input number :";
		cin >> num;
		if (num > -1 || num < -2)
			val.push_back(num);
		if (num == -1)
		{
			for (int i = 0; i < val.size(); i++)
			{
				for (int j = 0; j < val.size() - i - 1; j++)
				{
					if (val[j] > val[j + 1])
					{
						int temp = val[j + 1];
						val[j + 1] = val[j];
						val[j] = temp;
					}
				}
			}
			cout << val[4] << endl;
		}
		if (num == -2)
			end = false;
	}



}

