#pragma once

#include "ofMain.h"
#include <vector>

class Renderer
{
public:
	~Renderer();

	void setup();
	void addImage(string);
	void draw();

	std::vector<ofImage> images;

	int image_width;
	int image_height;

	int offset_vertical;
	int offset_horizontal;
};

