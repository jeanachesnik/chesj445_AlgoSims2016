#include "ofApp.h"
#include "ofMain.h"

//--------------------------------------------------------------
void ofApp::setup(){

    obj.setSrc(ofGetWidth() * 0.25, ofGetHeight() *0.5);
    obj.setDst(ofGetWidth()*0.75, ofGetHeight()*0.5);

}

//--------------------------------------------------------------
void ofApp::update(){
    
    pct += 0.01; //pct = pct + 0.01;
    if(pct > 1.0){
        pct = 0;
    }
    
    obj.powUpdatePct(pct, 0.3);

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofSetBackgroundColor(0, 0, 0);
    
    obj.draw();

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    
    if (key == '1'){
        obj.setSrc(ofGetWidth() + 25, ofGetHeight() + 25); // do something
    } else if (key == '2'){
        obj.setSrc(ofGetWidth() -25, ofGetHeight() -25);; // do something else
    }
    
//    if (key == '1'){
//         obj.setSrc(ofGetWidth() * 0.50, ofGetHeight() *0.75); // do something
//    } else if (key == '2 '){
//        obj.setSrc(ofGetWidth() * 0.25, ofGetHeight() *0.5);; // do something else
//    }
    
    //This was a test run to see if I could use the keyPressed first, then I was able to follow the same formula for mousePressed

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
    if (ofGetMousePressed){
        obj.setSrc(ofGetWidth() * 0.50, ofGetHeight() *0.5); // do something
    } else if (ofGetMousePressed()){
       obj.setSrc(ofGetWidth() * 0.25, ofGetHeight() *0.5);  //
    }

    //Ask how I can make the obj change on the position instead of the line? Should I be placing this into MyObj.cpp instead? 
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
