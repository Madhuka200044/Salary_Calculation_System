/*Salary calculator application*/
#include<iostream>
using namespace std;

string Emp_name,
       Designation,
       Department;
double Emp_number,
       B_salary;       


void Employee_Details()
{  
    
    cout<< "----Enter the Employee Details------"<<endl;
    cout<< "------------------------------------"<<endl;
    cout << "Enter Employee Name : "<<endl;
    getline(cin,Emp_name);
    cout << "Enter Designation Name : "<<endl;
    getline(cin,Designation);
    cout << "Enter Department : "<<endl;
    getline(cin,Department);
    cout << "Enter Employee Number : "<<endl;
    cin>>Emp_number;
    cout << "Enter Basic Salary : "<<endl;
    cin>>B_salary;
    
}

void Display_Menu()
{
    cout << "\n\n---Salary Detail Menu---\n";
    cout <<"1 - Calculate the Total Allowance "<<endl;
    cout <<"2 - Calculate the Gross pay "<<endl;
    cout <<"3 - Calculate the Total Deducation "<<endl;
    cout <<"4 - Calculate the Net Pay "<<endl;
    cout <<"5 - Display the Saalary sheet "<<endl;
    cout <<"6 - Exit form the System "<<endl;

} 

double Total_Allowance()
{
    const double cost_of_living_allowance = 7800.00;
    const double monthly_allowance = 5000.00;
    const double salary_arrears = 2640.00; 


    return cost_of_living_allowance+monthly_allowance+salary_arrears;
}

double Gross_Pay()
{
    return B_salary+Total_Allowance();
}

double Total_Deduction()
{
    const double Stam_Duty = 25.00;
    const double UPF_Employee = 5708.32;

    return Stam_Duty+UPF_Employee;
}

double Net_Pay()
{
    return Gross_Pay()+Total_Deduction();
}

void Salary_Sheet()
{
    cout<<"---Salary Sheet------"<<endl;
    cout<<"Emp. Number : "<<Emp_number<<endl;
    cout<<"Name : "<<Emp_name<<endl;
    cout<<"Designation : "<<Designation<<endl;
    cout<<"Department : "<<Department<<endl;
    cout<<"Basic Salary : "<<B_salary<<endl;
    cout<<"Total Allowance : "<<Total_Allowance()<<endl;
    cout<<"Gross pay : "<<Gross_Pay()<<endl;
    cout<<"Deducation : "<<Total_Deduction()<<endl;
    cout<<"Net Pay : "<<Net_Pay()<<endl;
}

int main()
{
   Employee_Details();

   Display_Menu();

   int choice;
   cout<<"Enter Your Choice "<<endl;
   cin>>choice;
   switch(choice)
   {
    case 1:
    {
        double total_allowace = Total_Allowance();
        cout << "Total Allowance: " << total_allowace << "\n";
        break;

    }
    case 2:
    {
        double gross_pay = Gross_Pay();
        cout <<"Gross Pay :"<<gross_pay<<"\n";
        break;
    }
    case 3:
    {
        double totalDeduction = Total_Deduction();
        cout << "Total Deduction: " << totalDeduction << "\n";
        break;
    }
   }
}