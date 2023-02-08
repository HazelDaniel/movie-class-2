#include <iostream>
#include "Movie.h"


size_t Movie::movie_count {0};
size_t Movie::get_movie_count(){
    return movie_count;
}
void Movie::increment_movie_count(){
    movie_count++;
}
std::string Movie::get_name() const{
    return name;
}
void Movie::display() const{
    std::cout << "\n Movie " << this->current_movie_count << " :" << "\n\t name: " << name << "\n\t rating: " << rating << "\n\t watched: " << watched << " times" << std::endl;
}
void Movie::set_name(std::string name){
    this->name = name;
}
