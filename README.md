# Find-the-closest-and-farthest-location-from-the-start
This C++ project is based on uci ics ICS45C project #1(stop here and do not look at any part of the project if you are enrolled in this course). It aims to find out
the closest and the farthest location from the strating place. It takes at least three inputs, and the inputs has to be in their correct format.

The inputs:

The first line of the input describes a starting location, from which you'll determine distances to other locations.

The second line of the input specifies a positive number of target locations to which you'll determine distances from the starting location. Note that there is no
limit on the number of locations — it could be 1, 10, 100, or even one billion.

Subsequent lines will describe each target location, with one target location specified on each line. You can safely assume that the number of target locations
described in the input will match the number specified on the second line.
Locations are specified as a latitude, followed by a space, followed by a longitude, followed by a space, followed by the name of the location. The name of the
location is all of the text on the line that follows the space after the longitude.
Latitudes are specified as a non-negative decimal number of degrees between 0 and 90, followed immediately by a slash, followed immediately by a direction (N for
north or S for south). Note that the latitudes 0/N and 0/S are equivalent.
Longitudes are specified as a non-negative decimal number of degrees between 0 and 180, followed immediately by a slash, followed immediately by a direction (W for
west or E for east). Note that the longitudes 0/W and 0/E are equivalent, as are 180/W and 180/E.

The outputs:

The words Start Location, followed by a colon and a space, followed by the start location's latitude, followed by a space, folloewd by the start location's 
longitude, followed by a space, followed by the name of the start location in parentheses.

The words Closest Location, followed by a colon and a space, followed by the closest location's latitude, followed by a space, followed by the closest location's
longitude, followed by a space, followed by the name of the closest location in parentheses, followed by a space, followed by the distance from the start location
to the closest location in miles (surrounded by parentheses).

The words Farthest Location, followed by a colon and space, followed by a description of the farthest location in the same format as the closest one.

(source from https://www.ics.uci.edu/~thornton/ics45c/ProjectGuide/)

A complete example:
33.9425/N 118.4081/W Los Angeles International Airport
3
20.8987/N 156.4305/W Kahului Airport
47.4647/N 8.5492/E Zurich Airport
23.4356/S 46.4731/W Sao Paolo-Guarulhos International Airport

------------------------------------------------------------------
Start Location: 33.9425/N 118.408/W (Los Angeles International Airport)
Closest Location: 20.8987/N 156.43/W (Kahului Airport) (2483.3 miles)
Farthest Location: 23.4356/S 46.4731/W (Sao Paolo-Guarulhos International Airport) (6164.9 miles)
