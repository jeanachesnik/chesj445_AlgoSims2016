//
//  MyObj.hpp
//  wk01_hwA_chesj445
//
//  Created by Jeana Chesnik on 9/18/16.
//
//

#ifndef MyObj_hpp
#define MyObj_hpp

#include "ofMain.h"

class MyObj {
    
public:
    
    void setSrc (float _x, float _y);
    void setDst (float _x, float _y);
    
    void powUpdatePct (float _pct, float _shaper);
    
    void draw ();
    
private:
    
    ofPoint src,dst;
    ofPoint pos;
    
    

};


#endif /* MyObj_hpp */
