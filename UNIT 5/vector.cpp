#include <iostream>
#include <stdlib.h>
#include <vector> 

using namespace std;
int main()
{
	vector<int> nums;
	
	nums.assign(10, 2); //size,value  //4,4,4,4,4

	cout << "Vector contents: ";
	for (int a = 0; a < nums.size(); a++)//NUMS.SIZE = 5
		cout << nums[a] << " ";

	nums.push_back(2); //insert at end 444442
	int n = nums.size();
	cout << "\nLast element: " << nums[n - 1];

//.nums.pop_back();

	cout << "\nVector contents: ";
	for (int a = 0; a < nums.size(); a++)
		cout << nums[a] << " ";

	nums.insert(nums.begin(), 7);  //nums.begin() -> 0  nums.end()->6
    nums.insert(nums.begin()+3,50);

	cout << "\nFirst element: " << nums[0];
	cout << "Vector contents: ";
	for (int a = 0; a < nums.size(); a++)
		cout << nums[a] << " ";
	// nums.clear();
	// cout << "\nSize after clear(): " << nums.size();
	cout<<"Element at position 4"<<nums.at(4)<<endl;
	cout<<nums.front()<<endl;
	cout<<nums.back()<<endl;
	cout<<nums.size()<<endl;
	cout<<nums.capacity()<<endl;
	cout<<nums.max_size()<<endl;//vector<int> nums
	cout<<nums.empty()<<endl;
	nums.erase(nums.begin(),nums.begin()+4) //0 -> 4
	//40 5 6 7 8 9 0 12 34 56
	// begin,begin +4 0,4

	// if(nums.empty())
	// {
	// 	cout<<"Empty"
	// }
}
