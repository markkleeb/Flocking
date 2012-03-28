#include "testApp.h"


//--------------------------------------------------------------
void testApp::setup(){
    
     i.loadImage("shiffman.png");    
    i.resize(30,40);
    
    startX = 1200;
    startY = 650;
    ofSetFrameRate(60);
	
    ofSetLogLevel(OF_LOG_VERBOSE);
	    
    newPath();
    
    mouse.x = ofGetMouseX();
    mouse.y = ofGetMouseY();
        
 
        
    
    

}

//--------------------------------------------------------------
void testApp::update(){
    
    ofBackground(0, 0, 0);
    
    
    for(int i=0; i<boids.size(); i++)
	{
	
      
            
            boids[i].intersects(tblobs, path);
            boids[i].update();
            
        
        
    
        
        
        
        if(boids[i].loc.x < 50 && boids[i].loc.y < 200){
            boids.erase(boids.begin() + i);
        }
      
    }

}

//--------------------------------------------------------------
void testApp::draw(){
    
    path->draw();


     
    
    
    ofSetColor(255, 255, 255);
    
//    cout << " " << ofGetFrameNum();
    
    if(ofGetFrameNum()%5 == 1){
        Boid b;
		boids.push_back( b );

    }
	
	for(int i=0; i<boids.size(); i++) {
		boids[i].draw();
        
            
        
	}
    
    for(int j=0; j<tblobs.blobs.size(); j++){
        
        tblobs.blobs[j].setImage(&i);
        tblobs.blobs[j].draw();
    
        
    }
    
  
   
       

}

//--------------------------------------------------------------
void testApp::keyPressed(int key){
    switch (key) {
		
		case'p':
        
            for(int i = 0; i < boids.size(); i++)
                {
                boids[i].debug = true;
                }
            
			break;
			
        case 'n':
            boids.push_back(Boid());
            break;
        
        case 'd':
            for(int i = 0; i < boids.size(); i++)
            {
                boids[i].debug = false;
            }
			break;
            
            case '.':
            for(int i = 0; i < boids.size(); i++)
            {
                boids[i]._wander = true;
            }
            
			break;
            
        case ',':
            for(int i = 0; i < boids.size(); i++)
            {
                boids[i]._wander = false;
            }
            
			break;


            
            
	}


}

//--------------------------------------------------------------
void testApp::keyReleased(int key){
   
}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

    tblobs.addBlob(x,y);
    
  
    
   
    
}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

 
}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}

//--------------------------------------------------------------



void testApp::newPath() {
    
    float offset = 60;
   path = new Path();
    path->addPoint(startX, startY);
    path->addPoint(500, 725);
    path->addPoint(150, 650);
    path->addPoint(150, 500);
    path->addPoint(500, 400);
    path->addPoint(1100, 400);
    path->addPoint(1100, 100);
    path->addPoint(400, 100);
    path->addPoint(100, 250);
    path->addPoint(0, 0);
    
    
}

