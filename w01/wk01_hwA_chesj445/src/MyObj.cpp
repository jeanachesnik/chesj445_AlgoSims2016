//
//  MyObj.cpp
//  wk01_hwA_chesj445
//
//  Created by Jeana Chesnik on 9/18/16.
//
//

#include "MyObj.hpp"

void MyObj::setSrc(float _x, float _y){
    
    src.set (_x, _y);
}


void MyObj::setDst (float _x, float _y){
    
    dst.set(_x, _y);
    
}


void MyObj::powUpdatePct(float _pct, float _shaper){
    
    float Powpct = powf(_pct, _shaper);
    pos = dst * Powpct + src * (1.0 -Powpct);
}

void MyObj::draw () {
    
    ofSetColor (255,255,255,200);
    ofLine (src,dst);
    
    ofSetColor (0,255,0);
//    ofRectangle(ofGetWidth()/2, of ofGetHeight()/2, 30, 30)
    ofCircle(pos,10);



//void MyObj::mousePressed (){
//    
//    if(mousePressed ==0){
//        clicked = true;
//        
//
//
////
}