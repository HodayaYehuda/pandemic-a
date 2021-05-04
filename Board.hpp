#pragma once
#include <iostream>
#include <string>
#include <map>
#include"City.hpp"
namespace pandemic {

    class Board{
    public:
    Board();
    Board(City &c);
        
    int&  operator [] (City c);
    friend std::ostream &operator << (std::ostream&, const Board&);
    bool  is_clean();
    void  remove_cures();
    };
}