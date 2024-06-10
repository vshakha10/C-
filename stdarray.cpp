#include<iostream>
using namespace std;

class Student
{
private:
    int roll_no;
    string name;
    int sub[5];
    int total;
    float per;
    float cal_per(int total);
    int cal_total();
public:
    Student()
    {
        cout<<"Enter Your Roll No: ";
        cin>>roll_no;
        cout<<"Enter Your Name: ";
        cin>>name;
        for(int i=0; i<5; i++)
        {
            cout<<"Enter Your Subject "<<i+1<<" Mark: ";
            cin>>sub[i];
        }
        total = cal_total();
        per = cal_per(total);
    }
    friend void display(Student &s);
};

float Student::cal_per(int total)
{
    return total / 5.0; 
}

int Student::cal_total()
{
    int t = 0;
    for(int i=0; i<5; i++)
    {
        t += sub[i];
    }
    return t;
}

void display(Student &s)
{
    cout<<"Roll No: "<<s.roll_no<<endl;
    cout<<"Name: "<<s.name<<endl;
    for(int i=0; i<5 ; i++)
    {
        cout<<"Subject "<<i+1<<" Mark: "<<s.sub[i]<<endl;
    }
    cout<<"Total: "<<s.total<<endl;
    cout<<"Percentage: "<<s.per<<endl; 
}

int main(){
    Student s[3];
    for(int i=0;i<3;i++)
    {
        display(s[i]);   
    }
    return 0;
}