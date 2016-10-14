//
//  Particle.cpp
//  wk06_classexample_flocking
//
//  Created by Jeana Chesnik on 10/6/16.
//
//

#include "Particle.hpp"











void Particle: bounding (){
    
    if (pos.x > ofGetWidth()/2 || pos. x < -ofGetWidth()/2 {
        vel = -vel;
    }
     
    if (pos.y > ofGetWidth()/2 || pos. x < -ofGetWidth()/2 {
        vel = -vel;
    }
}


void Particle :: draw (){
    ofCircle (pos.x, pos.y, radius);
    
}


ofPoint Particle :: cohesion (vector<Particle> & particles){
            
            
    ofPoint centerMass;
    for (int i=0; i<particles.size(); i++) {
        if(&particles[i] == this) {
            continue;
            
                }
        
        centerMass += particles [i].pos;
        
        }
    
    centerMass = centerMass / (particles.size() - 1);
    
    ofPoint cohesionVel = (centerMass - pos)/100;
    
    return cohesionVel;
    
        }