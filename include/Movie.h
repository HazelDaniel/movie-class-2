#ifndef _MOVIE_H_
#define _MOVIE_H_

#include <iostream>
#include <string>

class Movie {
private:
    std::string name;
    std::string rating;
public:
    unsigned int watched;
    size_t current_movie_count;

    Movie(std::string name, std::string rating)//default constructor
        :name {""}, rating {"_"}, watched {0}, current_movie_count {Movie::get_movie_count()}
        {
        this->name = name;
        this->rating = rating;
        Movie::increment_movie_count();
        this->current_movie_count = Movie::get_movie_count();
    }
    Movie(const Movie &source)
    : name {source.name}, rating {source.rating}, watched {source.watched},current_movie_count {source.current_movie_count}
    {
    }

    static size_t movie_count;
    static size_t get_movie_count();
    static void increment_movie_count();

    std::string get_name() const;
    void display() const;
    void set_name(std::string name);
};




#endif
