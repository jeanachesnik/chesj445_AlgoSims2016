//
//  PlanetClass.cpp
//  wk04_hwA_chesj445
//
//  Created by Jeana Chesnik on 9/29/16.
//
//

#include "PlanetClass.hpp"

void PlanetClass :: setup (){
    planetGroup.add(roatateSpeed.set("speed", 1.0,0.0,5.0));
    planetGroup.add(posX.set("X", 0, 0, 600));
    planetGroup.add(posY.set("Y",0,0,600));
    
//    planetGroup.add(red.set("red",255,0,255));
//    planetGroup.add(green.set("green",255,0,255));
//    planetGroup.add(blue.set("blue",255,0,255));
    
    
}

void PlanetClass::update(){
    roatation++;
    
    
    
}


void PlanetClass::draw(){
    ofNoFill();
    
    //beg of inner ring
    ofNoFill();
    ofSetColor(105,217,255);
    ofRotate(roatation * roatateSpeed);
    ofCircle(posX, posY, 145);
    
    ofSetColor(105,67,255);
    ofRotate(roatation * roatateSpeed);
    ofCircle(posX, posY, 150);
    
    ofSetColor(105,67,255);
    ofRotate(roatation * roatateSpeed);
    ofCircle(posX, posY, 155);
    
    ofSetColor(105,67,255);
    ofRotate(roatation * roatateSpeed);
    ofCircle(posX, posY, 160);
    
    ofNoFill();
    ofSetColor(105,217,255);
    ofRotate(roatation * roatateSpeed);
    ofCircle(posX, posY, 165);
    
    //end of inner ring
    
    
    
    //beg of outter ring
    ofNoFill();
    ofSetColor(255,201,156);
    ofRotate(roatation * roatateSpeed);
    ofCircle(posX, posY, 250);
    
    
    ofNoFill();
    ofSetColor(255,96,156);
    ofRotate(roatation * roatateSpeed);
    ofCircle(posX, posY, 255);
    
    
    ofNoFill();
    ofSetColor(255,201,156);
    ofRotate(roatation * roatateSpeed);
    ofCircle(posX, posY, 260);
    
    
    ofNoFill();
    ofSetColor(255,96,156);
    ofRotate(roatation * roatateSpeed);
    ofCircle(posX, posY, 265);
    
    
    ofNoFill();
    ofSetColor(255,201,156);
    ofRotate(roatation * roatateSpeed);
    ofCircle(posX, posY, 270);
    
    //end of outter ring
    
    //Sphere
    
    ofSetColor(255,67,255);
    ofRotate(roatation * roatateSpeed);
//    ofCircle(posX, posY, 30);
    ofSphere(posX, posY, 100);
    
    
}
