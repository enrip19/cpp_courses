/******************************************************************
 * Section 13 Challenge
 * Movie.cpp
 *
 * Models a Movie with the following atttributes
 *
 * std::string name - the name of the movie
 * std::string rating - G, PG, PG-13, R
 * int watched - the number of times you've watched the movie
 * ***************************************************************/
#include "Movie.h"

#include <iostream>


// Implemention of the construcor

Movie::Movie(std::string name, std::string rating, int watched)
    : name(name), rating(rating), watched(watched) {
  // std::cout << name << "movie object has been created" << std::endl;
}

// Implemention of the copy constructor
Movie::Movie(const Movie &source)
    : Movie{source.name, source.rating, source.watched} {
  // std::cout << name << "movie object has been copied" << std::endl;
}

// Implementation of the destructor
Movie::~Movie() {
  // std::cout << name << "movie object has been destroyed" << std::endl;
}

// Implementation of the display method
// should just insert the movie attributes to cout

void Movie::display() const {
  std::cout << name << ", " << rating << ", " << watched << std::endl;
}
