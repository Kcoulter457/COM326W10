// Exercise 12.15 Solution: Car.h
// Calculate the carbon footprint of a car.
#ifndef CAR_H
#define CAR_H

#include <iostream>
#include "CarbonFootprint.h"

class Car : public CarbonFootprint {
public:
   Car(double g) : gallons(g) { } 

   // one gallon of gas yields 20 pounds of CO2
   // http://www.enviroduck.com/carbon_footprint_calculations.php
   virtual void getCarbonFootprint() {
      std::cout << "Car that has used " << gallons << " gallons of gas: "
         << gallons * 20 << std::endl;
   } 
private:
   double gallons;
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
