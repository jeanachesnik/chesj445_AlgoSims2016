#include "ofApp.h"
#include "myobj.hpp"

//--------------------------------------------------------------
void ofApp::setup(){
    
    obj.setSrc(ofGetWidth()= 0.25, ofGetHeight() = 0.5);
    obj.setDst(ofGetWidth()= 0.75, ofGetHeight()= 0.5);

}

//--------------------------------------------------------------
void ofApp::update(){
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    // experiment here ? with an other formulas from week 1
    
    pct += 0.01; // pct = pct + 0.01; pct equals percent
    if (pct > 1.0) {
        pct = 0;
    }
    
    obj.draw();

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
