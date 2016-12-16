#include "ofApp.h"

//--------------------------------------------------------------

//--------------------------------------------------------------tutorial first step -----

//calling on the Params param that I added to the header file.

Params param;

void Params::setup() {
    eCenter = ofPoint (ofGetWidth()/2, ofGetHeight ()/2);
    eRad =1000; // how large the radius will be
    velRad = 0; //the speed of the radius
    lifeTime = 5.0; //how long the Params will be alive
    
    rotate = 50; // the degree of rotation
    
    
    force = -200;
    spinning = 300;
    friction = 0.05;
}

//--------------------------------------------------------------tutorial second step, defining the particle functions -----

//this is saying that all of the created particles will be inactive once the program begins. In order to make them come alive, we're going to need do more and call them in the setup function.

Particle :: Particle () {
    live = false;
}


//--------------------------------------------------------------tutorial third step, adding more informationt to the particle system so that it can return properly -----

//before calling the particles in the setup, we have to add more code to tell the particles systems what to return.

ofPoint randomPointInCircle (float maxRad) {
    
    ofPoint pnt; //giving ofPoint a name
    float rad = ofRandom (0, maxRad); //the float radius is going to be openFrameworks Random, at a location of x=0 and the maximum Radius for y.
    
    float angle = ofRandom (0,M_TWO_PI); //not sure if I get this entirely, but I think the angel is also going to be Random, with an X position of zero, and the Y position to incorporate two PI (3.14)
    
    pnt.x = cos (angle) * rad; //then the point X will equal the angle of the cosine, multiplied by the radius dimensions above.
    
    pnt.y = sin (angle) * rad; //then the point Y will equal sine of the angle multiplied by the radius dimensions created above.
    
    return pnt; //and then finally return all of this information into a ofPoint aka pnt.
    
}



//--------------------------------------------------------------tutorial fourth step, now we setup the particle system, but usually wouldn't this be done within it's own class? Going to go ahead and go forward with this tutorial to see where it goes. I'm going to continue to try and break this down how I think it makes sense to me  -----

void Particle :: setup() {
    pos = param.eCenter + randomPointInCircle (param.eRad); //I'm initalizing the setup of the particle by first calling it's position. We created the param in the header as a global variable so I should be able to call on it. I also created the eCenter in the header so now I'm combining the Param and the eCenter to create the X position and adding the RandomPointinCirlce which includes the radius of the Param. I'm still confused on the exact numbers that are being called but going to continue to go forward.
    
    
    
    vel = randomPointInCircle (param.velRad); // here I'm calling on the speed of the Param
    
    
    time = 0; // this will have a short life time of zero
    lifeTime = param.lifeTime;
    live = true; //once the particle system is initalizied it will change from false to true and therefore make it alive.
    
    //Part 3 additions, adding the variables that were just added to the header for force, spinning, and friction
    
    
    
}


//--------------------------------------------------------------tutorial fifth step, now I'm going to write code so the Particle system will have parameters to update. This info will check if the particle system is alive and how fast it will be rotating and also the lifetime of the particle -----

void Particle::update ( float dt) {
    
    
    //---------//This was all Part 1 =------------
    if(live) {
        //if the particle system is alive then rotate it at this speed
        vel.rotate (0,0,param.rotate * dt); //also calling on three parameters so this would possibly create it to be 3D?
        
        //--Part 3 Additions---//
        
        //need to add the accelerations
        ofPoint acc;
        ofPoint delta = pos - param.eCenter;
        float len = delta.length();
        if (ofInRange (len, 0, param.eRad)) {
            delta.normalize ();
            
            
            //add the attraction and repulsion
            
            acc += delta * param.force;
            
            //adding the spinning forces
            acc.x += -delta.y * param.spinning; // I believe this is adding the acceleration of x point and making it equal or more than the spinning of the param object.
            
            acc.y += delta.x * param.spinning;
            
        }
        
        vel += acc * dt; //This is applying the Euler method again
        
        vel *= (1 - param.friction) ; //Friction
        
        
        
        
        //then update the position of the particle system
        
        pos += vel*dt; //this is referencing the Euler Method which I looked up and what I found was that it's used to help simplify more complex usage of math, especially "numerical integration"
        
        //continue to check the position and the particle lifespan
        
        time += dt;
        if ( time >= lifeTime) {
            live = false; // this is once the partilce has died
        }
        
        
    }
}

//-----------------------------------------



//--------------------------------------------------------------tutorial sixth step, drawing the particle system -----

void Particle::draw () {


    
    
//--Part Two and Below---------------//
    if (live) {
        //if the particle system is alive, this is what it will be drawn as
        
        //here I'm writing the size of the particle system
        
        float size = ofMap (
                            fabs (time - lifeTime/2), 0, lifeTime/2, 3, 1);
        
        //next I want to draw the color
        
        ofColor color = ofColor::red;
        float hue = ofMap (time, 0, lifeTime, 255,255);
        color.setHue (hue);
        ofSetColor (255,165,0);
        
        ofCircle (pos, size) ; //this says it will draw the particle, but I want to experiment with creating the circle into a line so it looks more like the map that inspired me.I want to take the same approach with color above as well.
        
    }
}




void ofApp::setup(){
    ofBackground(0);
    soundPlayer.loadSound("Re.mp3");
    soundPlayer.play();
    //-- Part 3 --------//
    
    //In order to create multiple triangle,  I'll need to create an array
    
    nTri = 1500; //this is calling on the name I created in the header file. Right now it's 1500 but return here to alternate this number to make less or more
    
    nVert = nTri * 3; // this is the name for the vertices that will be creating the triangle. It's being multiplied by 3 because triangles have three vertices.
    
    //next in the tutorial is the stpes for creating a sphere for how these triangles will circle around each other
    
    float Rad = 250; // this is referencing the radius size of the sphere
    
    float rad = 25; //this is going to creat ehte triangle's radius, which i don't quite understand except that it's contributing to the size of the triangle. Also, naming it the same as above but with lower case makes me nervous because what if the names get mixed up.
    
    //now I'm going to fill in the array of vertices with information
    
    vertices.resize (nVert); // this will determine how large the array size will be which includes (nTri*3)
    
    
    //this code below is scanning the triangle so it can create the center point
    for (int i=0; i <nTri; i++) {
        
        //here the tutorial explains that it's taken random point from cube, but I don't understand the logic here. Instead I see these points workigng together to create random three points to create the triangle.
        ofPoint center (ofRandom (-1,1),
                        ofRandom (-1,1),
                        ofRandom (-1,1));
        
        center.normalize(); //the tutorial is explaining how this is normalizing the vector's length to 1, but I'm not sure why it's needed
        
        center *= Rad; // the center vector has the same length of 250
        
        //here were adding the j, which i need to research because I think it may be specifically related to traingles. Once again we're building three random points, but it's being related to the lowercase rad which is triangle's radius. Getting lost here, but going to keep following the reading to see what happens. I'm also going to test run this right now to see what happens...It worked, but still only showed my previous code since I haven't drawn anything yet.
        for (int j=0; j<3; j++) {
            vertices [i*3+j] = center + ofPoint (ofRandom (-rad,rad), ofRandom (-rad, rad), ofRandom (-rad, rad));
            
        }
        
    }
    
    //Now we get to do the fun part which is play with the color of the trainagles
    
    colors.resize (nTri); //resizing the color of the triangles
    
    for (int i=0; i<nTri; i++) {
        colors [i] = ofColor (ofRandom (0,255), 0,0);
    }
    
}

//starting to run into some errors related to the previous code, once I placed the color code above... going to keep going to the draw porition...
    
    
    
    
    //--Part 2 Below with the particle system information that I created in project Final 3 ---//
    
    
    //t1 ofSetFrameRate (60); //the frame rate determines how fast the screen will update
    
    //here I'm goin to write code that will direct how the drawing will initialize
    
    int w = ofGetWidth(); //integer of width is getting width of openFrameworks
    int h = ofGetHeight (); //integer of height is getting height of openFrameworks
    
    //t1 fbo.allocate (w, h, GL_RGB32F_ARB); // this is caling the off screen buffer for trails, but is the third parameter calling the color values with the RGB reference?
    
    //this info below is adding white color to the buffer, which I will experiment with later to change to black to match the color dimensions of my map.
    
    //t1fbo.begin();
    //t1ofBackground (0);
    //t1fbo.end();
    
    
    //then i'm going to set up the parameters fo which it will be built
    //t1 param.setup(); //this will be recognized globally based on the tutorial information. Maybe I can manipulate this section to fit towards different parameters of a map or get creative.
    
    
    // t1 history = 0.9; //i believe this is referencing the trail history since the value of 1 would be infiinte and the informaiton I read earlier said that 0.8 would be a long trail
    
// t1   bornRate = 10;
// t1   bornCount = 30;
// t1   time0 = ofGetElapsedTimef();

    //GOING TO TEST RUN ALL OF THIS 3:56PM to see what's wrong or if it works so I can understand how it's working ... It gave me an error that another porject was running. However, I can still run things when that happens, it also suggested I update some settings so I went forward with that. I think it's cause I haven't drawn anything below that nothing displayed so I'll continue. - JC

//t1 == troublshoot 1 cancel out }


//--------------------------------------------------------------
void ofApp::update(){
    
    float time = ofGetElapsedTimef();
    float dt = ofClamp (time - time0, 0, 0.1);
    time0 = time;
    
    //Get rid of the inactive particles
    
    int i=0;
    while (i <p.size()) {
        if (!p[i].live) {
            p.erase (p.begin() + i );
        }
        else {
            i++;
        }
    }
    
    //Lost my concentration, so trying to get back to how I was understanding this section. Now I'm going to write code so new particles can be born.
    
    bornCount += dt * bornRate;
    if (bornCount>= 1) {
        int bornN = int (bornCount);
        bornCount -= bornN;
        for (int i=0; i<bornN; i++) {
            Particle newP;
            newP.setup();
            p.push_back (newP);
        }
    }
    
    //then update the particles
    for (int i=0; i<p.size (); i++) {
        p[i].update (dt);
    }
    
}



//----pt 1 below---



//next I have to add code so the function will continuously update properly. We need to compute dt (still don't know how this is working properly, distance and time?) and how it activates a particle if the particle is initallly dead

//    float time = ofGetElapsedTimef ();
//    float dt = ofClamp (time - time0, 0,0.1);
//    time0 = time;

//
//    //so by looking at the code above I know that we're as in openFrameworks and I are going to look at the variable of time. Continue working with dt and calculate the current time and time of zero.
//
//    //trying not to get lost, but continuing forward. Sincce the particle is initially dead or false, then we need to tell the system how to update it when it becomes alive. Like telling Frankenstein how to dance once the electricity hits?
//
//    if ( !p.live) {
//        p.setup();
//    }
//
//    //we named particle as p in the header file so we wrote shorter code here for saying once it's alive, then set the dang thing up.
//
//    p.update (dt) ; //then once it's set up, update the particle and dt (hopefully distance and time) accordingly to all the info above that I just wrote. Why do I keep wanting to listen to Chance the Rapper right now? K, focus.
//
//    //holy shit... just confired that dt is a time step that computes the value of the current time and the previous time that the particle system was called to update.

//}

//--------------------------------------------------------------
void ofApp::draw(){
    
    
    
    
    
    //-----Adding part 3 ---, my code began to give erros from the previous step complete in the setup, but going to try and continue to see if this code can be joined //
    
    
    
    //this is supposed to help with the z coordinates and buffering
  
    ofEnableDepthTest(); // this allows for buffering with z coordinates
    
    ofBackgroundGradient (ofColor (255), ofColor(128)); //this is probably going to conflict with my other drawing code because a background color is supposed to be drawn below...there is also an fbo that is supposed to be created later that I'm worried will break my code...
    
    ofPushMatrix(); //the tutorial reading is saying that this is helping to store the coordinate systems (page 189)
    
    ofTranslate (ofGetWidth()/2, ofGetHeight()/2, 0);// this is creating the center of the cordinates at the middle of the screen. There is also a z coodinate which i'm excited about because I'm hoping this will actually evolve to be 3D..
    
    //now the code below is going to help rotate the sphere in a circle, I'm wondering if this code doesn't work if I can then apply it to the code I created before for the particle systems to rotate?
    
    float time = ofGetElapsedTimef(); // going to get the time in seconds
    
    float angle = time * 10 ; //the reading says this is going to "compute angle" but i see it as it's mulitplying the time it's turning by 10, so will it increase the speed by ten as the code runs? ...I read on and it said the 10 is actually saying it will rotate at 10 degrees per second.
    
    ofRotate (angle, 0, 1, 0); // these dimensions show where the coorindate system will be rotating along the y-axis. Look up a visual representation of this or ask Regina for a drawing to understand... if it's only on the y-axis, then does it mean it's rotating horizontally only? Experiment with the x-axis to make it roatate like the prime meridan instead of like the equator...
    
    //now the reading is saying that we need to draw the triangles...
    
    for (int i = 0; i<nTri; i++ ) {
        ofSetColor (colors[i]);
        ofTriangle (vertices [i*3],
                    vertices [i*3 +1],
                    vertices [i*3 + 2]);
    }
    
    //okay so this code above usually confused me, and the tutorial says that we're drawing the colors of the triangle, but I'm going to try and put it into my own words to understand. I see the same function being created to call the triangle that was used earlier which is the math of (int i-0; i<nTri;, i++), and then we call on the colors, which we created in the setup to work as random colors in the colors.resize... still a little lost, but then it draws the vertices of the triangle and adds upon each one... I'm not sure if that's saying that the vertices increase in size or what else that means..I know Regina has mentioned it before, but i need to research it again.
    
    ofPopMatrix(); //Using the pop matrix again to possibly restore the coordinate system
    
}

//now the reading says I should run the code, but I have 15 erros and they're all related to the setup section of my previous code. The fbo of the code I had before is causing problems which I'm not suprised about... so I'm going to see if I can eliminate it somehow without it being damaged.. what's odd is that within the draw section the fbo doesn't show any errors yet. To fix the code I'm going to eliminate the fbo error section in the setup...


    
    
    
    
    
    
    //-----------Part 2 below (particle system info)-----//
    
    //t2 ofBackground(0,0, 0);
    
    
    //t2 fbo.begin();
    
    //t2 ofEnableAlphaBlending();
    
    //t2 float alpha = (1-history) * 255;
    //wow - just experimented with this and was able to eleiminate the background from being white*******
    //ofSetColor (255,255,255,alpha);
    //    ofFill();
    //ofRect (0,0,ofGetWidth(),ofGetHeight());
    
    //t2 ofDisableAlphaBlending();
    
    //t2 ofFill();
    //t2 for (int i=0; i<p.size(); i++ ) {
// t2       p[i].draw();
//    }

    //t2 fbo.end();
    
    //t2 ofSetColor (255,255,255);
    //t2 fbo.draw (0,0);
    
//t2}

//----All this below was from part 1 or had problems with it with part 2 so going to rewrite the code above ----------------

//    // next we're going to draw this thing, hopefully
//
//    ofBackground (255,255,255); //this example gives a white background, I'm going to later change this color to black or another hue
//
//    //next I need to draw the buffer which was called the fbo
//    fbo.begin(); //initalize to draw the buffer
//
//    //next the tutorial is guiding me to draw a semi transparent rectangle to clear the buffer. I know the similar idea is used for frame rate where it clears the screen each time.
//
//    //took break to go to the restroom and was distracted by a friend wanting food from the student food pantry
//
//    //add the blending
//
//    ofEnableAlphaBlending ();
//
//    float Alpha = (1-history) * 255;
//    ofSetColor ( 255,255,255, Alpha);
//    ofFill ();
//    ofRect (0,0, ofGetWidth(), ofGetHeight ());
//
//    ofDisableAlphaBlending (); //end the transparency
//
//    //now I'll draw the particle
//    ofFill ();
//    p.draw();
//
//
//
//    ofFill();
//    for(int i=0; i<p.size(); i++) {
//        p[i].draw)_;
//    }
//
//
//    fbo.end();
//
//    //now draw the buffer on the screen
//    ofSetColor (255,255,255);
//    fbo.draw (0,0);
//
//    //Going to test run again since now there should be something appearing on the screen.
//
//    //IT Worked!
//    // everthing before here will run single trails of particle systems. The trails curve because of the rotating parameter. If I play with the parameters then hopefully I can create the same effect as the map.

//}

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
