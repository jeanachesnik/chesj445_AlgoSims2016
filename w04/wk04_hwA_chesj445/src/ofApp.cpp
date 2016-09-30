#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground (0);
    planet01.setup();
    
    planetGroups.add(planet01.planetGroup);
    
    gui.setup(planetGroups);

    
}

//--------------------------------------------------------------
void ofApp::update(){
    
    planet01.update();
    

}

//--------------------------------------------------------------
void ofApp::draw(){
    
//    ofSetColor(255,67,255);
//    //    ofCircle(posX, posY, 30);
//    ofSphere(300, 300, 100);
    
    ofSetColor(255,96,58);
    //    ofRotate(roatation * roatateSpeed);
    //    ofCircle(posX, posY, 30);
    ofSphere(900, 200, 100);
    
    
    
    gui.draw();
    
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    
    planet01.draw ();
    

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
