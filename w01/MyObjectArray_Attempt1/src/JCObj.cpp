//
//  JCObj.cpp
//  MyObjectArray_Attempt1
//
//  Created by Jeana Chesnik on 9/15/16.
//
//

#include "JCObj.hpp"

//Am I creating all of these so that once, an object is created that has the title of JCObj, then it will initialize specifically like this? Am I setting the source and the distance? I've acknowledge them in the hpp, but now this is where it initializes and then feeds into the main files above it?

void JCObj::setSrc(float _x, float _y){
    
    src.set(_x, _y);
    
}

void MyObj::setDst(float _x, float _y){
    
    dst.set(_x, _y);
    
}


//reusing this formula that was used in the code, but still not sure if I understand how it's been created.
void MyObj::powUpdatePct(float _pct, float _shaper){
    
    float Powpct = powf(_pct, _shaper);
    pos = dst * Powpct + src * (1.0 - Powpct);
    
}

void MyObj::draw(){
    
    ofSetColor(255, 255, 255, 200);
    ofLine(src, dst);
    
    ofSetColor(255,0, 0);
    ofCircle(pos,10);
    
}