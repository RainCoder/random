#include "ofApp.h"
#include <random>

//--------------------------------------------------------------
void ofApp::setup(){
	
std::random_device rd; 
std::mt19937 gen(rd());


std::uniform_int_distribution<> uniformxaxis(0, 1200);
std::uniform_int_distribution<> uniformyaxis(0,  970);


std::normal_distribution<float> normxaxis(1000,15);
std::normal_distribution<float> normyaxis(800,15);

for(int i=0; i<20; i++){
    jewel.load("diamond.png");	
	X.push_back(normxaxis(gen));
	Y.push_back(normyaxis(gen));	

}

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
ofBackground(0);

for(auto i = 0u; i < X.size(); i++)
 {
   jewel.draw(X[i], Y[i]);
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
