// Exercise 12.15 Solution: Building.h
// Calculate the carbon footprint of a building.
#ifndef BUILDING_H
#define BUILDING_H

#include <iostream>
#include "CarbonFootprint.h"

class Building : public CarbonFootprint {
public:
   Building(int sf) : squareFeet(sf) { } 

   // Simplified formula: Multiply the square footage by 50
   // for the wood frame, by 20 for the basement,
   // by 47 for the concrete, and 17 for the steel
   // http://www.greenerpath.org/Building_Carbon_Footprint.html
   virtual void getCarbonFootprint() {
      std::cout << "Building with " << squareFeet << " square feet: "
         << squareFeet * (50 + 20 + 47 + 17) << std::endl;
   } 
private:
   int squareFeet; // square footage of building
}; 

#endif


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
