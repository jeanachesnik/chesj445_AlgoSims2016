//
//  myobj.hpp
//  w01_h01_Problem_A
//
//  Created by Jeana Chesnik on 9/1/16.
//
//

#pragma once // just do this don't ask q for now


#include "ofMain.h"
//when you create class you have diff attributes of the class that
//can be accessed..

class MyObj {
    
public
    
    void setSrc(float _x, float _y);
    void setDist (float _x, float _y);
    
    void updatePct (float _pct);
    
    void powUpdatePct (float _pct, float _shaper);
    //power functions make things move slower and faster
    // view hw to review and help with speed of items..
    //going to create two diff functions to enable speed of our object
    // first a percentage function to take in number
    // second will be a power function to take a number and a shaper (examples of functions)
    
    void draw ();
    

private
    
    ofPoint src; dst;
    ofPoint pos;
    
    
//ofPoint is a vector...
    
    
};
