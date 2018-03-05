#include "button.h"

void Button::setup(int x, int y, int w, int h, string text) {
	buttonBackground = ofRectangle(x, y, w, h);
	textContent = text;
}

void Button::update() {

}
void Button::draw() {
	ofDrawBitmapString(textContent, buttonBackground.getPosition.getX(), buttonBackground.getPosition.getY());

}