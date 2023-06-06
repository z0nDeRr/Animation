#include "FifthScene.hpp"
#include "Figure.h"
#include "Draw.hpp"
#include "GL/freeglut.h"

void FifthBackground() {

	glColor3ub(0, 0, 0);
	glBegin(GL_QUADS); // небо
	glVertex2f(-2, 1);
	glVertex2f(2, 1);
	glVertex2f(2, -2);
	glVertex2f(-2, -2);

	glEnd();
	glPopMatrix();


	glColor3ub(211, 211, 211);
	glBegin(GL_QUADS); 
	glVertex2f(-1, 1.5);
	glVertex2f(-0.5,1.5);
	glVertex2f(-0.5,-1);
	glVertex2f(-1,-1);

	glEnd();
	glPopMatrix();
	glColor3ub(211, 211, 211);
	glBegin(GL_QUADS);
	glVertex2f(-1,0.2);
	glVertex2f(0, 0.2);
	glVertex2f(0, -0.2);
	glVertex2f(-1, -0.2);

	glEnd();
	glPopMatrix();
}