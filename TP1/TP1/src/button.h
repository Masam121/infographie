#pragma once

#include "ofMain.h"

class Button {
	public:
		void setup(int x, int y, int w, int h, string text);
		void update();
		void draw();
		void setColor(int r, int g, int b);

		ofRectangle buttonBackground;
		string textContent;
		int xPos, yPos, width, height;
		int red = 0;
		int green = 0;
		int blue = 0;
};