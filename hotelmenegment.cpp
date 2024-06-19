#include<iostream>
using namespace std;
class hotel
{
    string name;
    int phone_no;

    hotel(string name , int number)
    {
        name = name;
        phone_no = number;
    }
    
};
int main()
{
    int order_num;
    int no_deal;
    cout<<"|*--------------------MENU--------------------*|"<<endl;
    cout<<endl;
    cout<<"(1)   Dum Biryani                      450 Rs."<<endl;
    cout<<"(2)   haka noodles                     300 Rs."<<endl;
    cout<<"(3)   farmhouse pizza                  850 Rs."<<endl;
    cout<<"(4)   veg crispy                       750 Rs."<<endl;
    cout<<"(5)   Dry machuriyan                   250 Rs."<<endl;
    cout<<"(6)   pinaple mojito                   280 Rs."<<endl;
    cout<<"(7)   Tonic                            400 Rs."<<endl;
    cout<<"(8)   cheesy garlic bread              350 Rs."<<endl;
    cout<<"(9)   kitket shake                     450 Rs."<<endl;
    cout<<"(10)  Chocolate brownie                580 Rs."<<endl;

    cout<<"please select the order number :";
    cin>>order_num;
    cout<<"please enter the number of deals :";
    cin>>no_deal;
    cout<<endl;

    switch(order)
    {
        case 1:
        cout<<<<"Order : Dum biryani."<<endl;
        cout<<"Number of deals : "<<no_deal<<endl;
        cout<<"Price of each deal: 450 only."<<endl;
        cout<<"Total price : "<<"Rs"<<2*no_deal<<" "<<"only."<<endl;
        cout<<endl;
        cout<<"~---------THANK YOU FOR COMING-----------~"<<endl;
        break;

        case 2:
        cout<<<<"Order : haka noodles."<<endl;
        cout<<"Number of deals : "<<no_deal<<endl;
        cout<<"Price of each deal: 300 only."<<endl;
        cout<<"Total price : "<<"Rs"<<2*no_deal<<" "<<"only."<<endl;
        cout<<endl;
        cout<<"~---------THANK YOU FOR COMING-----------~"<<endl;
        break;

        case 3:
        cout<<<<"Order : farmhouse pizza."<<endl;
        cout<<"Number of deals : "<<no_deal<<endl;
        cout<<"Price of each deal: 850 only."<<endl;
        cout<<"Total price : "<<"Rs"<<2*no_deal<<" "<<"only."<<endl;
        cout<<endl;
        cout<<"~---------THANK YOU FOR COMING-----------~"<<endl;
        break;

        case 4:
        cout<<<<"Order : Veg crispy."<<endl;
        cout<<"Number of deals : "<<no_deal<<endl;
        cout<<"Price of each deal: 750 only."<<endl;
        cout<<"Total price : "<<"Rs"<<2*no_deal<<" "<<"only."<<endl;
        cout<<endl;
        cout<<"~---------THANK YOU FOR COMING-----------~"<<endl;
        break;

        case 5:
        cout<<<<"Order : Dry manchuriuyan."<<endl;
        cout<<"Number of deals : "<<no_deal<<endl;
        cout<<"Price of each deal: 250 only."<<endl;
        cout<<"Total price : "<<"Rs"<<2*no_deal<<" "<<"only."<<endl;
        cout<<endl;
        cout<<"~---------THANK YOU FOR COMING-----------~"<<endl;
        break;

        case 5:
        cout<<<<"Order : Dum biryani."<<endl;
        cout<<"Number of deals : "<<no_deal<<endl;
        cout<<"Price of each deal: 450 only."<<endl;
        cout<<"Total price : "<<"Rs"<<2*no_deal<<" "<<"only."<<endl;
        cout<<endl;
        cout<<"~---------THANK YOU FOR COMING-----------~"<<endl;
        break;
    }



              


