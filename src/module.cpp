#include<iostream>

using namespace std;

class Module{

    private:
    
    int mod_id;
    string mod_name;
    int dur;
    int fees;
    string tsd;

    public:

    // Constructors
    Module() {
        mod_id = 0;
        dur = 0;
        fees = 0;
    }

    Module(int id, const std::string& name, int duration, int moduleFees, const std::string& start_date) {
        mod_id = id;
        mod_name = name;
        dur = duration;
        fees = moduleFees;
        tsd = start_date;
    }

    // Getters
    int getModuleID() const {
        return mod_id;
    }

    std::string getModuleName() const {
        return mod_name;
    }

    int getDuration() const {
        return dur;
    }

    int getFees() const {
        return fees;
    }

    std::string getStartDate() const {
        return tsd;
    }

    // Setters
    void setModuleID(int id) {
        mod_id = id;
    }

    void setModuleName(const std::string& name) {
        mod_name = name;
    }

    void setDuration(int duration) {
        dur = duration;
    }

    void setFees(int moduleFees) {
        fees = moduleFees;
    }

    void setStartDate(const std::string& start_date) {
        tsd = start_date;
    }

    void display() const {
        cout << "Module ID: " << mod_id << endl;
        cout << "Module Name: " << mod_name << endl;
        cout << "Duration (weeks): " << dur << endl;
        cout << "Fees: $" << fees << endl;
        cout << "Start Date: " << tsd << endl;
    }
};