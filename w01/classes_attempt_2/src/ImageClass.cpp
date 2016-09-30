//
//  ImageClass.cpp
//  classes_attempt_2
//
//  Created by Jeana Chesnik on 9/15/16.
//
//

#include "ImageClass.hpp"


void ImageClass::setup(){
    image.loadImage("flower.jpg");
    
}

void ImageClass::draw(){
    image.draw(100,100);
}

