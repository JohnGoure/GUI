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
    // Initialize GLUT
    glutInit(&argc, argv);
    
    // Position where you want the window to be on the screen
    glutInitWindowPosition(0, 0);
    
    // Set the window width and height
    glutInitWindowSize(WINDOW_WIDTH, WINDOW_HEIGHT);
    
    // Set the windows display color and refresh rate
    glutInitDisplayMode(GLUT_RGBA | GLUT_DOUBLE | GLUT_DEPTH);
    
    // Set a title for the window
    glutCreateWindow(WINDOW_TITLE);
    
    // Call a function to display something inside the window
    glutDisplayFunc(display);
    
    // Run a continuous loop that displays the window
    glutMainLoop();
    
    
    
    return 0;
}


void display() {
    // set the refresh rate of the object being displayed inside the window
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    
    // I haven't figured this part out yet
    glLoadIdentity();
    
    // Draws a triangle in the window
    glBegin(GL_TRIANGLES);
    
    // Sets the Triangles Color
    glColor3f(1.0, 0.0, 0.0);
    glVertex2f(-1, -1);
    glColor3f(0.0, 1.0, 0.0);
    glVertex2f(0.0, 1);
    glColor3f(0.0, 0.0, 1.0);
    glVertex2f(1, -1);
    
    // I don't know
    glEnd();
    
    // I don't know
    glutSwapBuffers();
    
}
