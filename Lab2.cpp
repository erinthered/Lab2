#include <iostream>
using namespace std;

int main () {
     
     double carryCapacity, growthRate, lossRate, population;
     int year;

     cin >> carryCapacity >> growthRate >> lossRate >> population >> year; 

     for (int i = 0; i < year; i++) {
          population = ((1 + growthRate - lossRate) * population) - (growthRate * (population * population) / carryCapacity);
          cout << i+1 << "\t" << population << endl;
     }
     return 0;
} 
