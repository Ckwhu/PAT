#include <iostream>
#include<string>
using namespace std;

int main()
{
	long a, b;
	cin >> a >> b;
	long c = a + b;
	string temp = to_string(c);
	int index = temp.length() - 1;
	string s="";
	while (index > 2) {
		s = temp[index] + s;
		s = temp[index - 1] + s;
		s = temp[index - 2] + s;
		s = ',' + s;
		index -= 3;
	}
	if (index == 0) {
		if (temp[0] == '-')
			s[0] = temp[0];
		else
			s = temp[0] + s;
	}
	else {
		if (index == 1)
		{
			s = temp[1] + s;
			s = temp[0] + s;
		}
		else {
			s = temp[2] + s;
			s = temp[1] + s;
			s = temp[0] + s;
		}
	}
	cout << s;
}
