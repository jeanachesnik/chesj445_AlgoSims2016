#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    pos = ofGetWindowSize() / 2;
    dest = ofPoint( ofRandomWidth(), ofRandomHeight() );
    
    car.setInit( pos, ofPoint(10, -5) );
    
    ofBackground(0);
    
    image.loadImage("car.png");
    ofLoadImage (p, "car.png");
}

//--------------------------------------------------------------
void ofApp::update(){
    car.seek( dest );
    car.update();
    
    if( car.getPosition().distance(dest) < 5){
        dest = ofVec2f( ofRandomWidth(), ofRandomHeight() );
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofSetColor(255,255,0);

    car.draw();
    
    ofSetColor(255,255,0);
    ofCircle( dest, 20 );
    
    image.draw(ofGetWidth()/2, ofGetHeight()/2,200,200);
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
void ofApp::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){
    
}
