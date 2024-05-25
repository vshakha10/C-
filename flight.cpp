#include <iostream>
using namespace std;
class flight
{
private:
    int flightno;
    char destination[20];
    float distance, fuel;
    int calfuel();

public:
    void feedinfo();
    void showinfo();
};
int flight::calfuel()
{
    if (distance <= 1000)
    {
        return 500;
    }
    else if (distance <= 2000)
    {
        return 1100;
    }
    else
    {
        return 2200;
    }
}

void flight::feedinfo()
{
    cout << "\nEnter the flight number: ";
    cin >> flightno;
    cout << "\nEnter the destination: ";
    cin >> destination;
    cout << "\nEnter the distance: ";
    cin >> distance;
    fuel = calfuel();
}
void flight::showinfo()
{
    cout << "\nFlight number: " << flightno;
    cout << "\nDestination: " << destination;
    cout << "\nDistance: " << distance;
    cout << "\nFuel: " << fuel;
}

int main()
{
    flight f1;
    f1.feedinfo();
    f1.showinfo();
    return 0;
}