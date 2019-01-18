//
//  squareBall.hpp
//  week2
//
//  Created by Jesús Eloi on 18/01/2019.
//

#ifndef squareBall_hpp
#define squareBall_hpp

#include <stdio.h>
#include "ofMain.h"
#include "Ball.hpp"

class  SquareBall : public Ball{
    
public:
    SquareBall();
    
    void draw();
};


#endif /* squareBall_hpp */
