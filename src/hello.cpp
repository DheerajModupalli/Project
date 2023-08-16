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
        cout<<"\n---------------------------------------\n";
        cout<<"1-Add Student Record"<<endl;
        cout<<"2-Update Student Record"<<endl;
        cout<<"3-Display Student Records"<<endl;
        cout<<"4-Add Module"<<endl;
        cout<<"5-Display Modules Details"<<endl;
        cout<<"6-Update Module"<<endl;
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
                int sid;
                cin>>sid;
                if(stud.find(sid)==stud.end())
                {
                    cout<<"\nStudent not found\n";
                }
                else
                {
                    stuupd(stud[sid]);
                    cout << "\nUpdated Student Record\n\n";
                }
                
            break;
    
            case 3:
                cout << "\nDisplaying Student Record\n\n";
                for(auto a:stud)
                {
                    a.second.display();
                    cout<<endl;
                }
                
            break;
    
            case 4:
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
            
            case 5:
                cout << "\nDisplaying Module Details\n\n";
                for(auto b:mod)
                {
                    b.second.display();
                    cout<<endl;
                }
            break;
    
            case 6:
                cout<<"\nEnter Module ID\n";
                int mid;
                cin>>mid;
                if(mod.find(mid)==mod.end()){
                
                 cout<<"\nModule not found\n";

                }
                else{
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