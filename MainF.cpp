#include <iostream> 
#include <cmath>
#include <Windows.h>
#include <iomanip>
using namespace std;



HANDLE hConsole;
//Normal Color  = 7
// Green = 10
//Matrix_1999
void Color_printing_press(int c) {                 //I was bored and I added a painting function
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, c);
}




void Matrix_1999() {                  //For Task N1
    const int D1 = 10;
    const int D2 = 10;

    int A[D1][D2];

    for (int i = 0; i < D1; i++) {
        cout << i << " ";
        for (int j = 1; j < D2; j++) {
            if (i == 0) {
                cout << setw(2) << j << " ";
            }
            else {
                Color_printing_press(10);
                A[i][j] = i * j;
                cout << setw(2) << A[i][j]<<" ";
                Color_printing_press(7);
            }
        }
        cout << endl;
     }
    
}




void Max_Min() {                      //For Task N2
    const int N = 15;
    int A[N];
    int Max = -1;
    int Min = 1000000;
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    for (int j = 0; j < N; j++) {
        if (Max < A[j]) {
            Max = A[j];

        }
    }
    for (int k = 0; k < N; k++) {
        if (Min > A[k]) {
            Min = A[k];
        }
    }
    cout << "Resolt = " << Max - Min;
}




void Function_for_Task_N3() {         //For Task N3
    const int N = 20;
    int A[N];
    int Max = -1;
    int Min = 1000000;
    int counterplus = 0;
    int counterminus = 0;
    int Product_of_positive_elements = 1;
    int Sum_of_negative_elements = 0;
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    for (int j = 0; j < N; j++) {
        if (A[j] > 0) {
            counterplus++;
            Product_of_positive_elements *= A[j];
        }
        else {
            counterminus++;
            Sum_of_negative_elements += A[j];
        }

    }
    if (counterminus > 3) cout << Product_of_positive_elements << endl;
    else cout << Sum_of_negative_elements << endl;
}


void VECTORS() {                       //For Nask N4
    const int D1 = 4;
    const int D2 = 3;

    int A[D1][D2];

    for (int i = 0; i < D1; i++) {
        for (int j = 0; j < D2; j++) {
            cin >> A[i][j];
        }
    }
    for (int i = 0; i < D1; i++) {
        for (int j = 0; j < D2; j++) {
            if (A[i][j] > 0) {
                A[i][j] = 0;
            }
            else {
                A[i][j] = -404;
            }
        }
    }
    for (int i = 0; i < D1; i++) {
        for (int j = 0; j < D2; j++) {
                cout << A[i][j] << " ";
        }
     }
        cout << endl;
    
}




int main() {
    string usl;
    //Task N1
    cout << "Task N1"<<endl;
    Matrix_1999();
    //Task N2
    cout << "Task N2" << endl;
    cout << "If you want to complete Task Number 2, Press 'Y' if not, then 'N'" << endl;
    cin >> usl;
    if (usl == "Y") {
        Max_Min();
    }
    //Task N3
    cout << "Task N3" << endl;
    cout << "If you want to complete Task Number 3, Press 'Y' if not, then 'N'" << endl;
    cin >> usl;
    if (usl == "Y") {
        Function_for_Task_N3();
    }
     //Task N4
    cout << "Task N4" << endl;
    cout << "If you want to complete Task Number 4, Press 'Y' if not, then 'N'" << endl;
    cin >> usl;
    if (usl == "Y") {
        VECTORS();
    }
}
