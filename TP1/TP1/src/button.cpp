#include "button.h"

void Button::setup(int x, int y, int w, int h, string text) {
	xPos = x;
	yPos = y;
	width = w;
	height = h;
	textContent = text;
}

void Button::update() {

}

void Button::setColor(int r, int g, int b) {
	red = r;
	green = g;
	blue = b;
}

void Button::draw() {
	ofSetColor(red, green, blue);
	ofDrawRectangle(xPos, yPos, width, height);
	ofSetColor(255, 255, 255);
}