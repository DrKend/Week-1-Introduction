#include <iostream>
using namespace std;

int main()
{
    int studentCount = 14;
    int sweetCount = 40;
    int studentSweets = sweetCount / studentCount;
    int lecturerSweets = sweetCount - (studentCount * studentSweets);

    cout << "The students get: " << studentSweets << " The lecturer gets: " << lecturerSweets << endl;
}
