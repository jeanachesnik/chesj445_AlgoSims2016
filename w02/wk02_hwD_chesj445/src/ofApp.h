#pragma once

#include "ofMain.h"
#include "Ball.hpp"

vector <Ball> myBall;

//Maybe I don't need these anymore since we're using NBALLS?
//Ball myBall;
//Ball myBall1;
//Ball myBall2;
//Ball myBall3;

#define NBALLS 10
Ball myBall[NBALLS];


class ofApp : public ofBaseApp{

	public:
		void setup();
    
    
		void update();
    
    
		void draw();
    

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
