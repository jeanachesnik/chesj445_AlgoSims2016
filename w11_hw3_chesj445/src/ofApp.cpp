#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    //Making Mesh and Shader
    ofEnableDepthTest();
    ofDisableArbTex();
    
    ofLoadImage(texture, "subwaytherapy.jpg");
    shader.load("shader.vert", "shader.frag");
    
//    ofImage ("subwaytherapy2.JPG");
    
    image.load("subwaytherapy.jpg");
//    image.load("subwaytherapy2.jpg");
    
    int scale = 5;
    int w = 1000/scale;
    int h = 500/scale;
    for (int y = 0; y < h; y++){
        for (int x = 0; x<w; x++){
            
            //            w	200
            //            h	100
            //
            //            x     x%2
            //            0     0
            //            1     1
            //            2     0
            //            3     1
            //            4     0
            //            5     1
            //            6     0
            //            7     1
            //            8     0
            //            9     1
            //            10	0
            //            11	1
            //            12	0
            //            13	1
            //            14	0
            //            15	1
            //            16	0
            //            17	1
            //            18	0
            //            19	1
            //            20	0
            //
            
            //  Per pixel we set the position, normal and texCoord
            float offsetX = 0;
            float offsetY;
            if(x%2==1){
                offsetY = 0.5;
            } else{
                offsetY = 0.0;
                
            }
            mesh.addVertex(ofPoint((x+offsetX)*scale,(y+offsetY)*scale,0));
            //            mesh.addNormal(ofPoint(1,0,0));
            mesh.addTexCoord(ofVec2f((float)(x+offsetX)/(float)w,(float)(y+offsetY)/(float)h));
        }
    }
    
    //  Finally we set the indexes... We tell openGL how the vertex are connected in triangles (a,b,c)
    for (int y = 0; y<h-1; y++){
        for (int x=0; x<w-1; x++){
            if(x%2==0){
                mesh.addIndex(x+y*w);				// a
                mesh.addIndex((x+1)+y*w);			// b
                mesh.addIndex(x+(y+1)*w);			// d
                
                mesh.addIndex((x+1)+y*w);			// b
                mesh.addIndex((x+1)+(y+1)*w);		// c
                mesh.addIndex(x+(y+1)*w);			// d
            } else {
                mesh.addIndex((x+1)+y*w);			// b
                mesh.addIndex(x+y*w);				// a
                mesh.addIndex((x+1)+(y+1)*w);		// c
                
                mesh.addIndex(x+y*w);				// a
                mesh.addIndex(x+(y+1)*w);			// d
                mesh.addIndex((x+1)+(y+1)*w);		// c
            }
        }
    }
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
//    ofImage_<"subwaytherapy2.JPG">

    image.draw(0,0);
    
    ofSetColor(0,0,153);
    ofRectangle (10,10,10,10);

   ofBackground(0);
    
    image.draw(ofGetWidth()/2, ofGetHeight()/2);
    image.draw(200,0);
    
    cam.begin();
    ofPushMatrix();
    
    //  Center the mesh;
    ofTranslate(-500, -250);
    
    shader.begin();
    shader.setUniform2f("u_resolution", ofGetWidth(), ofGetHeight());
    shader.setUniform1f("u_time", ofGetElapsedTimef());
    shader.setUniformTexture("u_tex0", texture, 0);
    shader.setUniform2f("u_tex0Resolution", texture.getWidth(), texture.getHeight());
    
    //mesh1.drawWireframe();
    
    mesh.draw();
    
    
    ofPopMatrix();
    shader.end();
    
    
    
    cam.end();
    
    image.draw(ofGetWidth()/2, ofGetHeight()/2);
    image.draw(200,0);
    
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
