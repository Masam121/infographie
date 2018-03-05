#pragma once

#include "ofMain.h"

class Button {
	public:
		Button(int x, int y, int w, int h, void(*function)(), string text);
		void draw();
		void setColorText(int r, int g, int b);
		void setColorBackground(int r, int g, int b);
		void isClicked(int x, int y);

		ofRectangle buttonBackground;
		string textContent;
		int xPos, yPos, width, height;
		int redText = 255;
		int greenText = 255;
		int blueText = 255;
		int redBackground = 0;
		int greenBackground = 0;
		int blueBackground = 0;
		void(*onClickFunction)();
};