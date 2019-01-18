//
//  Ball.cpp
//  week2
//
//  Created by Jesús Eloi on 18/01/2019.
//

#include "Ball.hpp"


Ball::Ball(){
    
    radius = ofRandom( 10, 50 );
    
    
    float red = ofRandom(0, 255);
    float green = ofRandom(0, 255);
    float blue = ofRandom(0, 255);
    
    color = ofColor(red, green, blue);
    
    
    x = ofRandom( radius, ofGetWidth() - radius );
    y = ofRandom( radius, ofGetHeight() - radius );
    
    //random X and Y speed directions within -10 and 10
    dirX = ofRandom(-10, 10);
    dirY = ofRandom(-10, 10 );
}


void Ball::update(){
    
    x += dirX; //move along X with the amount of dirX
    y += dirY;  //move along Y with the amount of dirY
    
    // check left
    if (x <= radius) {
        x = radius;
        dirX = -dirX;
    }
    if (y <= radius) {
        y = radius;
        dirY = -dirY;
    }
    
    else if ( y >= ofGetHeight() - radius ){
        y = ofGetHeight() - radius;
        dirY = - dirY;
    }
}


void Ball::draw(){
    
    ofSetColor(color);
    ofDrawCircle(x, y, radius);
}
