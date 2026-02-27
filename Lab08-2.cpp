#include <iostream>
#include <string>
using namespace std;

struct Student {
    // TODO 1: เติม field ให้ครบ
    string id;
    string nickname;
    string lineId;
    string phone;
};

int main() {
    const int SIZE = 5;
    Student students[SIZE]; // Array ของ struct

    // INPUT
    for (int i = 0; i < SIZE; i++) {
        cout << "=== Input Student " << (i + 1) << " ===\n";
        // TODO 2: รับค่าข้อมูลนักศึกษา 5 คน
        cout << "ID: ";
        cin >> students[i].id;
        cout << "Nickname: ";
        cin >> students[i].nickname;
        cout << "Line ID: ";
        cin >> students[i].lineId;
        cout << "Phone: ";
        cin >> students[i].phone;
        cout << endl;
    }

    // OUTPUT
    cout << "\n===== Student List =====\n";
    for (int i = 0; i < SIZE; i++) {
        // TODO 3: แสดงผลข้อมูลนักศึกษาทั้ง 5 คน
        cout << "Student " << (i + 1) << " -> ";
        cout << "ID: " << students[i].id << ", ";
        cout << "Nickname: " << students[i].nickname << ", ";
        cout << "Line ID: " << students[i].lineId << ", ";
        cout << "Phone: " << students[i].phone << endl;
        cout << "------------------------\n";
    }

    return 0;
}