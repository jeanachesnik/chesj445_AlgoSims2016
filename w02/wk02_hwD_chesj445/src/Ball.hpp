//
//  Ball.hpp
//  wk02_hwD_chesj445
//
//  Created by Jeana Chesnik on 9/18/16.
//
//

#ifndef _BALL // if this class hasn't been defined, the program can define it
#define _BALL // by using this if statement you prevent the class to be called more than once which would confuse the compiler
#include "ofMain.h"


class Ball {
public: // place public functions or variables declarations here
    
    void setup();
    void update();
    void draw();
    
    // variables
    float x;
    float y;
    float speedY;
    float speedX;
    int dim;
    
    ofColor color;
    
    Ball();
    
private:
};

#endif /* Ball_hpp */
