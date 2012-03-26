//
//  totalBlobs.cpp
//  Flocking
//
//  Created by Mark Kleback on 3/24/12.
//  Copyright (c) 2012 Kleebtronics, Inc. All rights reserved.
//

#include <iostream>
#include "totalBlobs.h"


totalBlobs::totalBlobs(){
   
    
}

void totalBlobs::addBlob(int x, int y){
    
    Blob b;
    b.setPosition(x, y);
   // b.setImage(&i);
    blobs.push_back(b);
    
    
}