//
// Created by Haoran Li on 4/13/21.
//

#ifndef PROJECT1_LOCATIONCOMPARISON_HPP
#define PROJECT1_LOCATIONCOMPARISON_HPP
#include <iostream>
#include <string>

/*
 * The converter function change the input degree if the direction is South or West
 * It keeps the input degree if the direction is North or East
 */
double converter(double degree, std::string direction);

/*
 * The compare function reads input for the given number of times.
 * Calculate the distance from the start location to the current location
 * construct and assign the max sentence to max in the current distance is greater than the max distance
 * or construct and assign the min sentence to min in the current distance is smaller than the max distance
 * The first time it reads the input with automatically assign the current distance to both max distance
 * and min distance. If there are more than one input, the function will start comparison.
 */
void compare(int count, double startLat, double startLon, std::string& max, std::string& min);

#endif //PROJECT1_LOCATIONCOMPARISON_HPP
