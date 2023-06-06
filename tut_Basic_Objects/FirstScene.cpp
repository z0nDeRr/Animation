#include "FirstScene.hpp"
#include "Figure.h"
#include "Draw.hpp"
#include "GL/freeglut.h"
void FirstBackground() {

	glColor3ub(128, 166, 255);
	glBegin(GL_QUADS); // небо
	glVertex2f(-2, 1);
	glVertex2f(2, 1);
	glVertex2f(2, -2);
	glVertex2f(-2, -2);

	glEnd();
	glPopMatrix();

	glBegin(GL_QUADS); // земля
	glColor3ub(100, 200, 0);
	glVertex2f(-2, -2);
	glColor3ub(100, 200, 0);
	glVertex2f(-2, -0.5);
	glColor3ub(100, 200, 0);
	glVertex2f(2, -0.5);
	glColor3ub(100, 200, 0);
	glVertex2f(2, -2);

	glEnd();

	glBegin(GL_POLYGON); // горa
	glColor3ub(128,128,128);
	glVertex2f(0.4, -0.5);
	glColor3ub(128,128,128);
	glVertex2f(0.6, -0.23);
	glColor3ub(128, 128, 128);
	glVertex2f(0.72, -0.23);
	glColor3ub(128, 128, 128);
	glVertex2f(0.79, -0.18);
	glColor3ub(128, 128, 128);
	glVertex2f(0.87, -0.18);
	glColor3ub(255,255,255);
	glVertex2f(0.94, -0.18);
	glColor3ub(255,255,255);
	glVertex2f(1, 0);
	glColor3ub(128,128,128);
	glVertex2f(1, -0.5);


	glEnd();

	glBegin(GL_QUADS); // майнкрафт солнце
	glColor3ub(255, 255, 0);
	glVertex2f(-1, 1);
	glColor3ub(255, 255, 0);
	glVertex2f(-0.7, 1);
	glColor3ub(255, 255, 0);
	glVertex2f(-0.7, 0.7);
	glColor3ub(255, 255, 0);
	glVertex2f(-1, 0.7);
	glEnd();

	//Отрисовка стойки
	float x = -0.4, y = 0.8; // решеткf
	float x2 = -0.3, y2 = 0.7;

	float yy = 0.7;
	float yy1 = 0.8;
	glPushMatrix();
	glBegin(GL_LINE_STRIP); // Левая балка 
	glVertex2f(-0.4, 0.6);
	glVertex2f(-0.4, -0.93);
	glEnd();

	glBegin(GL_LINE_STRIP); // верхняя платформа
	glVertex2f(-0.3, 0.2);
	glVertex2f(0, 0.2);
	glEnd();

	glBegin(GL_LINE_STRIP); // Левая балка 
	glVertex2f(-0.3, 0.1);
	glVertex2f(0, 0.1);
	glEnd();

	glBegin(GL_LINE_STRIP); // правая балка 
	glVertex2f(-0.3, 0.6);
	glVertex2f(-0.3, -0.93);
	glEnd();

	glBegin(GL_LINES); // решетка внутри стойки
	for (float i = 0; i < 15; i++) { // цикл для решетки 2
		y = y - 0.1;
		y2 = y2 - 0.1;
		glVertex2f(x, y - 0.1);
		glVertex2f(x2, y2 - 0.1);
	}
	for (float i = 0; i < 15; i++) { // цикл для решетки 1
		yy = yy - 0.1;
		yy1 = yy1 - 0.1;
		glVertex2f(x, yy - 0.1);
		glVertex2f(x2, yy1 - 0.1);

	}

	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(128,84,80);
	glVertex2f(-.42, 0.09);
	glVertex2f(-.42, -0.04);
	glVertex2f(-.28, 0.09);
	glVertex2f(-.28, -0.04);
	glVertex2f(-.42, -0.04);

	glEnd(); 

}