///////////////////////////////////////////////////////////////////////////////
/// University of Hawaii, College of Engineering
/// @brief ee205_lab08c_all_creatures_great_and_small - EE 205 - Spr 2022
///
/// @file animal.cpp
/// @version 1.0
///
/// @author Joshua Brewer <brewerj3@hawaii.edu>
/// @date 08_Mar_2022
///////////////////////////////////////////////////////////////////////////////

#include <iostream>

#include "animal.h"

const std::string Animal::kingdom = "Animalia";

Animal::Animal(const std::string &newSpecies) : species(newSpecies){
    Animal::species = newSpecies;
}

Animal::Animal(const std::string &newSpecies, Gender newGender) : species(newSpecies), gender(newGender) {
    Animal::species = newSpecies;
    Animal::gender = newGender;
}

Animal::Animal(const std::string &newSpecies, Gender newGender, float newWeight) : species(newSpecies), gender(newGender), weight(newWeight) {
    Animal::species = newSpecies;
    Animal::gender = newGender;
    Animal::weight = newWeight;
}

Animal::Animal(const std::string &newSpecies, float newWeight) : species(newSpecies), weight(newWeight) {
    Animal::species = newSpecies;
    Animal::weight = newWeight;
}

const std::string &Animal::getKingdom() {
    return kingdom;
}

const std::string &Animal::getSpecies() {
    return species;
}

Gender Animal::getGender(){
    return gender;
}

float Animal::getWeight() {
    return weight;
}

void Animal::setGender(Gender gender) {
    if( isValidGender(gender) ) {
        Animal::gender = gender;
    }
}

void Animal::setWeight(float weight) {
    if( isValidWeight(weight) ) {
        Animal::weight = weight;
        return;
    }
    std::cout << "Weight cannot be less than 0. Try again." << std::endl;
}

bool Animal::isValidWeight(float weightToCheck) {
    if (weightToCheck == UNKNOWN_WEIGHT) {
        return true;
    }
    if (weightToCheck <= 0) {
        return false;
    } else
        return true;
}

bool Animal::isValidGender( enum Gender newGender) {
    if (newGender == UNKNOWN_GENDER) {
        return true;
    } else
        return false;
}

void Animal::printInfo() {
    std::cout << "Animal Fields" << std::endl;
    std::cout << "  Kingdom = [" << getKingdom() << "]" << std::endl;
    std::cout << "  Species = [" << getSpecies() << "]" << std::endl;
    std::cout << "  Weight = [" << getWeight() << "]" << std::endl;
    std::cout << "  Gender = [" << getGender() << "]" << std::endl;
}