/*
  Author: <Erin Williams>
  Course: 136
  Instructor: Ilya Korsunskiy
  Assignment: Lab 2

  This program calculates the Verhulst Formula for predicting population growth
  and outputs the growth for each year of a given number of input years.

  Based on carryCapacity = 100, lossRate = 0.2, population = 10, year = 20,
  the population can be observed  to have oscillating behavior (rounded to the nearest
  integer) between growthRate = 2.0-2.09 (although the years that the oscillating
  behavior starts appearing varies between year 10 and year 18). Between a
  growthRate = 2.1-2.2, chaotic behavior is observed, but then the population
  oscillates again between growthRate = 2.3-2.6. Finally, for a 
  growthRate >= 2.7, only chaotic population behavior is observed.
*/

#include <iostream>
using namespace std;

int main () 
     {
     // Declare and input carrying capacity, growth rate (decimal percentage), loss rate
     // (decimal percentage), initial population at year zero, and number of years to calculate.
     double carryCapacity, growthRate, lossRate, population;
     int year;

     cin >> carryCapacity >> growthRate >> lossRate >> population >> year; 
     
     // Check for negative values and end program if any are found
     if (carryCapacity<0 || growthRate<0 || lossRate<0 || population<0 || year<0)
     {
          return 0;
     }
     else
     {
          // Calculate Verhulst formula for population growth and output results for each year as a table.
          for (int i = 0; i < year; i++) 
          {
                    population = ((1 + growthRate - lossRate) * population) - (growthRate * (population * population) / carryCapacity);
                    cout << i+1 << "\t" << population << endl;
          }
     }
     return 0;
} 
