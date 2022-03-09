///////////////////////////////////////////////////////////////////////////////
/// University of Hawaii, College of Engineering
/// @brief ee205_lab08c_all_creatures_great_and_small - EE 205 - Spr 2022
///
/// @file main.cpp
/// @version 1.0
///
/// @author Joshua Brewer <brewerj3@hawaii.edu>
/// @date 08_Mar_2022
///////////////////////////////////////////////////////////////////////////////

#include "animal.h"

int main() {
    Animal myFirstAnimal = Animal( "Felis Catus" );
    myFirstAnimal.setGender( MALE );
    myFirstAnimal.setWeight( 19 );
    myFirstAnimal.printInfo();

    Animal mySecondAnimal = Animal( "Felis Catus", FEMALE );
    mySecondAnimal.printInfo();
    mySecondAnimal.setWeight( 12 );
    mySecondAnimal.printInfo();

    Animal myThirdAnimal = Animal( "Felis Catus", UNKNOWN_GENDER );
    myThirdAnimal.printInfo();
    myThirdAnimal.setWeight( -2 );
    myThirdAnimal.printInfo();
    myThirdAnimal.setWeight( 22 );
    myThirdAnimal.setGender( MALE );
    myThirdAnimal.printInfo();

    Animal myFourthAnimal = Animal( "Felis Catus", UNKNOWN_GENDER, 13 );
    myFourthAnimal.printInfo();

    return 0;
}