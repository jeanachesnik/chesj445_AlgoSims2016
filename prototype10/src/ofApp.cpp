#include "ofApp.h"

//Jeana's Notes
//I started to experiment with some movement with this prototype. I was able to use an example from the Openframeworks book titled Mastering openFrameworks. I was trying to build upon my mesh example from last week, but I ran into some errors with my XCode again. I spent two hours trouble shooting it and began again from scratch. I'm going to try and return to the mesh example and add experiment some more to find out which version will replicate the movement I'm striving for.

//--------------------------------------------------------------
void ofApp::setup(){
    
    image.load("image8.jpg");
}

//--------------------------------------------------------------
void ofApp::update(){
    
    int w = 800;
    int h = 800;
    
    unsigned char *data = new unsigned char [w* h* 4];
    
    for (int y=0; y<h; y++) {
        for (int x=0; x<w; x++) {
            
            float time = ofGetElapsedTimef();
            float v = (x - w/2) * (y -h/2);
            float u = v * 0.00025 + time;
            
            int red = ofMap (sin (u), -1, 1, 0, 25);
            int green = ofMap (sin (u*2), -1, 1, 0, 255);
            int blue = 200 - green;
            int alpha = 140;
            
            int index = 4 * ( x+ w *y);
            data [index] = red;
            data [index +1] = green;
            data [index +2] = blue;
            data [index +3] = alpha;
        }
    }
    
    image.setFromPixels (data, w, h, OF_IMAGE_COLOR_ALPHA);
    delete[] data;

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    image.draw (0,0);
    
    ofBackground(255,255,255);
    ofSetColor (255,255,255);
    
    image.draw (200,200);
    
    

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
