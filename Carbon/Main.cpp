// Exercise 12.15 Solution: ex12_15.cpp
// Test program for CarbonFootprint and implementing classes.
#include <vector>
#include "CarbonFootprint.h"
#include "Bicycle.h"
#include "Building.h"
#include "Car.h"
using namespace std;

int main() {
   vector<CarbonFootprint*> list;

   // add elements to list
   list.push_back(new Bicycle());
   list.push_back(new Building(2500));
   list.push_back(new Car(10));

   // display carbon footprint of each object
   for (size_t i{0}; i < list.size(); ++i) {
      list[i]->getCarbonFootprint();
   }

   // release elements of list
   for (size_t i = 0; i < list.size(); ++i) {
      delete list[i];
   }
} 


/**************************************************************************
 * (C) Copyright 1992-2017 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 **************************************************************************/
