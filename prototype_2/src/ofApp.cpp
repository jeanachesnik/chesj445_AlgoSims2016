#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    gui.setup();
    gui.add(endTime.set("end time", 1000.0,0.0, 10000.0));
    
    timerEnd = false;
    startTime = ofGetElapsedTimeMillis();
    
    image2.load("image2.jpg");
    image3.load("image3.jpg");
    image4.load("image4.jpg");
    image5.load("image5.jpg");
    image6.load("image6.jpg");
    image7.load("image7.jpg");
    image8.load("image8.jpg");
    image9.load("image9.jpg");
    image9.load("image9.jpg");
    image10.load("image10.jpg");
    image11.load("image11.jpg");
    image12.load("image12.jpg");
    image13.load("image13.jpg");
    image14.load("image14.jpg");
    image15.load("image15.jpg");
    image16.load("image16.jpg");
    image17.load("image17.jpg");





    
    
    

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    gui.draw();
    
    float barWidth = 600;
    float timer = ofGetElapsedTimeMillis() - startTime;
    
    if (timer >= endTime) {
        timerEnd = true;
    }
    
    float timerBar = ofMap (timer, 0.0, endTime, 0.0, 1.0, true);
    
    ofSetColor(255);
    ofRect(ofGetWidth()/2-300, ofGetHeight()/2, barWidth*timerBar, 30);
    
    if (timer >= 2000) {
        image2.draw (0,50,ofGetScreenWidth(),ofGetScreenHeight());
//        ofSetColor (255,0,0);
//        ofCircle (300,600,100);
    }
    
    if (timer>= 2500) {
        image3.draw (0,50,ofGetScreenWidth(),ofGetScreenHeight());
//        ofSetColor (0,255,0);
//        ofCircle (600,400,200);
    }
    
    if (timer >= 3000) {
        image4.draw (0,50,ofGetScreenWidth(),ofGetScreenHeight());
//        ofSetColor (0,0,255);
//        ofCircle (400,400,50);
    }
    
    if (timer >= 3500) {
        image5.draw (0,50,ofGetScreenWidth(),ofGetScreenHeight());
        //        ofSetColor (0,0,255);
        //        ofCircle (400,400,50);
    }
    
    if (timer >= 4000) {
        image6.draw (0,50,ofGetScreenWidth(),ofGetScreenHeight());
        //        ofSetColor (0,0,255);
        //        ofCircle (400,400,50);
    }
    
    
    if (timer >= 4500) {
        image7.draw (0,50,ofGetScreenWidth(),ofGetScreenHeight());
        //        ofSetColor (0,0,255);
        //        ofCircle (400,400,50);
    }
    
    if (timer >= 5000) {
        image8.draw (0,50,ofGetScreenWidth(),ofGetScreenHeight());
        //        ofSetColor (0,0,255);
        //        ofCircle (400,400,50);
    }
    
    if (timer >= 5500) {
        image9.draw (0,50,ofGetScreenWidth(),ofGetScreenHeight());
        //        ofSetColor (0,0,255);
        //        ofCircle (400,400,50);
    }
    
    if (timer >= 6000) {
        image10.draw (0,50,ofGetScreenWidth(),ofGetScreenHeight());
        //        ofSetColor (0,0,255);
        //        ofCircle (400,400,50);
    }
    
    if (timer >= 6500) {
        image11.draw (0,50,ofGetScreenWidth(),ofGetScreenHeight());
        //        ofSetColor (0,0,255);
        //        ofCircle (400,400,50);
    }
    
    if (timer >= 7000) {
        image12.draw (0,50,ofGetScreenWidth(),ofGetScreenHeight());
        //        ofSetColor (0,0,255);
        //        ofCircle (400,400,50);
    }
    
    if (timer >= 8000) {
        image13.draw (0,50,ofGetScreenWidth(),ofGetScreenHeight());
        //        ofSetColor (0,0,255);
        //        ofCircle (400,400,50);
    }
    
    if (timer >= 8500) {
        image14.draw (0,50,ofGetScreenWidth(),ofGetScreenHeight());
        //        ofSetColor (0,0,255);
        //        ofCircle (400,400,50);
    }
    
    if (timer >= 9000) {
        image15.draw (0,50,ofGetScreenWidth(),ofGetScreenHeight());
        //        ofSetColor (0,0,255);
        //        ofCircle (400,400,50);
    }
    
    if (timer >= 9500) {
        image16.draw (0,50,ofGetScreenWidth(),ofGetScreenHeight());
        //        ofSetColor (0,0,255);
        //        ofCircle (400,400,50);
    }
    
    if (timer >= 10000) {
        image17.draw (0,50,ofGetScreenWidth(),ofGetScreenHeight());
        //        ofSetColor (0,0,255);
        //        ofCircle (400,400,50);
    }
    
    

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    if (key == ' ') {
        timerEnd = false;
        startTime = ofGetElapsedTimeMillis();
    }

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
