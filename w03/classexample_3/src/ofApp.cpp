#include "ofApp.h"

bool bSort(ofColor a, ofColor b) {
    
    //if the brightness of a is less than the brightness of b then it will return true or false
    return a.getBrightness() < b.getBrightness();
    
}

//--------------------------------------------------------------
void ofApp::setup(){
    
    sunflower.load("sunflower.jpg");
    sunflowerRemix.allocate(sunflower.getWidth(),sunflower.getHeight(), OF_IMAGE_COLOR);
    int w = sunflower.getWidth();
    int h = sunflower.getHeight();
    
    
    for(int i = 0; i < w; i++){
        vector<ofColor> lineOfPixels;
        for(int j = 0; j<h; j++){
            ofColor orig = sunflower.getColor(i,j);
            lineOfPixels.push_back(orig);
            
            
    }
//        ofSort(<#vector<T> &values#>, BoolFunction compare)
        ofSort(lineOfPixels, bSort);
        
        sunflowerRemix.setColor(i.j.lineOfPixels[j]);
        
    
    
}

    sunflowerRemix.update ();
    

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    sunflower.draw (0,0);
    sunflowerRemix.draw (sven.getWidth(), 0);

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
