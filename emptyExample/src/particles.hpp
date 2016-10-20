//
//  particles.hpp
//  emptyExample
//
//  Created by Jeana Chesnik on 10/20/16.
//
//

#ifndef particles_hpp
#define particles_hpp

#include "ofMain.h"


class Particle{
    
public:
    
    void draw();
    void setup();
    void explosion();
    
    void restart();
    
    ofPoint pos;
    ofPoint vel;
    ofColor color;
    
    float radius;
    int someNumber;
    
};

#endif /* particles_hpp */