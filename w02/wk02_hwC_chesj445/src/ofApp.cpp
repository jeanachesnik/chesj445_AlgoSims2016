#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    image.load("own.png");

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    image.draw(200,200);
    
    float sinOfTime               = sin( ofGetElapsedTimef() );
    float sinOfTimeMapped         = ofMap(sinOfTime, -1, 1, 0, 255);
    
    ofBackground(sinOfTimeMapped, sinOfTimeMapped, sinOfTimeMapped);
    
    float sinOfTime2              = sin( ofGetElapsedTimef() + PI);
    float sinOfTimeMapped2        = ofMap(sinOfTime2, -1, 1, 0, 255);
    
    ofSetColor(119,78,7);
    ofDrawCircle(ofGetWidth()/2, ofGetHeight()/2, 60);
    
    ofSetColor(sinOfTimeMapped2, sinOfTimeMapped2, sinOfTimeMapped2);
//    ofRect(100,100,ofGetWidth()-200, ofGetHeight()-200);
    ofDrawCircle(ofGetWidth()/2, ofGetHeight()/2, 30);
    
    ofSetColor(119,78,7);
    ofDrawCircle(ofGetWidth()/2+ 200, ofGetHeight()/2, 60);
    
    ofSetColor(sinOfTimeMapped2, sinOfTimeMapped2, sinOfTimeMapped2);
    //    ofRect(100,100,ofGetWidth()-200, ofGetHeight()-200);
    ofDrawCircle(ofGetWidth()/2+200, ofGetHeight()/2, 30);
    
    image.draw(200,200);
    
//    ofSetColor(0, 255, 255);
//    ofDrawTriangle(ofGetWidth()/2+100, ofGetHeight()/2+100, 20, 20, 20, 20, 20, 20, 20);
    
    
//    
//    ofSetColor(255,255,0);
//    ofDrawCircle(ofGetWidth()/2+100, ofGetHeight()/2+100, 100);

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
