#include <iostream>
using namespace std;
class batsman
{
private:
    int bcode;
    char bname[20];
    int innings, notout, runs;
    float batsavg;
    void calcavg(int runs, int innings, int notout);

public:
    void reddata();
    void displaydata();
};
void batsman ::calcavg(int runs, int innings, int notout)
{
    batsavg = (float)runs / innings;
}
void batsman ::reddata()
{
    cout << "Enter the batsman code: ";
    cin >> bcode;
    cout << "Enter the batsman name: ";
    cin >> bname;
    cout << "Enter the innings: ";
    cin >> innings;
    cout << "Enter the notout: ";
    cin >> notout;
    cout << "Enter the runs: ";
    cin >> runs;
    calcavg(runs, innings, notout);
}

void batsman ::displaydata()
{
    cout << "Batsman code: " << bcode << endl;
    cout << "Batsman name: " << bname << endl;
    cout << "Innings: " << innings << endl;
    cout << "Notout: " << notout << endl;
    cout << "Runs: " << runs << endl;
    cout << "Batsman average: " << batsavg << endl;
}
int main()
{
    class batsman b1;
    b1.reddata();

    b1.displaydata();
}
