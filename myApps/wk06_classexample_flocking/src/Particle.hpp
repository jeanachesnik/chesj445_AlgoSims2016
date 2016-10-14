//
//  Particle.hpp
//  wk06_classexample_flocking
//
//  Created by Jeana Chesnik on 10/6/16.
//
//

#ifndef Particle_hpp
#define Particle_hpp

#include "ofMain.h"

class Particle {
    
   
public:
    Particle ();
    
    void init ();
    void draw ();
    
    void bounding ();
    
    void update (vector<Particle> & particles);
    
    ofPoint cohesion (vector<Particle> & particles);
    ofPoint separation (vector<Particle> & particles);
    ofPoint alignment (vector<Particle> & particles);
    
    ofPoint pos;
    ofPoint vel;
    int radius;

    
    
};

#endif /* Particle_hpp */
