#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    velocity =0.0;
    gravity - 9.01;
}

//--------------------------------------------------------------
void ofApp::update(){
    
    velocity = velocity + gravity;

}

//--------------------------------------------------------------
void ofApp::draw(){
    
//    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
//    ofCircle(0,velocity,100);
//    
   
    ofCircle(20, 20, 40);

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
