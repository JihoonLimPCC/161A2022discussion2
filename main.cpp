// NOTE: This template is to be used for partner practice ONLY! You must
// use the required Algorithmic Design Document for all Assignments.
/******************************************************************************
# Author:           Jacob Davis and Jihoon Lim
# Lab:              Discussion #2
# Date:             January 23, 2022
# Description:      This progam prompts for a car's mog and gas price per gallon, and calculates gas cost for 20 miles, 75miles and 500 miles
# Input:            double milePerGallon, double pricePerGallon
# Output:           double gasCost20Miles, double gasCost75Miles, double gasCost500Miles
# Sources:          None
#******************************************************************************/

#include <iostream>

using namespace std;

int main() {
  double milePerGallon = 0.0;
  double pricePerGallon = 0.0;
  double gasCost20Miles = 0.0;
  double gasCost75Miles = 0.0;
  double gasCost500Miles = 0.0;

  cout << "Please enter your car's mpg: ";
  cin >> milePerGallon;
  cout << "Please enter gas price per gallon: ";
  cin >> pricePerGallon;

  gasCost20Miles = 20 / milePerGallon * pricePerGallon;
  gasCost75Miles = 75 / milePerGallon * pricePerGallon;
  gasCost500Miles = 500 / milePerGallon * pricePerGallon;

  cout << "\nYour gas cost for 20 miles is " << gasCost20Miles << " dollors!" << endl;
  cout << "Your gas cost for 75 miles is " << gasCost75Miles << " dollors!" << endl;
  cout << "Your gas cost for 500 miles is " << gasCost500Miles << " dollors!" << endl;

  return 0;
}



