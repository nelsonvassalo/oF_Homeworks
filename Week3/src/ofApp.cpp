#include "ofApp.h"
float lx;
float lxArr;


//--------------------------------------------------------------
void ofApp::setup(){
//    ofSetupOpenGL(600, 800, OF_WINDOW);
    ofBackground(0);
    lx = 11;

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofColor colorOne(0, 6, 41);
    ofColor colorTwo(8, 24, 121);
    
    ofBackgroundGradient(colorOne, colorTwo, OF_GRADIENT_LINEAR);

    
    
    //1 WTC
    ofSetColor(36, 50, 53);
    ofDrawRectangle(494, 420, 3, 70);
    ofSetColor(213, 245, 255);
    ofDrawTriangle(495, 493, 530, 800, 465, 800);
    ofSetColor(180, 206, 214);
    ofDrawTriangle(495, 493, 512, 493, 530, 800);
    ofSetColor(255, 255, 255);
    ofDrawTriangle(495, 493, 465, 800, 478 , 493);
   

    
    //Empire State Building
    
    ofSetRectMode(OF_RECTMODE_CORNER);
    ofSetColor(36, 50, 53);
    ofDrawRectangle(209, 18, 11, 214);
    ofSetColor(30, 50, 53);
    ofDrawRectangle(197, 230, 35, 137);
    ofSetColor(22, 50, 53);
    ofDrawRectangle(180, 366, 67, 11);
    ofSetColor(177, 165, 61);
    ofDrawRectangle(144, 375, 142, 406);
    
    ofSetLineWidth(5);
    ofSetColor(152, 142, 60);
    ofFill();
    for (lx= 150; lx < 290; lx+=10) {
        ofDrawLine(lx, 380, lx, 800);
    }
    
    ofSetColor(158,149,71);
    ofDrawRectangle(132, 476, 55, 114);
    ofSetColor(137,129,62);
    for (lx= 140; lx < 189; lx+=10) {
        ofDrawLine(lx, 480, lx, 588);
    }
    ofSetColor(158,149,71);
    ofDrawRectangle(244, 476, 55, 114);
    ofSetColor(137,129,62);

    for (lx= 252; lx < 300; lx+=10) {
        ofDrawLine(lx, 480, lx, 588);
    }
    ofSetColor(158,155,108);
    ofDrawRectangle(122, 588, 65, 222);
    ofSetColor(143,140,98);

    for (lx= 130; lx < 188; lx+=10) {
        ofDrawLine(lx, 592, lx, 800);
    }
    ofSetColor(158,155,108);
    ofDrawRectangle(244, 588, 65, 222);
    ofSetColor(143,140,98);

    for (lx= 250; lx < 310; lx+=10) {
        ofDrawLine(lx, 592, lx, 800);
    }

}

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
