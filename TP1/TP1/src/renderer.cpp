#include "renderer.h"


void Renderer::setup() {
	ofSetFrameRate(0);

	offset_vertical = 100;
	offset_horizontal = 100;

	// définir la résolution des images de destination
	image_width = 200;
	image_height = 200;
}


Renderer::~Renderer()
{
}


void Renderer::draw()
{
	for (int i = 0; i < images.size(); i++) {
		images[i].draw(
			offset_horizontal,
			offset_vertical,
			image_width,
			image_height);
	}
}


void Renderer::addImage(string imagePath) {
	ofImage newImage;
	newImage.load(imagePath);
	images.push_back(newImage);
}
