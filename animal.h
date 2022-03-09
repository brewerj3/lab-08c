///////////////////////////////////////////////////////////////////////////////
/// University of Hawaii, College of Engineering
/// @brief ee205_lab08c_all_creatures_great_and_small - EE 205 - Spr 2022
///
/// @file animal.h
/// @version 1.0
///
/// @author Joshua Brewer <brewerj3@hawaii.edu>
/// @date 08_Mar_2022
///////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>

class Animal {
public:
    static const std::string kingdom; //All Animals are animals
    std::string species;
    enum Gender{UNKOWN_GENDER, MALE, FEMALE};
    float weight = -1;
};
