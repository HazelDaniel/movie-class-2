#ifndef _MOVIES_H_
#define _MOVIES_H_

#include <string>
#include <vector>

#include "Movie.h"

class Movies{
private:
    std::vector<Movie> movies;

public:
    void add_movie(std::string movie_name, std::string movie_rating);
    void add_watch_count(std::string movie_name, size_t watch_count);
    void display_movies();

};




#endif
