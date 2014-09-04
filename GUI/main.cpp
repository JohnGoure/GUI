//
//  main.cpp
//  GUI
//
//  Created by John Goure on 9/4/14.
//  Copyright (c) 2014 Framed Games. All rights reserved.
//


#include <iostream>
#include <OpenAL/al.h>
#include <OpenAL/alc.h>
#include <OpenGL/gl.h>
#include <GLUT/GLUT.h>

using namespace std;

const int WINDOW_WIDTH = 1200;
const int WINDOW_HEIGHT = 720;

const char* WINDOW_TITLE = "OOP Assignment 2 Window";

void display ();


int main(int argc, char * argv[])
{
    
    glutInit(&argc, argv);
    glutInitWindowPosition(0, 0);
    glutInitWindowSize(WINDOW_WIDTH, WINDOW_HEIGHT);
    glutInitDisplayMode(GLUT_RGBA | GLUT_DOUBLE | GLUT_DEPTH);
    
    glutCreateWindow(WINDOW_TITLE);
    
    glutDisplayFunc(display);
    
    glutMainLoop();
    
    
    
    return 0;
}


void display() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();
    
    glBegin(GL_TRIANGLES);
    
    glColor3f(1.0, 0.0, 0.0);
    glVertex2f(-1, -1);
    glColor3f(0.0, 1.0, 0.0);
    glVertex2f(0.0, 1);
    glColor3f(0.0, 0.0, 1.0);
    glVertex2f(1, -1);
    
    glEnd();
    
    glutSwapBuffers();
    
}
