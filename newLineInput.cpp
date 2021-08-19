//
// Created by Haoran Li on 4/13/21.
//

#include "newLineInput.hpp"
#include <iostream>
#include <string>


void spacingOutForNewInput()
{
    std::string temp;
    std::getline(std::cin, temp);
}

void readAndAssignValue(double& lat, double& lon, std::string& latDir, std::string& lonDir, std::string& description)
{
    std::cin >> lat >> latDir >> lon >> lonDir;
    std::getline(std::cin, description);
    description = std::to_string(lat) + latDir + " " + std::to_string(lon) + lonDir + " " + "(" + description.substr(1, -1) + ")";
}
