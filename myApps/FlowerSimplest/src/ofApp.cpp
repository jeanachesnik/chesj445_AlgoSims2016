#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    
    ofPoint stem0, stem1, stem2, stem3, leftLeaf, rightLeaf;
}

//--------------------------------------------------------------
void ofApp::update(){

    stem0 = ofPoint (300,100);
    stem1 = ofPoint (300,270);
    stem2 = ofPoint (300,300);
    stem3 = ofPoint (300,400);
    leftLeaf = ofPoint (200,220);
    rightLeaf = ofPoint (400,220);
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofBackground (255,255,255);
    ofSetColor (0,0,0);
//    ofNoFill();
//    ofSetCircleResolution(40);
//    ofCircle (300,100,40);
//    ofSetLineWidth(7);
//    ofLine (300,100,300,400);
//    ofTriangle (300,270,300,300,200,220);
//    ofTriangle (300,270,300,300,400,220);
//
//////
//    ofBackground (255,255,255);
//    ofSetColor (0,0,0);
    ofCircle (stem0,40);
    ofLine (stem0, stem3);
    ofTriangle (stem1,stem2,leftLeaf);
    ofTriangle (stem1,stem2,rightLeaf);
    
    ofNoFill ();
    ofPushMatrix();
    ofTranslate (stem0);
    float angle = ofGetElapsedTimef()*30;
    ofRotate (angle);
    
    int petals = 15;
    for (int i=0; i<petals; i++){
        ofRotate (360.0/petals);
        
        ofPoint p1(0,20);
        ofPoint p2(80,0);
        ofTriangle (p1,-p1,p2);
        
        ofPopMatrix();
}

////--------------------------------------------------------------
//void ofApp::keyPressed(int key){
//
//}
//
////--------------------------------------------------------------
//void ofApp::keyReleased(int key){
//
//}
//
////--------------------------------------------------------------
//void ofApp::mouseMoved(int x, int y ){
//
//}
//
////--------------------------------------------------------------
//void ofApp::mouseDragged(int x, int y, int button){
//
//}
//
////--------------------------------------------------------------
//void ofApp::mousePressed(int x, int y, int button){
//
//}
//
////--------------------------------------------------------------
//void ofApp::mouseReleased(int x, int y, int button){
//
//}
//
////--------------------------------------------------------------
//void ofApp::mouseEntered(int x, int y){
//
//}
//
////--------------------------------------------------------------
//void ofApp::mouseExited(int x, int y){
//
//}
//
////--------------------------------------------------------------
//void ofApp::windowResized(int w, int h){
//
//}
//
////--------------------------------------------------------------
//void ofApp::gotMessage(ofMessage msg){
//
//}
//
////--------------------------------------------------------------
//void ofApp::dragEvent(ofDragInfo dragInfo){ 
//
//}
