#include <iostream>
#include <string>
using namespace std;

struct Student {
    // TODO 1) เติม field ให้ครบ
    string id;
    string nickname;
    string lineId;
    string phone;
};

// TODO 2) เขียนฟังก์ชัน printStudent
void printStudent(Student s) {
    cout << "ID: " << s.id << endl;
    cout << "Nickname: " << s.nickname << endl;
    cout << "Line ID: " << s.lineId << endl;
    cout << "Phone: " << s.phone << endl;
}

int main() {
    Student s1;

    cout << "=== Input Student 1 ===\n";
    // TODO 3) รับข้อมูล 1 คน
    cout << "ID: ";
    cin >> s1.id;
    cout << "Nickname: ";
    cin >> s1.nickname;
    cout << "Line ID: ";
    cin >> s1.lineId;
    cout << "Phone: ";
    cin >> s1.phone;

    cout << "\n=== Output (from function) ===\n";
    // TODO: เรียก printStudent
    printStudent(s1);

    return 0;
}