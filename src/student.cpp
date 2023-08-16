#include<iostream>

using namespace std;

class Student{

    private:
    int stud_id;
    string stud_name;
    string blood_grp;
    string stud_addr;
    string stud_dob;
    int smod_id;

    public:

    // Constructors
    Student() {
        stud_id = 0;
        smod_id = 0;
    }

    Student(int id, const string& name, const string& blood, const string& addr, const string& dob, int smod) {
        stud_id = id;
        stud_name = name;
        blood_grp = blood;
        stud_addr = addr;
        stud_dob = dob;
        smod_id = smod;
    }

    // Getters
    int getStudentID() const {
        return stud_id;
    }

    string getStudentName() const {
        return stud_name;
    }

    string getBloodGroup() const {
        return blood_grp;
    }

    string getStudentAddress() const {
        return stud_addr;
    }

    string getStudentDOB() const {
        return stud_dob;
    }

    int getSmodID() const {
        return smod_id;
    }

    // Setters
    void setStudentID(int id) {
        stud_id = id;
    }

    void setStudentName(const string& name) {
        stud_name = name;
    }

    void setBloodGroup(const string& blood) {
        blood_grp = blood;
    }

    void setStudentAddress(const string& addr) {
        stud_addr = addr;
    }

    void setStudentDOB(const string& dob) {
        stud_dob = dob;
    }

    void setSmodID(int smod) {
        smod_id = smod;
    }

    void display() const {
        cout << "Student ID: " << stud_id << endl;
        cout << "Student Name: " << stud_name << endl;
        cout << "Blood Group: " << blood_grp << endl;
        cout << "Address: " << stud_addr << endl;
        cout << "Date of Birth: " << stud_dob << endl;
        cout << "Smod ID: " << smod_id << endl;
    }
};