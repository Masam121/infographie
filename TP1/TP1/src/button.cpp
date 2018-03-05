#include "button.h"

Button::Button(int x, int y, int w, int h, void (*function)(), string text) {
	xPos = x;
	yPos = y;
	width = w;
	height = h;
	textContent = text;
	onClickFunction = function;
}

void Button::setColorText(int r, int g, int b) {
	redText = r;
	greenText = g;
	blueText = b;
}

void Button::setColorBackground(int r, int g, int b) {
	redBackground = r;
	greenBackground = g;
	blueBackground = b;
}

void Button::draw() {
	ofSetColor(redBackground, greenBackground, blueBackground);
	if (width < (textContent.length() * 8) + 20) {
		width = textContent.length() * 8 + 20;
	}
	if (height < 20) {
		height = 20;
	}
	ofDrawRectangle(xPos, yPos, width, height);
	ofSetColor(redText, greenText, blueText);
	ofDrawBitmapString(textContent, xPos + (width - (textContent.length() * 8)) / 2 , yPos + (height + 11) / 2);
	ofSetColor(255, 255, 255);
}

void Button::isClicked(int x, int y) {
	if ((x >= xPos) && (y >= yPos) && (x <= xPos + width) && (y <= yPos + height)) {
		(*onClickFunction) ();
	}
}