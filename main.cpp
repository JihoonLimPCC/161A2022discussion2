// NOTE: This template is to be used for partner practice ONLY! You must
// use the required Algorithmic Design Document for all Assignments.
/******************************************************************************
# Author:           Jacob Davis and Luke Jihoon Lim
# Lab:              Discussion #2
# Date:             January 23, 2022
# Description:      This progam prompts for a car's mog and gas price per gallon, and calculates gas cost for 20 miles, 75miles and 500 miles
# Input:            double milePerGallon, double pricePerGallon
# Output:           double gasCost20Miles, double gasCost75Miles, double gasCost500Miles
# Sources:          None
#******************************************************************************/

#include <iostream>

using namespace std;

const int CURRENT_YEAR = 2021;

int main() {
  string name = "";
  int age = 0;
  int birthYear = 0;

  cout << "Enter your name: ";
  cin >> name;
  cout << "Enter your age you will be this year: ";
  cin >> age;

  birthYear = CURRENT_YEAR - age;

  cout << "\nHello " << name << "! You were born in " << birthYear << "!" << endl;

  return 0;
}



