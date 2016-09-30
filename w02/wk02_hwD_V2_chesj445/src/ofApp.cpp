#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    ofBackground(0, 0, 0);
    ofSetFrameRate(30);
    
    yellowBall.x = ofRandomWidth();
    yellowBall.y = ofRandomHeight();
    yellowBall.vx = ofRandom(-10,10);
    yellowBall.vy = ofRandom(-10,10);
    
    whiteBall.x = ofRandomWidth();
    whiteBall.y = ofRandomHeight();
    whiteBall.vx = ofRandom(-10,10);
    whiteBall.vy = ofRandom(-10,10);
    
    blueBall.x = ofRandomWidth();
    blueBall.y = ofRandomHeight();
    blueBall.vx = ofRandom(-10,10);
    blueBall.vy = ofRandom(-10,10);
    
}

//--------------------------------------------------------------
void ofApp::update(){

    yellowBall.x = yellowBall.x + yellowBall.vx;
    yellowBall.y = yellowBall.y + yellowBall.vy;
    
    whiteBall.x = whiteBall.x + whiteBall.vx;
    whiteBall.y = whiteBall.y + whiteBall.vy;
    
    blueBall.x = blueBall.x + blueBall.vx;
    blueBall.y = blueBall.y + blueBall.vy;
    
    if (yellowBall.x<0 || yellowBall.x > ofGetWidth()) {
        yellowBall.vx = -yellowBall.vx;
    }
    
    if (yellowBall.y<0 || yellowBall.y > ofGetHeight()) {
        yellowBall.vy = -yellowBall.vy;
    }
    
    if (whiteBall.x<0 || whiteBall.x > ofGetWidth()) {
        whiteBall.vx = -whiteBall.vx;
    }
    
    if (whiteBall.y<0 || whiteBall.y > ofGetHeight()) {
        whiteBall.vy = -whiteBall.vy;
    }
    
    if (blueBall.x<0 || blueBall.x > ofGetWidth()) {
        blueBall.vx = -blueBall.vx;
    }
    
    if (blueBall.y<0 || blueBall.y > ofGetHeight()) {
        blueBall.vy = -blueBall.vy;
    }
    
    
}

//--------------------------------------------------------------
void ofApp::draw(){

    ofSetColor(255, 255, 0);
    ofCircle(yellowBall.x, yellowBall.y, 50);
    
    //Can't see the white ball anymore
    ofSetColor(255, 255, 255);
    ofCircle(whiteBall.x, whiteBall.y, 50);
    
    ofSetColor(0, 0, 255);
    ofCircle(whiteBall.x, whiteBall.y, 50);
    
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
