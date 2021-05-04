#pragma once
#include <iostream>
#include <string>
#include <map>
#include"Player.hpp"
#include"City.hpp"

namespace pandemic {

class OperationsExpert: public Player{
    public:
     OperationsExpert(Board& b, City c);
     OperationsExpert();
    
};
}
