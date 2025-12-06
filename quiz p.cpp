#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter number of students: ";
    cin >> N;
    
    float dataUsed, bill;
    float totalBill = 0;

    for (int i = 1; i <= N; i++) {

        cout << "\nEnter data used (in GB) by student " << i << ": ";
        cin >> dataUsed;

        if (dataUsed <= 30) {
            bill = 0;   
        }
        else {
            bill = (dataUsed - 30) * 15;   
        }

        cout << "Bill for student " << i << ": Rs. " << bill << endl;

        if (bill > 800) {
            cout << "Heavy User" << endl;
        }

        totalBill += bill;
    }

    cout << "\nTotal bill collected from all students: Rs. " << totalBill << endl;

    return 0;
}