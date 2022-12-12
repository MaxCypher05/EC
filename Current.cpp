#include <iostream> 
using namespace std;
void AM() {
	int a, b, c;
	cout << "Enter three number" << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	cout << "Result" << " " << (a + b + c) / 3 << endl;
	cout << "Bye";

}

int main() {
	AM();
	return  0;
}