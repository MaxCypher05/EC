#include <iostream> 
#include <cmath>
#include <Windows.h>
#include <iomanip>
#include <stdlib.h>
#include <time.h>
using namespace std;



HANDLE hConsole;

//Matrix_1999
//Green = 10
//Red  = 12                    
//Yellow  = 14       
//Blue   = 11      
// Normal Color  = 7
//Violet = 13
void Color_printing_press(int c) {                 //I was bored and I added a painting function
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, c);
}

int getptr(int* ptr, int i) {
	ptr += i;
	/*for (int j = 0; j != i; j++) {
		ptr++;
	}*/
	return *ptr;
}

void setptr(int* ptr, int i, int a) {
	ptr += i;
	/*for (int j = 0; j != i; j++) {
		ptr++;
	}*/
	*ptr = a;

}

int PPCS(int* ptr, int i, int a = -6) {
	if (a != -6) {
		setptr(ptr, i, a);
		return NULL;
	}
	else {
		return getptr(ptr, i);
	}
}

void Matrix1(int x, int y,int A,int B) {             // for task 1


	int xij = x * y;
	int count = 0;
	int r;
	int* ptr = NULL;
	ptr = (int*)malloc(xij * sizeof(int));
	srand(time(NULL));

	for (int i = 0; i < xij; i++) {
		r = 0 + rand() % ((5 + 1) - 0);
		PPCS(ptr, i, r);
	}
	for (int i = 0; i < xij; i++) {
		if (i % x == 0) {
			cout << endl;
		}

		if (PPCS(ptr,i) == 0) {
			Color_printing_press(7);
		}
		if (PPCS(ptr,i) == 1) {
			Color_printing_press(12);
		}
		if (PPCS(ptr,i) == 2) {
			Color_printing_press(11);
		}
		if (PPCS(ptr,i) == 3) {
			Color_printing_press(10);
		}
		if (PPCS(ptr,i) == 4) {
			Color_printing_press(14);
		}
		if (PPCS(ptr,i) == 5) {
			Color_printing_press(13);
		}
		cout << int(PPCS(ptr,i)) << " ";
		Color_printing_press(7);
	}
	for (int i = 0; i < xij; i++) {
		if (A <= PPCS(ptr,i) and PPCS(ptr,i) <= B) {
			count++;
		}
	}
	/*for (int i = 0; i < xij; i++) {
		PPCS(ptr,i) = 0 + rand() % ((5 + 1) - 0);
	}
	for (int i = 0; i < xij; i++) {
		if (i % x == 0) {
			cout << endl;
		}

		if (ptr[i] == 0) {
			Color_printing_press(7);
		}
		if (ptr[i] == 1) {
			Color_printing_press(12);
		}
		if (ptr[i] == 2) {
			Color_printing_press(11);
		}
		if (ptr[i] == 3) {
			Color_printing_press(10);
		}
		if (ptr[i] == 4) {
			Color_printing_press(14);
		}
		if (ptr[i] == 5) {
			Color_printing_press(13);
		}
		cout << int(ptr[i]) << " ";
		Color_printing_press(7);
	}
	for (int i = 0; i < xij; i++) {
		if (A <= ptr[i] and ptr[i] <= B) {
			count++;
		}
	}*/
	cout << endl;
	cout << endl;
	cout << "Result = " << count << endl;
	cout << endl;
	free(ptr);
}

void Matrix2(int x, int y) { // for task 2


	int xij = x * y ;
	int count = 0;
	int r;
	int* ptr = NULL;
	ptr = (int*)malloc(xij * sizeof(int));
srand(time(NULL));
for (int i = 0; i < xij; i++) {
	r = (0 + rand() % ((5 + 1) - 0)) - 3;
	PPCS(ptr, i, r);
}
for (int i = 0; i <= xij; i++) {
	if (i % x == 0 and i != 0) {
		cout << "Result = " << count;
		count = 0;
		cout << endl;
	}

	if (PPCS(ptr, i) + 3 == 0) {
		Color_printing_press(7);
	}
	if (PPCS(ptr, i) + 3 == 1) {
		Color_printing_press(12);
	}
	if (PPCS(ptr, i) + 3 == 2) {
		Color_printing_press(11);
	}
	if (PPCS(ptr, i) + 3 == 3) {
		Color_printing_press(10);
	}
	if (PPCS(ptr, i) + 3 == 4) {
		Color_printing_press(14);
	}
	if (PPCS(ptr, i) + 3 == 5) {
		Color_printing_press(13);
	}
	if (i < xij) {
		cout << int(PPCS(ptr, i)) << " ";
	}
	if (PPCS(ptr, i) > 0) {
		count += PPCS(ptr, i);
	}
	Color_printing_press(7);
}
cout << endl;
free(ptr);
}

void Matrix4(int x, int y) { // for task 2


	int xij = x * y;
	int count = 0;
	int r;
	int* ptr = NULL;
	int max, min, indexX, indexN;
	ptr = (int*)malloc(xij * sizeof(int));
	srand(time(NULL));
	for (int i = 0; i < xij; i++) {
		r = 0 + rand() % ((5 + 1) - 0);
		PPCS(ptr, i, r);
	}
	for (int i = 0; i <= xij; i++) {
		if (i % x == 0 and i != 0) {
			max = -1001;
			min = 1001;
			for (int j = 0; j != (i+1); j++) {
				if (PPCS(ptr, j) > max) {
					max = PPCS(ptr, j);
					indexX = j;
				}
				if (PPCS(ptr, j) < min) {
					min = PPCS(ptr, j);
					indexN = j;
				}
			}
			if ((indexN - indexX) * (indexN - indexX) != 1) {
				if (indexX > indexN) {
					for (int inX = (indexX+1); inX != indexN; inX--) {
						count += PPCS(ptr, inX);
					}
				}
				if (indexX < indexN) {
					for (int inN = (indexN+1); inN != indexX; inN++) {
						count += PPCS(ptr, inN);
					}
				}
			}
			cout << "Result = " << count;
			count = 0;
			cout << endl;
		}

		if (PPCS(ptr, i) == 0) {
			Color_printing_press(7);
		}
		if (PPCS(ptr, i) == 1) {
			Color_printing_press(12);
		}
		if (PPCS(ptr, i) == 2) {
			Color_printing_press(11);
		}
		if (PPCS(ptr, i) == 3) {
			Color_printing_press(10);
		}
		if (PPCS(ptr, i) == 4) {
			Color_printing_press(14);
		}
		if (PPCS(ptr, i) == 5) {
			Color_printing_press(13);
		}
		if (i < xij) {
			cout << int(PPCS(ptr, i)) << " ";
		}
		/*if (PPCS(ptr, i) > 0) {
			count += PPCS(ptr, i);
		}*/
		Color_printing_press(7);
		
	}
	cout << endl;
	free(ptr);
}

void main() {
	// Task 1
	cout << "Task 1"<< endl;
	Matrix1(10, 3, 0, 2);
	Matrix1(6, 4, 3, 5);
	// Task 2
	cout << "Task 2"<< endl;
	Matrix2(3, 8);
	Matrix2(2, 9);
	// Task 4
	cout << "Task 4" << endl;
	Matrix4(3, 8);
	
}