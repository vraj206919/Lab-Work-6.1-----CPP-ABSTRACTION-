#include <iostream>
using namespace std;

class Admin {
private:
    string company_name;         

protected:
    double manager_salary;
    double employee_salary;
    int total_staff;
    double total_annual_revenue;
    bool can_terminate;

public:
  
    Admin() {
        company_name = "WHITE & RED";
        manager_salary = 80000;
        employee_salary = 30000;
        total_staff = 50;
        total_annual_revenue = 1000000;
        can_terminate = true;
    }


    void Company() {
        cout << "Company Name: " << company_name << endl;
    }

    
    virtual void myAccess() {
        cout << "\n=== Admin Access ===\n";
        Company();
        cout << "Manager Salary: " << manager_salary << endl;
        cout << "Employee Salary: " << employee_salary << endl;
        cout << "Total Staff: " << total_staff << endl;
        cout << "Annual Revenue: " << total_annual_revenue << endl;
        cout << "Can Terminate: " << (can_terminate ? "Yes" : "No") << endl;
    }
};


class Manager : public Admin {
public:
    void myAccess() override {
        cout << "\n=== Manager Access ===\n";

  
        cout << "Manager Salary: " << manager_salary << endl;
        cout << "Total Staff: " << total_staff << endl;
        cout << "Can Terminate: " << (can_terminate ? "Yes" : "No") << endl;

        
        Company(); 
    }
};


class Employee : public Manager {
public:
    void myAccess() override {
        cout << "\n=== Employee Access ===\n";

        
        cout << "Employee Salary: " << employee_salary << endl;
        cout << "Total Staff : " << total_staff << endl;

        
        Company();
    }
};

int main() {
    Admin a;
    Manager m;
    Employee e;

    a.myAccess();
    m.myAccess();
    e.myAccess();

    return 0;
}