#include "SecondScene.hpp"
#include "Figure.h"
#include "Draw.hpp"
#include "GL/freeglut.h"
void SecondBackground() {

	glPushMatrix();
	glBegin(GL_QUADS);//фон
	glColor3ub(0, 143, 196);
	glVertex2f(-2, 1);
	glColor3ub(0, 143, 196);
	glVertex2f(2, 1);
	glColor3ub(0, 143, 196);
	glVertex2f(2, -2);
	glColor3ub(0, 143, 196);
	glVertex2f(-2, -2);
	glEnd();
	glPopMatrix();

	glBegin(GL_QUADS); // майнкрафт солнце
	glColor3ub(255, 255, 0);
	glVertex2f(-1, 0.4);
	glColor3ub(255, 255, 0);
	glVertex2f(-0.7, 0.4);
	glColor3ub(255, 255, 0);
	glVertex2f(-0.7, 0);
	glColor3ub(255, 255, 0);
	glVertex2f(-1, 0);
	glEnd();
}