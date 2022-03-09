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

enum Gender{UNKNOWN_GENDER, MALE, FEMALE};

class Animal {
protected:
    static const std::string kingdom; //All Animals are animals
    std::string species;
    enum Gender gender;
    float weight = -1;

public:
    explicit Animal( const std::string& speciesName ) {
        species = speciesName;
        gender = UNKNOWN_GENDER;
        weight = -1;
    }
    Animal( const std::string& speciesName, const enum Gender genderOfAnimal ) {
        species = speciesName;
        gender = genderOfAnimal;
        weight = -1;
    }
    Animal( const std::string& speciesName, const enum Gender genderOfAnimal, const float weightOfAnimal ) {
        if( isValidWeight(weightOfAnimal)  ) {
            species = speciesName;
            gender = genderOfAnimal;
            weight = weightOfAnimal;
        }
    }
    Animal( const std::string& speciesName, const float weightOfAnimal ) {
        if( isValidWeight(weightOfAnimal) ) {
            species = speciesName;
            gender = UNKNOWN_GENDER;
            weight = weightOfAnimal;
        }
    }
    static std::string getKingdom() {
        return "Animalia";
    }
    std::string getSpecies() {
        return species;
    }
    enum Gender getGender() {
        return gender;
    }
    void setGender( enum Gender newGender ) {
        if( isValidGender(gender) ) {
            gender = newGender;
        }
    }
    void setWeight( float weightToSet ) {
        if( isValidWeight(weightToSet) ) {
            weight = weightToSet;
            return;
        }
        std::cout << "Weight cannot be less than 0. Try again." << std::endl;
    }
    void printInfo( ) {
        std::cout << "Animal Fields" << std::endl;
        std::cout << "  Kingdom = [" << getKingdom() << "]" << std::endl;
        std::cout << "  Species = [" << species << "]" << std::endl;
        std::cout << "  Weight = [" << weight << "]" << std::endl;
        std::cout << "  Gender = [" << gender << "]"<< std::endl;
    };
    static bool isValidGender( enum Gender newGender ) {
        if(newGender == UNKNOWN_GENDER) {
            return true;
        }
        else
            return false;
    }
    static bool isValidWeight( float weightToCheck ) {
        if(weightToCheck <= 0 ){
            return false;
        }
        else
            return true;
    }
};
