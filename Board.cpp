#include <iostream>
#include <string>
#include <map>
#include"City.hpp"
#include"Board.hpp"
using namespace std;
namespace pandemic {

static map<pandemic::City, int> myMap;
int a = 1;
    
     Board::Board(){
        
    };
    
    Board::Board(City &c){

    };
        
    int&  Board::operator [] ( City c){
        //myMap.at(c) = 1;
       
        return a;
    }
   ostream& operator << (ostream &os, const Board &u){
       return os;

   }
    bool Board::is_clean(){
        return true;
    }
    void  Board::remove_cures(){
        
    }
    };
