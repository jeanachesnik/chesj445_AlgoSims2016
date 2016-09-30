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
    
    ofSetColor (224,69,235);
//    ofRectangle(ofGetWidth()/2, of ofGetHeight()/2, 30, 30)
    ofCircle(pos,10);


//void MyObj::keyPressed(int key){
//        
//            if (key == '+'){
//                 obj.setSrc(ofGetWidth() + 50, ofGetHeight() + 50); // do something
//            } else if (key == '-'){
//                obj.setSrc(ofGetWidth() -50, ofGetHeight() -50);; // do something else
//            }
//        
//        This was a test run to see if I could use the keyPressed first, then I was able to follow the same formula for mousePressed
//        
//    }
    
    
}