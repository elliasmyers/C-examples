#include <iostream>
#include <iomanip>
int main() 
{
	using namespace std;	
			
	int constexpr low{1};
	int constexpr high{10};
	int constexpr width{4};
	
	cout << setfill(' ')
	     << setw(4)
	     << '*';
	cout <<  '|';
	for (int i{low}; i <= high; ++i) 
	{
 		cout << setw(width) << i;
	} 
  	cout << '\n';		

	cout.fill('-');
	cout.width(width);
	cout << '+';
	cout << setw(width*high+1) << "";
	cout << '\n';
	
	for (int i{low}; i <= high; ++i)
	{
		cout << setfill(' ') << setw(width) << i;
 		cout << '|';

		for (int b{low}; b <= high; ++b)
		{
			cout << setw(width)  << b*i; 
			
		}
		cout << '\n';
	}
	
}
