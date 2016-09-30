//
//  myobj.cpp
//  w01_h01_Problem_A
//
//  Created by Jeana Chesnik on 9/1/16.
//
//

#include "myobj.hpp"

//start by calling the class
void MyObj::setSrc(float _x, float _y){
    
    src.set(_x,_y);
    
}

void MyObj:: setDst (float _x, float _y) {
    
    dst.set (_x, _y);
    
}


//Here is formulas for using power functions
// pct = powf( num,exp); myPoss  (1-pct) * a +pct = b ;


void MyObj :: powUpdatePct (float _pct, float _shaper) {
    
    float Powpct = powf (_pct, _shaper); // the power percent is a power function of the percent and shaper
    pos = dist * _Powpct + src (1.0 - _Powpct);
}

//undersscore is good practice for something that your passing


void MyObj:: draw (){
    
    ofSetColor (255, 255, 255, 200);
    ofLine (src,dist);
    
    ofSetColor (255,0,0);
    ofCircle (pos,10);
    
}