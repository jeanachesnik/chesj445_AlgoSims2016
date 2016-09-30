#pragma once

#include "ofMain.h"
#include "particles.hpp"

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
    
    vector<Particle> particles;
    int num;
    
    
};

