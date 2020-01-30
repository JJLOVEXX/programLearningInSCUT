#include "stdafx.h"
#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> gen(int n)
{
    vector <vector<int>> res(n, vector<int>());
    for (int i = 0; i < n; i++)
	{
        
        res[i].resize(i + 1);
        
        res[i][0] = 1;
        res[i][i] = 1;
     }
    for (int i = 1; i < n; i++)
	{
        for (int j = 1; j < i; j++)
		{
           
            res[i][j] = res[i - 1][j - 1] + res[i - 1][j];
        }
    }

    return res;
}

int main()
{

    int n;
    while (cin >> n)
	{
        vector<vector<int>> res = gen(n);
        for (int i = res.size()-1; i>=0; i--)
		{
            
            for (int k = 1; k < n - i; k++)
			{
                cout<<" ";
            }
            for (int j = 0; j < res[i].size(); j++)
			{
                if (j == 0)
					cout<< res[i][j];
                else 
					cout <<" "<<res[i][j];
            }
            cout << endl;
        }
		cout << endl;
    }
    return 0;
}

