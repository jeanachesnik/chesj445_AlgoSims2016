#include "Particle.hpp"

Particle::Particle() {
    pos.x = ofGetWindowWidth()*0.5;
    pos.y = ofGetWindowHeight()*0.5;
    pos.z = 0.0;
    
    vel.set(0,0,0);
    acc.set(0,0,0);
    
    damp = 0.95; // de resistance!!!
    radius = 5;
}

void Particle::setup(){
    image.loadImage("car.png");
}

void Particle::setInit(ofPoint _pos, ofPoint _vel){
    pos = _pos;
    vel = _vel;
    acc.set(0,0,0);
}

ofPoint Particle::getPosition(){
    return pos;
}

void Particle::addForce(ofPoint _force){
    acc += _force;
}


void Particle::seek( ofPoint dest ) {
    float maxSpeed = 10.0;
    float maxForce = 0.4;
    
    float slowDownRadius = 200.0;
    
    ofPoint desired = dest - pos;
    
    if( desired.length() < slowDownRadius ){
        float newMag = ofMap( desired.length(), 0, slowDownRadius, 0, maxSpeed);
        
        desired.normalize();
        desired *= newMag;
    } else {
        desired.normalize();
        desired *= maxSpeed;
    }
    
    ofPoint steer = desired - vel;
    steer.limit( maxForce );
    
    addForce( steer );
}

void Particle::update() {
    
    vel += acc;
    vel *= damp;
    pos += vel;
    acc *= 0.0;
    
    
    if( pos.x < 0.0+radius || pos.x > ofGetWidth()-radius ){
        pos.x -= vel.x; // Bounced back! think of this as an undo;
        vel.x *= -1.0;
    }
    
    if( pos.y < 0.0+radius || pos.y > ofGetHeight()-radius ){
        pos.y -= vel.y; // Bounced back! think of this as an undo;
        vel.y *= -1.0;
    }
}


void Particle::draw() {
    //    ofCircle(pos, radius);
    
    //of
    
//    ofSetRectMode(OF_RECTOMODE_CENTER);
////    image.draw(20,20);
//    ofPushMatrix();
//    ofTranslate(pos);
//    
//    float rotAmt = atan2( vel.y, vel.x );
//    ofRotate( ofRadToDeg(rotAmt) + 90 );
////    image.draw (5,5);
//    
    
    ofSetRectMode( OF_RECTMODE_CENTER );
    
    ofPushMatrix();
    ofTranslate( pos );
    
    float rotAmt = atan2( vel.y, vel.x );
    ofRotate( ofRadToDeg(rotAmt) + 90 );
//    image.draw (5,5,40,40);
//    ofRect("car.png");
    ofRect( 0,0, 20, 40);
    ofColor(0,0,255);
    ofRect(0,0,40,40);
    
    ofPopMatrix();
}