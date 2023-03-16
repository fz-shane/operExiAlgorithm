#include<iostream>
#include<vector>
using namespace std;
void test()
{
	cout<<"hello world"<<endl;
}

class Solution {
public:
	bool Find(int target, vector<vector<int> > array) {
		int w = array[0].size();
		int h = array.size();
		if (w && h) {
			int x = w - 1, y = 0;

			while (x >= 0 && y < h) {
				if (array[y][x] > target) {
					x--;
				} else if (array[y][x] < target) {
					y++;
				}else{
					return true;
				}

			}
			return false;
		} else {
			return false;
		}
	}
//[
//[1,2,8,9],
//[2,4,9,12],
//[4,7,10,13],
//[6,8,11,15]
//]
	bool binaFind(int target, vector<vector<int> > array) 
	{
		int w = array[0].size();
		int h = array.size();
		if (w && h) {

			int start = 0;
			int end = w-1;
			int mid = (start+end)/2;
			for(int i = 0;i<h;i++)
			{
				if(target>array[i][mid])
				{
					start = mid;
				}else if(target<array[i][mid])
				{
					end = mid;
				}else return true;
				return false;
			}
		}else {
			return false;
		}
	}
}
int main()
{
	system("pause");
	return 0;
}