//
//  walker.hpp
//  wk09_hwA_chesj445
//
//  Created by Jeana Chesnik on 11/3/16.
//
//

#ifndef walker_hpp
#define walker_hpp

#include "ofMain.h"

//creating the class Walker
class Walker {
    
    int posx;
    int posy;
    
//every class must have a constructor so create the constructor
    Walker () {
        posx = ofGetWidth()/2;
        posy = ofGetHeight()/2;
        
    }
    
    //we've given it data, but now we have to add movement/functionality. We're going to add two functions
    
    void display (){
        stroke();
        ofPoint(x,y);
        
    }
    
    void step (){
        int choice = int(ofRandom(4));
        
        if(choice == 0) {
            x++;
        } else if (choice == 1) {
            x--;
        } else if (choice == 2) {
            y++;
        } else {
            y--;
        }
    }
    
}
};

//#endif /* walker_hpp */
