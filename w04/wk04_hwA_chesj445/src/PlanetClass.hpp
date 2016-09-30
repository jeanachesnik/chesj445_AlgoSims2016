//
//  PlanetClass.hpp
//  wk04_hwA_chesj445
//
//  Created by Jeana Chesnik on 9/29/16.
//
//

#ifndef PlanetClass_hpp
#define PlanetClass_hpp

#include "ofMain.h"

class PlanetClass {
public:
    void setup ();
    void update ();
    void draw ();
    
    ofParameterGroup planetGroup;
    ofParameter<float> roatateSpeed;
    ofParameter<float> posX;
    ofParameter<float> posY;
    ofParameter<int> red;
    ofParameter<int> green;
    ofParameter<int> blue;
    
    float roatation = 0.0;
    
    
};

#endif /* PlanetClass_hpp */
