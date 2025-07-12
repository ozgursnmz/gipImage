/*
 * gipEmptyPlugin.h
 *
 *  Created on: Mar 11, 2023
 *      Author: Noyan Culum
 *      Created by: kayra
 */

#ifndef SRC_GIPIMAGE_H_
#define SRC_GIPIMAGE_H_

#include "gBasePlugin.h"


class gipImage : public gBasePlugin{
public:
	gipImage();
	virtual ~gipImage();

	void setup() override;
	void update() override;
	void draw();

	void setPosition(int x, int y);
	void setImage(std::string path);
	void setSize(int width, int height);
	void setMirrorEffect();
	void setRotateDegree(float degree);

private:
	gImage image;
	int imagex, imagey, imagew, imageh;
	float rotatedeg;
};

#endif /* SRC_GIPIMAGE_H_ */
