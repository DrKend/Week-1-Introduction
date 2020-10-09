#include <iostream>
using namespace std;

int main()
{
    typedef int Cost;
    enum CarMake {FORD, FIAT, TESLA, FIATTESLA, VW, BMW, ASTONMARTIN, HONDA, NISSAN, TOYOTA, AUDI, JAGUAR, DODGE};
    Cost cost = 13000;
    CarMake CarMake = HONDA;

    cout << "The cost of my car is: " << cost << endl;
    cout << "My Car ID is: " << CarMake << endl;
}
