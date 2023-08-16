#include<iostream>
#include "module.cpp"

using namespace std;

Module modadd()
{
    int mid=0,dur=0,fee=0;
    string mn,tsd;

    cout<<"\n-----------------------------------------------------------------\n";
    cout<<"ENTER THE CORRECT INPUT TYPE OR ELSE SYSTEM WILL EXIT\n";
    cout<<"INT FOR MODULE ID,DURATION,FEE AND STRING FOR THE NAME AND DATE\n";
    cout<<"-----------------------------------------------------------------\n";
    cout<<"Enter Module ID\n";
    cin>>mid;
    cout<<"Enter Module Name\n";
    cin>>mn;
    cout<<"Enter Module Duration\n";
    cin>>dur;
    cout<<"Enter Module Fee\n";
    cin>>fee;
    cout<<"Enter Tentative Start Date\n";
    cin>>tsd;

    return Module(mid,mn,dur,fee,tsd);
}

void modupd(Module& m)
{
    int dur=0,fee=0;
    string mn,tsd;

    cout<<"\n-----------------------------------------------------------------\n";
    cout<<"ENTER THE CORRECT INPUT TYPE OR ELSE SYSTEM WILL EXIT\n";
    cout<<"INT FOR MODULE ID,DURATION,FEE AND STRING FOR THE NAME AND DATE\n";
    cout<<"-----------------------------------------------------------------\n";

    cout<<"Enter Module Name\n";
    cin>>mn;
    cout<<"Enter Module Duration\n";
    cin>>dur;
    cout<<"Enter Module Fee\n";
    cin>>fee;
    cout<<"Enter Tentative Start Date\n";
    cin>>tsd;

    m.setModuleName(mn);
    m.setDuration(dur);
    m.setFees(fee);
    m.setStartDate(tsd);

}