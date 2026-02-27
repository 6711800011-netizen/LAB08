#include <iostream>
#include <string>
using namespace std;

struct Student {
    // TODO 1) เติม field ใน struct Student ให้ครบ: studentID, nickname
    string studentID;
    string nickname;
};

int main() {
    Student s1;
    Student *p = nullptr;

    // TODO 2) ใช้ pointer p ชี้ไปที่ s1
    p = &s1; // เครื่องหมาย & คือการเอา "ที่อยู่ (Address)" ของ s1 ไปใส่ใน p

    // TODO 3) กำหนดค่าโดยใช้ p->
    p->studentID = "6711800011";
    p->nickname = "Nayada";

    // TODO 4) แสดงผลโดยใช้ p->
    cout << "ID: " << p->studentID << endl;
    cout << "Nickname: " << p->nickname << endl;

    return 0;
}