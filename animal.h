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

#include <string>

enum Gender{ UNKNOWN_GENDER, MALE, FEMALE };

const float UNKNOWN_WEIGHT = -1;

class Animal {
public:
    Animal(const std::string &Species);
    Animal(const std::string &species, Gender gender, float weight);
    Animal(const std::string &species, Gender gender);
    Animal(const std::string &species, float weight);

    const std::string &getKingdom();
    const std::string &getSpecies();
    Gender getGender();
    float getWeight();

    void setGender(Gender gender);
    void setWeight(float weight);

    void printInfo();

protected:
    static const std::string kingdom; //All Animals are animals
    std::string species;
    enum Gender gender = UNKNOWN_GENDER;
    float weight = UNKNOWN_WEIGHT;
    bool isValidWeight( float weightToCheck ) ;
    bool isValidGender( enum Gender newGender ) ;
};
