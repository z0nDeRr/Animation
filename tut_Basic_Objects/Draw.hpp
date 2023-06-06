#include <stdio.h>
#ifndef DrawLib_hpp
#define DrawLib_hpp
#include <cmath>
#include "Figure.h"
#include "FirstScene.hpp"
#include "SecondScene.hpp"
#include "ThirdScene.hpp"


void renderScene(void);
//void firstScene(Figure &d);
//void SecondScene();
void DrawSpaceboard(Figure& f);
//void standOne(Figure &s);

void Oblako(Figure& o);
void Burn(Figure& B);
void animate(int value);
void drawAnima();
void FirstBackground();

void ThirdBackground();
void FourthBackground();
void FifthBackground();


#endif 