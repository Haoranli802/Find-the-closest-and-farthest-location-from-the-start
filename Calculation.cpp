//
// Created by Haoran Li on 4/13/21.
//

#include "Calculation.hpp"
#include <cmath>

/*
 * Constant value, the radius of the earth
 */
double EARTHRADIUS = 3959.9;

/*
 * The convertDegreeToRadians function converts the input degree to the corresponding radian
 */
double convertDegreeToRadians(double degree)
{
    return degree / 180 * M_PI;
}

double getDistance(double startLat, double startLon, double currentLat, double currentLon)
{
    double dlat = abs(currentLat - startLat);
    double dlon = abs(currentLon - startLon);
    double a = pow(sin(convertDegreeToRadians(dlat / 2)), 2.0) + cos(convertDegreeToRadians(startLat)) * cos(convertDegreeToRadians(currentLat)) * pow(sin(convertDegreeToRadians(dlon / 2)), 2.0);
    double c = 2 * atan2(sqrt(a), sqrt(1 - a));
    double distance = EARTHRADIUS * c;
    return distance;
}