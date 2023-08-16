#include<iostream>
#include<map>
#include "studfun.h"
#include "modfun.h"

using namespace std;


int main()
{

    map<int,Student> stud;
    map<int,Module> mod;
    Student s;
    Module m;

    bool b=true;
    while(b)
    {
        int ch;
        int sid;
        int mid;

        cout<<"\n---------------------------------------\n";
        cout<<"1-Add Student Record"<<endl;
        cout<<"2-Update Student Record"<<endl;
        cout<<"3-Display Any Student Record"<<endl;
        cout<<"4-Display All Student Records"<<endl;
        cout<<"5-Add Module"<<endl;
        cout<<"6-Display Any Module Details"<<endl;
        cout<<"7-Display All Modules Details"<<endl;
        cout<<"8-Update Module"<<endl;
        cout<<"0-Exit"<<endl;
        cout<<"---------------------------------------\n";
        cout<<"Enter you choice: ";
        cin>>ch;
        cout<<"---------------------------------------\n";

        if (!cin)
        {
            cout << "\nWrong Choice. Enter again\n " << endl;
            cin.clear();
            cin.ignore(INT_MAX, '\n');
            continue;
        }

        switch (ch) 
        {
            case 1:
                s=stuadd();
                if(stud.find(s.getStudentID())==stud.end())
                {
                    stud[s.getStudentID()]=s;
                    cout << "\nStudent Added\n\n";
                }
                else
                {
                    cout<<"\nStudent is Already present\n";
                }
                
            break;
            
            case 2:
                cout<<"\nEnter Student ID\n";
                cin>>sid;
                if(stud.find(sid)==stud.end())
                {
                    cout<<"\nStudent not found\n";
                }
                else
                {
                    cout<<"Student Id Present\n";
                    stuupd(stud[sid]);
                    cout << "\nUpdated Student Record\n\n";
                }
                
            break;

            case 3:
                cout<<"\nEnter Student ID\n";
                cin>>sid;
                if(stud.find(sid)==stud.end())
                {
                    cout<<"\nStudent not found\n";
                }
                else
                {
                    cout << "\nDisplaying Student "<<sid<<" Record\n\n";
                    stud[sid].display();
                }
                
            break;
    
            case 4:
                cout << "\nDisplaying All Student Records\n\n";
                for(auto a:stud)
                {
                    a.second.display();
                    cout<<endl;
                }
                
            break;
    
            case 5:
                m=modadd();
                if(mod.find(m.getModuleID())==mod.end())
                {
                    mod[m.getModuleID()]=m;
                    cout << "\nModule Added\n\n";
                }
                else
                {
                    cout<<"\nModule is Already Present\n";
                }  
            break;
            
            case 6:
                cout<<"\nEnter Module ID\n";
                cin>>mid;
                if(mod.find(mid)==mod.end()){
                
                 cout<<"\nModule not found\n";

                }
                else{
                    cout << "\nDisplaying Module "<<mid<<" Details\n\n";
                    mod[mid].display();
                    cout<<endl;
                }
            break;

            case 7:
                cout << "\nDisplaying All Module Details\n\n";
                for(auto b:mod)
                {
                    b.second.display();
                    cout<<endl;
                }
            break;
    
            case 8:
                cout<<"\nEnter Module ID\n";
                cin>>mid;
                if(mod.find(mid)==mod.end()){
                
                 cout<<"\nModule not found\n";

                }
                else
                {
                     cout<<"Module Id Present\n";
                    modupd(mod[mid]);
                    cout << "\nModule updated\n\n";
                }
                
            break;
    
            case 0:
                b=false;
            break;

            default:
                cout<<"\nWrong choice\n\n";
        }
    }
    return 0;
}