#pragma once

#include "ofMain.h"

class Button {
	public:
		void setup(int x, int y, int w, int h, string text);
		void update();
		void draw();

		ofRectangle buttonBackground;
		string textContent;
};