#include <iostream>
#include <string>
#include <map>
#include"Player.hpp"
#include"City.hpp"
#include"Board.hpp"
#include"OperationsExpert.hpp"


namespace pandemic {

     OperationsExpert::OperationsExpert(Board& b, City c):Player(b,c){  

     }
     OperationsExpert::OperationsExpert():Player(){  
         
     }
    
};

