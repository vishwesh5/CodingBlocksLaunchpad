#include <iostream>
using namespace std;

int main(){
	int no1,no2,no3;
	// Read 3 numbers
	cin >> no1 >> no2 >> no3;

	if (no1 > no2 and no1 > no3)
		cout << no1 << " is largest" << endl;
	else if (no2 > no1 && no2 > no3)
		cout << no2 << " is largest" << endl;
	else
		cout << no3 << " is largest" << endl;
	return 0;
}
