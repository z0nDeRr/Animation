#define _USE_MATH_DEFINES
#include "Draw.hpp"
#include "Figure.h"
#include "GL/freeglut.h"
#include <cmath>

void DrawSpaceboard(Figure& f) { // Космический корабль
	glPushMatrix();
	glTranslatef(f.pos.x, f.pos.y, 0);

	glColor3ub(255, 255, 255);
	glBegin(GL_POLYGON); // Основание ракеты
	glVertex2f(-0.06, +0.0);
	glVertex2f(-0.06, +0.4);
	glVertex2f(+0.06, +0.4);
	glVertex2f(+0.06, +0.028);
	glVertex2f(+0.06, -0.77);
	glVertex2f(+0.05, -0.8);
	glVertex2f(-0.05, -0.8);
	glVertex2f(-0.06, -0.77);
	glVertex2f(+0.06, +0.0);

	glEnd();

	glColor3ub(255, 0, 0);
	glBegin(GL_POLYGON); // Нос ракеты
	glVertex2f(-0.06, +0.4);
	glVertex2f(-0.04, +0.5);
	glVertex2f(-0.02, +0.54);
	glVertex2f(+0.02, +0.54);
	glVertex2f(+0.04, +0.5);
	glVertex2f(+0.06, +0.4);

	glEnd();

	glColor3ub(0, 0, 0);
	glBegin(GL_POLYGON); // Турбина основания
	glVertex2f(+0.05, -0.8);
	glVertex2f(+0.1, -0.9);
	glVertex2f(-0.1, -0.9);
	glVertex2f(-0.05, -0.8);

	glEnd();




	glColor3ub(101, 99, 120);
	glBegin(GL_POLYGON); // крыло
	glVertex2f(-0.06, -0.3);
	glVertex2f(-0.06, -0.3);
	glVertex2f(-0.25, -0.6);
	glVertex2f(-0.25, -0.67);
	glVertex2f(-0.06, -0.67);

	glEnd();



	glColor3ub(151, 178, 184);
	glBegin(GL_POLYGON); // турбина
	glVertex2f(-0.18, -0.67);
	glVertex2f(-0.2, -0.75);
	glVertex2f(-0.11, -0.75);
	glVertex2f(-0.13, -0.67);

	glEnd();

	glColor3ub(101, 99, 120);
	glBegin(GL_POLYGON);
	glVertex2f(+0.06, -0.3);
	glVertex2f(+0.06, -0.3);
	glVertex2f(+0.25, -0.6);
	glVertex2f(+0.25, -0.67);
	glVertex2f(+0.06, -0.67);

	glEnd();

	glColor3ub(151, 178, 184);
	glBegin(GL_POLYGON); // турбина
	glVertex2f(+0.18, -0.67);
	glVertex2f(+0.2, -0.75);
	glVertex2f(+0.11, -0.75);
	glVertex2f(+0.13, -0.67);

	glEnd();
	glPopMatrix();
}





void Oblako(Figure& o) { //части справа налево, снизу вверх

	float x, y;
	float cnt = 30;
	float l = 0.08;
	float a = M_PI * 2 / cnt;
	glPushMatrix();
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(255, 255, 252);
	glVertex2f(0.5, 0.7);
	for (int i = -1; i < cnt; i++) {
		x = sin(a * i) * l;
		y = cos(a * i) * l;
		glVertex2f(x + 0.5, y + 0.7);
	}
	glEnd();

	float x1, y1;
	float cnt1 = 30;
	float l1 = 0.09;
	float a1 = M_PI * 2 / cnt1;
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(255, 255, 252);
	glVertex2f(0.4, 0.7);
	for (int i = -1; i < cnt1; i++) {
		x1 = sin(a1 * i) * l1;
		y1 = cos(a1 * i) * l1;
		glVertex2f(x1 + 0.4, y1 + 0.7);
	}
	glEnd();

	float x2, y2;
	float cnt2 = 30;
	float l2 = 0.08;
	float a2 = M_PI * 2 / cnt2;
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(255, 255, 252);
	glVertex2f(0.5, 0.7);
	for (int i = -1; i < cnt2; i++) {
		x2 = sin(a2 * i) * l2;
		y2 = cos(a2 * i) * l2;
		glVertex2f(x2 + 0.3, y2 + 0.7);
	}
	glEnd();

	float x3, y3;
	float cnt3 = 30;
	float l3 = 0.07;
	float a3 = M_PI * 2 / cnt3;
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(255, 255, 252);
	glVertex2f(0.45, 0.8);
	for (int i = -1; i < cnt3; i++) {
		x3 = sin(a3 * i) * l3;
		y3 = cos(a3 * i) * l3;
		glVertex2f(x3 + 0.45, y3 + 0.8);
	}
	glEnd();

	float x4, y4;
	float cnt4 = 30;
	float l4 = 0.08;
	float a4 = M_PI * 2 / cnt4;
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(255, 255, 252);
	glVertex2f(0.36, 0.77);
	for (int i = -1; i < cnt4; i++) {
		x4 = sin(a4 * i) * l4;
		y4 = cos(a4 * i) * l4;
		glVertex2f(x4 + 0.36, y4 + 0.77);
	}
	glEnd();
	glPopMatrix();
}

void Burn(Figure& B) {
	float x, y;
	float cnt = 30;
	float l = 0.13;
	float a = M_PI * 2 / cnt;
	glPushMatrix();
	glTranslated(B.pos.x, B.pos.y, 0);
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(245, 90, 0);
	glVertex2f(0.0, -0.9);
	for (int i = -1; i < cnt; i++) {
		x = sin(a * i) * l;
		y = cos(a * i) * l;
		glVertex2f(x + .0, y + (-1.1));
	}
	glEnd();

	float x1, y1;
	float cnt1 = 30;
	float l1 = 0.1;
	float a1 = M_PI * 2 / cnt1;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(217, 195, 2);
	glVertex2f(0.0, -0.9);
	for (int i = -1; i < cnt1; i++) {
		x1 = sin(a1 * i) * l1;
		y1 = cos(a1 * i) * l1;
		glVertex2f(x1 + 0, y1 + (-1.1));
	}
	glEnd();

	float x2, y2;
	float cnt2 = 30;
	float l2 = 0.05;
	float a2 = M_PI * 2 / cnt2;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(217, 2, 2);
	glVertex2f(0.0, -0.9);
	for (int i = -1; i < cnt2; i++) {
		x2 = sin(a2 * i) * l2;
		y2 = cos(a2 * i) * l2;
		glVertex2f(x2 + .0, y2 + (-1.1));
	}
	glEnd();

	float x4, y4;
	float cnt4 = 30;
	float l4 = 0.06;
	float a4 = M_PI * 2 / cnt4;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(217, 195, 2);
	glVertex2f(-0.15, -0.75);
	for (int i = -1; i < cnt4; i++) {
		x4 = sin(a4 * i) * l4;
		y4 = cos(a4 * i) * l4;
		glVertex2f(x4 - 0.15, y4 + (-0.9));
	}
	glEnd();

	float x3, y3;
	float cnt3 = 30;
	float l3 = 0.03;
	float a3= M_PI * 2 / cnt3;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(217, 2, 2);
	glVertex2f(-0.15,-0.75);
	for (int i = -1; i < cnt3; i++) {
		x3 = sin(a3* i) * l3;
		y3 = cos(a3 * i) * l3;
		glVertex2f(x3-0.15,y3 + (-0.9));
	}
	glEnd();

	float x5, y5;
	float cnt5= 30;
	float l5 = 0.06;
	float a5 = M_PI * 2 / cnt4;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(217, 195, 2);
	glVertex2f(0.16, -0.75);
	for (int i = -1; i < cnt4; i++) {
		x5 = sin(a5* i) * l5;
		y5 = cos(a5 * i) * l5;
		glVertex2f(x5+0.16, y5+ (-0.9));
	}
	glEnd();

	float x6, y6;
	float cnt6 = 30;
	float l6 = 0.03;
	float a6 = M_PI * 2 / cnt3;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(217, 2, 2);
	glVertex2f(0.16, -0.75);
	for (int i = -1; i < cnt3; i++) {
		x3 = sin(a6 * i) * l6;
		y3 = cos(a6 * i) * l6;
		glVertex2f(x3 + 0.16, y3 + (-0.9));
	}
	glEnd();
	glPopMatrix();
}