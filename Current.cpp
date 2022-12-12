#include <iostream> 
#include <cmath>
using namespace std;

double Vector_length(double xa, double ya, double za , double xb, double yb,double zb) { // For task number 1
	return sqrt(pow((xb - xa),2.0)  + pow((yb - ya),2.0)  + pow((zb - za),2.0));

}
double Triangle_Perimeter(string a, string b, string c) { // For task number 1
	double x1, x2, x3, y1, y2, y3, z1, z2, z3;
	double AB,AC,BC;
	cout << "You are working in 3D space"<<endl;
	cout << "Enter the vertex coordinates for triangle "<< a+b+c <<endl;
	cout << "For " << a <<endl;
	cin >> x1;
	cin >> y1;
	cin >> z1;
	cout << "For " << b << endl;
	cin >> x2;
	cin >> y2;
	cin >> z2;
	AB = Vector_length(x1, y1, z1, x2, y2, z2);
	cout << "For " << c << endl;
	cin >> x3;
	cin >> y3;
	cin >> z3;
	AC = Vector_length(x1, y1, z1, x3, y3, z3);
	BC = Vector_length(x2, y2, z2, x3, y3, z3);
	return AB + AC + BC;
}

double Ball_volume(double R) {  // For task number 2
	return (4 / 3) * (3.14 * pow(R, 3.0));

 }

int sign(float a) {	// For task number 3
	if (a < 0)
		return -1;
	else if (a == 0)
		return 0;
	else if (a > 0)
		return 1;

}

double Fun1(double z) { // For task number 4
	double d;
	d = 2 * pow(z, 3.0) + z - 3;
	return sqrt(pow(z, 3.0) + 4 * pow(z, 2.0) + 7 * z + 1) / 2 + pow(2.7182, d);
}

double Fun2(double t) {// For task number 4
	return (pow(t, 2.0) + 13 * t + 16) / (7 * pow(t, 3.0) + pow(t, 2.0) - 4);
}

int main() {
						//Task number 1
	string ak, bk, ck;
	double pabc, pdef;
	ak = "A";
	bk = "B";
	ck = "C";
	pabc = Triangle_Perimeter(ak, bk, ck);
	ak = "D";
	bk = "E";
	ck = "F";
	pdef = Triangle_Perimeter(ak, bk, ck);
	cout << "p abc " << pabc << endl;
	cout << "p def " << pdef << endl;
						//Task number 1
	double r1, r2, r3, V1,V2,V3,AM;
	cout << "Enter the radius of Ball #1" << endl;
	cin >> r1;
	V1 = Ball_volume(r1);
	cout << "Bowl Volume #1 " << V1 << endl;
	cout << "Enter the radius of Ball #2" << endl;
	cin >> r2;
	V2 = Ball_volume(r2);
	cout << "Bowl Volume #2 " << V2 << endl;
	cout << "Enter the radius of Ball #3" << endl;
	cin >> r3;
	V3 = Ball_volume(r3);
	cout << "Bowl Volume #3 " << V3 << endl;
	AM = (V1 + V2 + V3) / 3;
	cout << "Arithmetic mean of Volumes = " << AM << endl;
						//Task number 3
	float x, y, z;
	cout << "Function value calculation: z = (sign x + sign y)sign(x+y) " << endl;
	cout << "Enter 'x' and 'y'" << endl;
	cin >> x;
	cin >> y;
	z = (sign(x) + sign(y)) * sign(x + y);
	cout <<"Result = " << z << endl;
						//Task number 4
	double z, t, a, b;
	cout << "Enter 'z' and 't'" << endl;
	cin >> z;
	cin >> t;
	a = Fun1(z);
	b = Fun2(t);
	cout <<"Resolt a = " << a << " Resolt b = " << b << endl;

}
