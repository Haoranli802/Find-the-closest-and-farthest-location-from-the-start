#include <iostream>
#include <string>
#include "newLineInput.hpp"
#include "locationComparison.hpp"

int main()
{
    double startLat, startLon;
    std::string startDis, startLatDir, startLonDir, max, min;
    int count;
    readAndAssignValue(startLat, startLon, startLatDir, startLonDir, startDis);
    std::cin >> count;
    spacingOutForNewInput();
    compare(count, converter(startLat, startLatDir), converter(startLon, startLonDir), max, min);
    std::cout << "Start Location: " << startDis << std::endl;
    std::cout << "Closest Location: " << min << std::endl;
    std::cout << "Farthest Location: " << max << std::endl;
    return 0;
}
