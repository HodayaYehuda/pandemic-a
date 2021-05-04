#include <iostream>
#include <string>
#include "Board.hpp"
#include <map>
#include <iostream>
#include <fstream>
#include "doctest.h"
#include "City.hpp"
#include "Color.hpp"
#include "Player.hpp"
#include "OperationsExpert.hpp"
#include "Virologist.hpp"
#include "Medic.hpp"
#include "Dispatcher.hpp"

using namespace pandemic;

TEST_CASE("Board"){

cout << boolalpha;
	Board board;
	
     OperationsExpert builder {board, City::Atlanta}; 
	 
    CHECK_NOTHROW(board.remove_cures());
	CHECK_NOTHROW(builder.fly_charter(City::Algiers));
    CHECK_NOTHROW(builder.fly_charter(City::Bangkok));
	CHECK_NOTHROW(builder.fly_charter(City::Cairo));
	CHECK_NOTHROW(builder.remove_shuttle(City::Algiers));
	CHECK_NOTHROW(builder.remove_shuttle(City::Bangkok));
	CHECK_NOTHROW(builder.remove_shuttle(City::Cairo));

 	Virologist builder1 {board, City::Atlanta}; 
 	
	CHECK_NOTHROW(builder1.fly_charter(City::Algiers));
    CHECK_NOTHROW(builder1.fly_charter(City::Bangkok));
	CHECK_NOTHROW(builder1.fly_charter(City::Cairo));
	CHECK_NOTHROW(builder1.remove_shuttle(City::Algiers));
	CHECK_NOTHROW(builder1.remove_shuttle(City::Bangkok));
	CHECK_NOTHROW(builder1.remove_shuttle(City::Cairo));


	Medic builder2 {board, City::Atlanta}; 
 	
	CHECK_NOTHROW(builder2.fly_charter(City::Algiers));
    CHECK_NOTHROW(builder2.fly_charter(City::Bangkok));
	CHECK_NOTHROW(builder2.fly_charter(City::Cairo));
	CHECK_NOTHROW(builder2.remove_shuttle(City::Algiers));
	CHECK_NOTHROW(builder2.remove_shuttle(City::Bangkok));
	CHECK_NOTHROW(builder2.remove_shuttle(City::Cairo));

	Dispatcher builder3 {board, City::Atlanta}; 
 	
	CHECK_NOTHROW(builder3.fly_charter(City::Algiers));
    CHECK_NOTHROW(builder3.fly_charter(City::Bangkok));
	CHECK_NOTHROW(builder3.fly_charter(City::Cairo));
	CHECK_NOTHROW(builder3.remove_shuttle(City::Algiers));
	CHECK_NOTHROW(builder3.remove_shuttle(City::Bangkok));
	CHECK_NOTHROW(builder3.remove_shuttle(City::Cairo));

}
