//
//  XenoObj.cpp
//  wk01_hwD_chesj445
//
//  Created by Jeana Chesnik on 9/18/16.
//
//

#include "XenoObj.hpp"


rectangle:: rectangle () {
    catchUpSpeed = 0.09;
    
}


void rectangle::draw() {
    
    ofFill ();
    ofSetRectMode(OF_RECTMODE_CENTER);
    ofSetColor (255,255,0);
    ofRect(pos.x,pos.y,80,80);
    
}

void rectangle::xenoToPoint (float catchX, float catchY){

    pos.x = catchUpSpeed * catchX + (1-catchUpSpeed) *pos.x;
    pos.y = catchUpSpeed * catchY + (1-catchUpSpeed) *pos.y;
}

