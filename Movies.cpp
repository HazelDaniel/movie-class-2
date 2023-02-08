#include <iostream>
#include "Movies.h"

using std::cin;
using std::cout;
using std::endl;

void Movies::add_movie(std::string movie_name, std::string movie_rating){

    Movie new_movie {movie_name, movie_rating};

    movies.push_back(new_movie);
}

void Movies::add_watch_count(std::string movie_name, size_t watch_count){
    bool found_movie {false};
    std::cout << std::boolalpha;
    for (auto &movie: movies){

        if(movie.get_name() == movie_name){
            movie.watched+=watch_count;
            found_movie = true;
            break;
        }
    }
    std::cout << "found movie " << "(" << movie_name << "): " << found_movie << std::endl;

    if(!found_movie){
        std::cout << "cannot increase movie watches because it doesn't exist (or at least not yet)" << std::endl;
    }
}

void Movies::display_movies(){

    for(auto const &movie: movies){
        movie.display();
    }
}
