/*
  Author: <Erin Williams>
  Course: 136
  Instructor: Ilya Korsunskiy
  Assignment: Lab 2

  This program calculates the Verhulst Formula for predicting population growth
  and outputs the growth for each year of a given number of input years.
*/

#include <iostream>
using namespace std;

int main () 
     {
     // declare and input carrying capacity, growth rate (decimal percentage), loss rate
     // (decimal percentage), initial population at year zero, and number of years to calculate.
     double carryCapacity, growthRate, lossRate, population;
     int year;

     cin >> carryCapacity >> growthRate >> lossRate >> population >> year; 
     
     // check for negative values and end program if any are found
     if (carryCapacity<0 || growthRate<0 || lossRate<0 || population<0 || year<0)
     {
          return 0;
     }
     else
     {
          // calculate Verhulst formula for population growth and output results for each year as a table.
          for (int i = 0; i < year; i++) 
          {
                    population = ((1 + growthRate - lossRate) * population) - (growthRate * (population * population) / carryCapacity);
                    cout << i+1 << "\t" << population << endl;
          }
     }
     return 0;
} 
