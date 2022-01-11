#include <iostream>
using namespace std;

int main()
{
	string a = "*";
	int vyska;
	cout << "zadaj vysku trojuholnika" << endl;
	cin >> vyska;
	for (int i = 1 ; i <= vyska; i++) {
		for (int j = 1; j <= i; ++j) {
			cout << a;

		}
		cout << endl;
	}
}