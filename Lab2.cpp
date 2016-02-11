#include <iostream>
using namespace std;

int main () {
     
     int year;
     double carryCapacity, growthRate, lossRate, population;

     cout << "What is the number of years that you want to calculate population for? ";
     cin >> year;

     cout << "What is the growth rate of the population? ";
     cin >> growthRate;

     cout << "What is the loss rate of the population? ";
     cin >> lossRate;

     cout << "What is the carrying capacity of the population? ";
     cin >> carryCapacity;

     cout << "What is the initial population at year zero? ";
     cin >> population;

     for (int i = 0; i < year; i++) {
          population = ((1 + growthRate - lossRate) * population) - (growthRate * (population * population) / carryCapacity);
          cout << i+1 << "\t" << population;
     }
} 
