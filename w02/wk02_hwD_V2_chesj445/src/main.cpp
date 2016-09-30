#include "ofMain.h"
#include "ofApp.h"

//========================================================================
int main( ){
	ofSetupOpenGL(1024,768,OF_WINDOW);			// <-------- setup the GL context

	// this kicks off the running of my app
	// can be OF_WINDOW or OF_FULLSCREEN
	// pass in width and height too:
	ofRunApp(new ofApp());

}

//Jeana's Notes
//I tried to add another color ball to the example I found online, but then I lost one of the balls. There are supposed to be three, but I need to ask why does the second ball go missing when I add the third.