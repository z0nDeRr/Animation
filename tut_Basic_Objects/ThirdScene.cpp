#include "ThirdScene.hpp"
#include "Figure.h"
#include "Draw.hpp"
#include <array>
#include "GL/freeglut.h"
void ThirdBackground() {

	glPushMatrix();
	glBegin(GL_QUADS);
	glColor3ub(29, 55, 66);
	glVertex2f(-2, 1);
	glColor3ub(29, 55, 66);
	glVertex2f(2, 1);
	glColor3ub(18, 143, 196);
	glVertex2f(2, -2);
	glColor3ub(18, 143, 196);
	glVertex2f(-2, -2);
	glEnd();
	glPopMatrix();

	glBegin(GL_QUADS); // майнкрафт солнце
	glColor3ub(255, 255, 0);
	glVertex2f(-1, -0.8);
	glColor3ub(255, 255, 0);
	glVertex2f(-0.7, -0.8);
	glColor3ub(255, 255, 0);
	glVertex2f(-0.7, -1);
	glColor3ub(255, 255, 0);
	glVertex2f(-1, -1);
	glEnd();
}
