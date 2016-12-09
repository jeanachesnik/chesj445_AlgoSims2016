#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    image.load("stars.png");
    image.resize(200, 200);
    
    //pt.1
    mesh.setMode(OF_PRIMITIVE_POINTS);
    mesh.enableColors();
    
//    mesh.setMode(OF_PRIMITIVE_LINES);
//    mesh.enableIndices();
    
    
    
    float intensityThreshold = 150.0;
    int w = image.getWidth();
    int h = image.getHeight();
    for (int x=0; x<w; ++x) {
        for (int y=0; y<h; ++y) {
            ofColor c = image.getColor(x, y);
            float intensity = c.getLightness();
            if (intensity >= intensityThreshold) {
                ofVec3f pos(x*4, y*4, 0.0);
                mesh.addVertex(pos);
                mesh.addColor(c);
    
    
                //pt.2
////                mesh.setMode(OF_PRIMITIVE_LINES);
////                mesh.enableIndices();
//            
//                
//                float connectionDistance = 30;
//                int numVerts = mesh.getNumVertices();
//                for (int a=0; a<numVerts; ++a) {
//                    ofVec3f verta = mesh.getVertex(a);
//                    for (int b=a+1; b<numVerts; ++b) {
//                        ofVec3f vertb = mesh.getVertex(b);
//                        float distance = verta.distance(vertb);
//                        if (distance <= connectionDistance) {
//                            
//                            mesh.addIndex(a);
//                            mesh.addIndex(b);
//                
//                
        }
    }
}


//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    image.draw(0,0);
    ofBackground(0,0,255);
    mesh.draw(); // Blue background, so it's easy to see the mesh
    
    //pt.2
    ofColor centerColor = ofColor(85, 78, 68);
    ofColor edgeColor(0, 0, 0);
    ofBackgroundGradient(centerColor, edgeColor, OF_GRADIENT_CIRCULAR);
    mesh.draw();

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
