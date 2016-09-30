#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    int w = ofGetWidth();
    int h = ofGetHeight();
    fbo.allocate (w,h);

    ofSetFrameRate(60);
    fbo.allocate (ofGetWidth(), ofGetHeight());
    
    fbo.begin ();
    ofBackground(255, 255, 255);
    fbo.end();
    
    a=0;
    b=0;
    pos = ofPoint (ofGetWidth()/ 2, ofGetHeight()/2);
    
    colorStep =0;
}

//--------------------------------------------------------------
void ofApp::update(){
    
    fbo.begin();
    for (int i=0; i<200; i++){
        draw1();
    }
    
    fbo.end();

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    fbo.begin();
    ofBackground(255, 255, 255);
    fbo.end();
    
    
    fbo.draw (ofGetWidth()/2,ofGetHeight()/2);
    ofSetColor(255,255,255);
    fbo.draw (0,0);
    
    
    a += b * DEG_TO_RAD;
    b = b + 0.5;
    lastPos = pos;
    ofPoint d = ofPoint (cos (a)), sin (a));
    float len = 20;
    pos += d* len;
    
    //this info below will change the color every 100 steps or frames (Ch.2, page 53)
    
    if ( colorStep % 100 ==0) {
        color = ofColor (
            ofRandom (0,255)),
            of Random (0,255),
            of Random (0,255));
    }

    colorStep++;
    
    ofSetColor (color);
    ofLine (lastPos,pos);
    
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
