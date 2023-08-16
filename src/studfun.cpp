#include<iostream>
#include "student.cpp"

using namespace std;

Student stuadd()
{
    int sid=0,smid=0;
    string sn,bg,sa,dob;

    cout<<"\n-----------------------------------------------------------------\n";
    cout<<"ENTER THE CORRECT INPUT TYPE OR ELSE SYSTEM WILL EXIT\n";
    cout<<"INT FOR STUDENT AND MODULE ID AND STRING FOR THE REST\n";
    cout<<"-----------------------------------------------------------------\n";
    cout<<"Enter Student ID\n";
    cin>>sid;
    cout<<"Enter Student Name\n";
    cin>>sn;
    cout<<"Enter Blood Group\n";
    cin>>bg;
    cout<<"Enter Student Address\n";
    cin>>sa;
    cout<<"Enter Student Date Of Birth\n";
    cin>>dob;
    cout<<"Enter Student Module\n";
    cin>>smid;

    return Student(sid,sn,bg,sa,dob,smid);
}

void stuupd(Student& s)
{
    int smid=0;
    string sn,bg,sa,dob;

    cout<<"\n-----------------------------------------------------------------\n";
    cout<<"ENTER THE CORRECT INPUT TYPE OR ELSE SYSTEM WILL EXIT\n";
    cout<<"INT FOR STUDENT AND MODULE ID AND STRING FOR THE REST\n";
    cout<<"-----------------------------------------------------------------\n";

    cout<<"Enter Student Name\n";
    cin>>sn;
    cout<<"Enter Blood Group\n";
    cin>>bg;
    cout<<"Enter Student Address\n";
    cin>>sa;
    cout<<"Enter Student Date Of Birth\n";
    cin>>dob;
    cout<<"Enter Student Module\n";
    cin>>smid;

    s.setStudentName(sn);
    s.setBloodGroup(bg);
    s.setStudentAddress(sa);
    s.setStudentDOB(dob);
    s.setSmodID(smid);
}