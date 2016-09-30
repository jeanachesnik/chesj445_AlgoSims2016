#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    for(int i=0; i<NBALLS; i++){
        
        int size = (i+1) * 10; // defining the size of each ball based on its place in the array
        int randomX = ofRandom( 0, ofGetWidth() ); //generate a random value bigger than 0 and smaller than our application screen width
        int randomY = ofRandom( 0, ofGetHeight() ); //generate a random value bigger than 0 and smaller than our application screen height
        
        myBall[i].setup(randomX, randomY, size);
    }

//    myBall.setup();
//
//    myBall1.setup();
//    myBall2.setup();
//    myBall3.setup();
    
    for(int i=0; i<NBALLS; i++){
        myBall[i].setup();
    }
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
    
//    myBall.update();
//    
//    myBall1.update();
//    myBall2.update();
//    myBall3.update();
    
    for(int i=0; i<NBALLS; i++){
        myBall[i].update();
    }
    
    for (int i = 0; i<myBall.size(); i++) {
        myBall[i].update();
    }

}

//--------------------------------------------------------------
void ofApp::draw(){
//    
    myBall.draw();
    
    myBall1.draw();
    myBall2.draw();
    myBall3.draw();
    
    for(int i=0; i<NBALLS; i++){
        myBall[i].draw();
    }
    
    for (int i = 0 ; i<myBall.size(); i++) {
        myBall[i].draw();
    }

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
    
    
    for (int i =0; i < myBall.size(); i++) {
        float distance = ofDist(x,y, myBall[i].x, myBall[i].y); // a method oF gives us to check the distance between two coordinates
        
        if (distance < myBall[i].dim) {
            myBall.erase(myBall.begin()+i); // we need to use an iterator/ reference to the vector position we want to delete
        }
    }

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
