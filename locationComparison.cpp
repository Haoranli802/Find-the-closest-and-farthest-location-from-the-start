//
// Created by Haoran Li on 4/13/21.
//

#include "locationComparison.hpp"
#include <iostream>
#include <string>
#include "newLineInput.hpp"
#include "Calculation.hpp"

double converter(double degree, std::string direction)
{
    if (direction == "/S" or direction == "/W")
    {
        return (degree * -1);
    }
    else
    {
        return degree;
    }
}

/*
 * The constructMinOrMaxSentence construct the extreme sentence by adding the current description with the current
 * distance in string.
 */
std::string constructMinOrMaxSentence(std::string currentDescription, double currentDistance)
{
    return currentDescription + " (" + std::to_string(currentDistance) + " miles)";
}

void compare(int count, double startLat, double startLon, std::string& max, std::string& min)
{
    double maxDistance, minDistance;
    double currentLat, currentLon;
    std::string maxDis, minDis, currentLatDir, currentLonDir, currentDescription, tempDis;
    readAndAssignValue(currentLat, currentLon, currentLatDir, currentLonDir, currentDescription);
    double distance = getDistance(startLat, startLon, converter(currentLat, currentLatDir), converter(currentLon, currentLonDir));
    maxDis = constructMinOrMaxSentence(currentDescription, distance);
    minDis = constructMinOrMaxSentence(currentDescription, distance);
    for(int i = 0; i < count - 1; i ++)
    {
        readAndAssignValue(currentLat, currentLon, currentLatDir, currentLonDir, currentDescription);
        distance = getDistance(startLat, startLon, converter(currentLat, currentLatDir), converter(currentLon, currentLonDir));
        if (distance >= maxDistance)
        {
            maxDistance = distance;
            maxDis = constructMinOrMaxSentence(currentDescription, distance);
        }
        else if(distance <= minDistance)
        {
            minDistance = distance;
            minDis = constructMinOrMaxSentence(currentDescription, distance);
        }
    }
    max = maxDis;
    min  = minDis;
}






