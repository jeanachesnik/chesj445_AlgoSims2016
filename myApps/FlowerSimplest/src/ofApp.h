#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{
    
    ofPoint stem0, stem1, stem2, stem3, leftLeaf, rightLeaf;

	public:
		void setup();
    
//    ofPoint stemo0, stem1, stem2, stem3, leftLeaf, rightLeaf;
    
		void update();
//    
//    stem0 = ofPoint (300,100);
//    stem1 = ofPoint (300,270);
//    stem2 = ofPoint (300,300);
//    stem3 = ofPoint (300,400);
//    leftLeaf = ofPoint (200,220);
//    rightLeaf = ofPoint (400,220);
//
    
		void draw();
    
//    ofBackground (255,255,255);
//    ofSetColor (0,0,0);
//    ofCircle (stem0,40);
//    ofLine (stem0, stem3);
//    ofTriangle (stem1,stem2,leftLeaf);
//    ofTriangle (stem1,stem2,rightLeaf);

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		
};
