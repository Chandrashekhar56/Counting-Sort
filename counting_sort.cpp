#include<iostream>
using namespace std;
void count_sort_function(int arr1[], int total_size_of_arr1, int total_range, int low_range)
{
	int x, y = 0, count_arr[total_range] = {0};

	for(x=0; x<total_size_of_arr1; x++)
		count_arr[arr1[x]-low_range]++;

	x=0;

	while(x < total_range)
	{
		l1:
		arr1[y] = low_range+x;
		y++;
		count_arr[x]--;


		if(count_arr[x] > 0)
		goto l1;

		x++;
	}
}

int main()
{
    int total_size_of_arr1, x, total_range, high_range, low_range;
	cout<<"\nEnter the total_size_of_arr1 : ";
	cin>>total_size_of_arr1;

	cout<<"\nEnter the low_range and high_range :";
	cin>>low_range>>high_range;

	int arr1[total_size_of_arr1];
    for(x=0;x<total_size_of_arr1;x++)
	{
		cout<<"Enter Array element:  "<<x+1<<": ";
		cin>>arr1[x];
	}
	total_range = high_range-low_range+1;

	count_sort_function(arr1, total_size_of_arr1, total_range,low_range);

	cout<<"\nSorted Elements: ";
	for (int x = 0; x < total_size_of_arr1; x++)
        cout<<arr1[x]<<" ";

	return 0;
}
