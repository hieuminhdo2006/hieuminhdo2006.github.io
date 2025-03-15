#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	return 0;
}
#include <iostream>
using namespace std;

int main() {
    float diem;

    // Nh?p ði?m cho h?c sinh
    cout << "Enter the student's score: ";
    cin >> diem;

    // Ki?m tra ði?u ki?n và hi?n th? k?t qu?
    if (diem >= 5) {
        cout << "Passed" << endl;
    } else {
        cout << "Failed" << endl;
    }

    return 0;  // K?t thúc chýõng tr?nh
}

