#include <iostream>
using namespace std;

int main(){
	int N;
	cin >> N;

	int sum=0;
	int x;
	int i=0;

	while (i < N){
		cin >> x;
		sum+=x;
		i+=1;
	}
	
	cout << "Sum = " << sum << endl;

	return 0;
}
