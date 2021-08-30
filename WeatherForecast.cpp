#include <iostream>
#include <string.h>
#include <wx/wxprec.h>
using namespace std;
std::string datetime;

int main() {
    int d;
    int m;
    int y;
    std::cout << "Enter the date in YYYY-MM-DD format: ";
    std::cin >> d; // read the day
    if (std::cin.get() != '-') // make sure there is a slash between DD and MM
    {
        std::cout << "expected -\n";
        return 1;
    }
    std::cin >> m; // read the month
    if (std::cin.get() != '-') // make sure there is a slash between MM and YYYY
    {
        std::cout << "expected -\n";
        return 1;
    }
    std::cin >> y; // read the year
    std::cout << "input date: " << y << "-" << m << "-" << d << "\n";
}
