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

// TODO 2: swap เขียนเอง (ห้ามใช้ swap library)
// ใช้ & (Pass by Reference) เพื่อให้เปลี่ยนค่าตัวแปรต้นทางได้จริงๆ
void swapStudent(Student &a, Student &b) {
    Student temp = a; // เก็บค่า a ไว้ในตัวแปรชั่วคราว
    a = b;            // เอาค่า b มาทับ a
    b = temp;         // เอาค่าที่เก็บไว้ใน temp มาใส่ b
}

// TODO 3: sort เขียนเอง (Bubble sort) ให้เรียง id น้อย -> มาก
void sortByID(Student students[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            // ถ้า id คนซ้าย มากกว่า คนขวา ให้สลับที่กัน (จะได้เรียงจากน้อยไปมาก)
            if (students[j].id > students[j+1].id) {
                swapStudent(students[j], students[j+1]);
            }
        }
    }
}

// ฟังก์ชันแสดงผลข้อมูลนักศึกษาทั้งหมด
void printStudents(Student students[], int size) {
    for (int i = 0; i < size; i++) {
        // TODO: แสดงผล
        cout << "ID: " << students[i].id << ", ";
        cout << "Name: " << students[i].nickname << ", ";
        cout << "Line: " << students[i].lineId << ", ";
        cout << "Phone: " << students[i].phone << "\n";
        cout << "------------------------\n";
    }
}

int main() {
    const int SIZE = 5;
    Student students[SIZE];

    // INPUT
    for (int i = 0; i < SIZE; i++) {
        cout << "=== Input Student " << (i + 1) << " ===\n";
        // TODO 4) รับข้อมูล 5 คน
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

    // แล้วเรียงลำดับตาม ID
    sortByID(students, SIZE);
    
    // แล้วแสดงผล
    cout << "\n===== Student List (Sorted by ID) =====\n";
    printStudents(students, SIZE);

    return 0;
}