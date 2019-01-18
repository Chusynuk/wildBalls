//
//  squareBall.cpp
//  week2
//
//  Created by Jesús Eloi on 18/01/2019.
//

#include "squareBall.hpp"


SquareBall::SquareBall(){}

void SquareBall::draw(){
    
    ofSetColor(color);
    
    float sqX = x - radius;
    float sqY = y - radius;
    
    ofDrawRectangle(sqX, sqY, radius * 2, radius * 2);
}
