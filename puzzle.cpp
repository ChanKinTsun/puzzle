#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main() {
	const int SIZE = 20;
	int val[SIZE];
	int seed;
	cout << "Please entere the seed value: " ;
	cin >> seed;
	srand(seed);
	for (int i = 0; i < SIZE; i++) {
		val[i] = 1 + rand() % 100;
	}
	
	cout << "The random integers are: " << endl;
	for (int i = 0; i < SIZE; i++) {
		cout << setw(5) << val[i] ;
		if ((i + 1) % 5 == 0)
			cout << endl;
	}
	int largest;
	int sum = 0;
	largest = val[0];
	for (int i = 0; i < SIZE; i++) {
		sum += val[i];
		if (val[i] > largest)
			largest = val[i];
	}
	
	cout << "The largest number is : " << largest << endl;
	cout << "The average value is : " << (double)sum / SIZE << endl;
	return 0;
}
