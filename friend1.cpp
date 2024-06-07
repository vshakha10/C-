#include<iostream>
using namespace std;
class large
{
    int a,b,c;
    public:
    friend large find(int ,int ,int);
   
    void input()
    {
       cout << "Enter three numbers:";
       cin >> a>>b>>c;
    }

};
large find(int a ,int b ,int c) 
{
    if (a > b)
    {
        cout << "A is largest value";
    }
    else if (b > c)
    {
        cout << "B is largest value";
    }
    else
    {
        cout << "C is largest value";
    }
        
}
int main()
{
    int a,b,c;
    large l;
    l.input();
    cout<<"value of A is : "<<a<<endl;
    cout<<"value of B is : "<<b<<endl;
    cout<<"value of C is : "<<c<<endl;
    int large find(a,b,c);
    return 0;
   
}