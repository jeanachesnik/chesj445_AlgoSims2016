//
//  JCObj.hpp
//  MyObjectArray_Attempt1
//
//  Created by Jeana Chesnik on 9/15/16.
//
//

#ifndef JCObj_hpp
#define JCObj_hpp

#include "ofMain.h"

class JCObj {
public:
    
    void setSrc(float _x, float _y);
    void setDst(float _x, float _y);
    
    
    
    void powUpdatePct(float _pct, float _shaper);
    
    void draw();
    
 // ask Regina about why it's labeled private, does it mean local vs. global class?
private:
    
    ofPoint src, dst;
    ofPoint pos;
};

#endif /* JCObj_hpp */
