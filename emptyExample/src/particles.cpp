//
//  particles.cpp
//  emptyExample
//
//  Created by Jeana Chesnik on 10/20/16.
//
//

#include "particles.hpp"



void Particle::setup(){
    
//    pos.x = (ofRandom(ofGetHeight()));
//    pos.y = (ofRandom(ofGetHeight())) ;
    
    radius = 3.5;
    
    vel.x = ofRandom(-1,1);
    vel.y = ofRandom(0, 2);
    
    color = ofColor(ofRandom(255), ofRandom(255), ofRandom(255));
    
    someNumber = ofRandom(1,400);
}

void Particle::explosion(){
    
    pos = pos + vel;
    
}

void Particle::draw(){
    
    ofSetColor(255,67,255);
    ofEllipse(pos.x, pos.y, pos.z, radius, radius);

    ofSetColor(255,67,255);
    ofEllipse(pos.x, pos.y, pos.z, radius, radius);

}

void Particle::restart(){
    
    pos.x = ofGetWidth()/2;
    pos.y = ofGetHeight()/2;
}
