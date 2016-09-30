//
//  XenoObj.hpp
//  wk01_hwD_chesj445
//
//  Created by Jeana Chesnik on 9/18/16.
//
//

#ifndef XenoObj_hpp
#define XenoObj_hpp

#include "ofMain.h"

class rectangle {
    
public:
    
    rectangle();
    void draw();
    
    void xenoToPoint(float catchX, float catchY);
    
    ofPoint pos;
    
    float catchUpSpeed;
    
};


#endif /* XenoObj_hpp */
