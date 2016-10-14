#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    
    ofSetFrameRate(60); //setting up how quickly the update and draw will be
    
    
    pos0 = ofPoint (512,300); //setting up the center of the pendelum
    pos = ofPoint (600,200);    // setting up the ball's position
    velocity = ofPoint (100,0); // setting up the speed of the ball/velocity
}

//--------------------------------------------------------------
void ofApp::update(){
    
    //now I need to draw how the image is going to update itself
    
    float dt = 1.0/60.0; // this is time step (ask question)?
    float mass = 0.1;  // this is how large the pendelum ball is going to be
    float rubberLen = 200.0; // this is how long the pendelum length will be or in the example it says "segment's length"
    float k = 0.5; //segment's stiffness... ask about this.. why do we need stiffness and gravity?
    ofPoint g (0.0,9.8); //gravity force...ask about this as well
    
    ofPoint delta = pos-pos0; // ofPoint delta equals balls position minus the pendelum position
    float len = delta.length(); //float len equals the Vectori's length
    float hookeValue = k * (len-rubberLen);// I don't understand what this one means, but going forward with the example.
    delta.normalize(); // Normalize the vector's length.. what's considered normal?
    ofPoint hookeForce = delta * (-hookeValue);
    
    //now we're going to update velocity and position
    ofPoint force = hookeForce + g; // the force of the openFrameworks point/ofPoint/pos0/center of the pendelum is equal to hookeforce plus gravity
    ofPoint a = force/mass; //ofPoint a equals force divided by mass, Newton's law
    velocity += a * dt; //Euler method
    pos+= velocity *dt; //Euler method
    
    
    //so now i've decalred how this drawing will update, but next we need to tell oF what to draw.

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    //going to give it a white background
    ofBackground(255, 255, 255);
    
    //going to draw rubber as a blue line
    ofSetColor(0, 0, 255);
    ofLine(pos0.x, pos0.y, pos.x, pos.y); //drawing the line
    
    //draw a red ball as a red circle
    ofSetColor (255,0,0); // calling the color
    ofFill(); // telling it to fill with the color set above
    ofCircle(pos.x,pos.y,20); //drawing the circle and it's position?
    

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
