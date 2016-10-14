#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    float time = ofGetElapsedTimef(); //enabling the program to get the time in seconds
    
    //get the periodic value in [-1,1] with wavelength equal to 1 second
    float value = sin (time * M_TWO_PI); // why this formual, ask about later. It's oF conition to increase by 2pi in time. It's equal to the sine wave function sin() so the sin will go through a wavelength of one second, that's why the value is equal to sin and it will run from -1 to 1.
    
    //then going to map the value, draw the value from points [-1,1] to [0,255] which is color and position?
    float v = ofMap (value, -1,1,0,255);
    
    ofBackground (v,v,v); //calling and setting the background color, should this be above everything? or not because we're setting a condition on the color of the background so it shouldn't be drawn until later after the details of the condition have been called.
    

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
