//
// Created by Haoran Li on 4/13/21.
//

#ifndef PROJECT1_NEWLINEINPUT_HPP
#define PROJECT1_NEWLINEINPUT_HPP
#include <string>

/*
 * It reads the next input line, assign the first double to the reference of latitude, assign the next string to
 * the reference of latitude direction, assign the next double to the reference of longitude, assign the next string
 * to the reference of longitude direction
 * read the last part of the input, construct the description and assign the value to the reference of the description
 */
void readAndAssignValue(double& lat, double& lon, std::string& latDir, std::string& lonDir, std::string& description);

/*
 * Space out one line for the next line of new inputs
 */
void spacingOutForNewInput();



#endif //PROJECT1_NEWLINEINPUT_HPP
