/*
 * gipEmptyPlugin.cpp
 *
 *  Created on: Mar 11, 2023
 *      Author: Noyan Culum
 *      Created by: kayra
 */

#include "gipImage.h"


gipImage::gipImage() {
}

gipImage::~gipImage() {
}

void gipImage::setup() {
	setImage("foto1.jpeg");


	imagew = image.getWidth();
	imageh = image.getHeight();

	setSize(500, 500);
	setPosition(100,100);
	setMirrorEffect();
	setRotateDegree(-90.0);

}

void gipImage::update() {
}

void gipImage::draw() {
	image.draw(imagex, imagey, imagew, imageh, rotatedeg);
}

void gipImage::setPosition(int x, int y) {
	imagex = x;
	imagey = y;
}

void gipImage::setImage(std::string path) {
	image.loadImage(path);
}

void gipImage::setSize(int width, int height) {
	imagew = width;
	imageh = height;
}

void gipImage::setMirrorEffect() {
	imagex = imagex + imagew;
	imagew = - imagew;
}

void gipImage::setRotateDegree(float degree) {
	rotatedeg = degree;
}
