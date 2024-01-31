#include <GL/gl.h>
#include<GL\glut.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
#define pi 3.142857
#include<iostream>
using namespace std;
float x = 100;
float y = 200;
float dy = 1.0;

void myInit()
{
    glClearColor(128.0f / 255.0f, 0, 0, 1.0f);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0, 500, 0, 500, -10.0, 10.0);
}

void circle(float x, float y)
{
    float x1, y1, x2, y2;
    float radius = 100;
    x1 = x;
    y1 = y;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(253, 253, 229);
    glVertex2f(x1, y1);

    float angle;
    for (angle = 0; angle <= 360; angle += 0.5)
    {
        x2 = x1 + sin((angle * 3.1416) / 180) * radius;
        y2 = y1 + cos((angle * 3.1416) / 180) * radius;
        glVertex2f(x2, y2);
    }

    glEnd();
}
void circleRe(int x, int y, int r, int g, int b)
{
    float x1, y1, x2, y2;
    float radiusx = 550;
    float radiusy = 120;
    x1 = x;
    y1 = y;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(r, g, b);
    glVertex2f(x1, y1);

    float angle;
    for (angle = 0; angle <= 360; angle += 0.1)
    {
        int tx = rand() % 2;
        int ty = rand() % 70;
        x2 = tx + x1 + sin((angle * 3.1416) / 180) * radiusx;
        y2 = ty + y1 + cos((angle * 3.1416) / 180) * radiusy;
        glVertex2f(x2, y2);
    }

    glEnd();
}
void circle_kon(int h, int k, int rx,int ry)
{
    glBegin(GL_POLYGON);
    for(int i=1; i<=360; i++)
    {
        glVertex2f(h+rx*cos(3.14159*i/180),k+ry*sin(3.14159*i/180));
    }
    glFlush();

}

void display(void)
{

glClear (GL_COLOR_BUFFER_BIT);

//River
glColor3ub (70,130,180);
glBegin(GL_POLYGON);
glVertex2d (0,0);
glVertex2d (450,0);
glVertex2d (450,275);
glVertex2d (0,275);
glEnd();

//Boat1
glColor3ub (0,0,128);
glBegin(GL_POLYGON);
glVertex2d (x+125,30);
glVertex2d (x+175,30);
glVertex2d (x+200,50);
glVertex2d (x+100,50);
glEnd();

glColor3ub (128,0, 0);
glLineWidth(10);
glBegin(GL_LINES);
glVertex2d (x+150, 50);
glVertex2d (x+150, 80);
glEnd();

glColor3ub (85,107,47);
glBegin(GL_POLYGON);
glVertex2d (x+120,50);
glVertex2d (x+180,50);
glVertex2d (x+170,70);
glVertex2d (x+130,70);
glEnd();

glColor3ub (0,100,0);
glBegin(GL_POLYGON);
glVertex2d (x+130,80);
glVertex2d (x+170,80);
glVertex2d (x+170,130);
glVertex2d (x+130,130);
glEnd();

//Boat2
glColor3ub (0,0,0);
glBegin(GL_POLYGON);
glVertex2d (x,150);
glVertex2d (x+50,150);
glVertex2d (x+70,165);
glVertex2d (x-20,165);
glEnd();

glColor3ub (128,0, 0);
glLineWidth(10);
glBegin(GL_LINES);
glVertex2d (x, 165);
glVertex2d (x, 198);
glEnd();

glColor3ub (218,165,32);
glBegin(GL_POLYGON);
glVertex2d (x-5,165);
glVertex2d (x+55,165);
glVertex2d (x+50,180);
glVertex2d (x,180);
glEnd();

//Wave1
glColor3ub(255, 255, 255);
circle_kon(x+10, y-65, 17, 11);
glEnd();
glColor3ub(70,130,180);
circle_kon(x+10, y-67, 17, 11);
glEnd();

glColor3ub(255, 255, 255);
circle_kon(x+40, y-65, 17, 11);
glEnd();
glColor3ub(70,130,180);
circle_kon(x+40, y-67, 17, 11);
glEnd();

//Wave2
glColor3ub(255, 255, 255);
circle_kon(x+125, y-182, 17, 11);
glEnd();
glColor3ub(70,130,180);
circle_kon(x+125, y-184, 17, 11);
glEnd();

glColor3ub(255, 255, 255);
circle_kon(x+155, y-182, 17, 11);
glEnd();
glColor3ub(70,130,180);
circle_kon(x+155, y-184, 17, 11);
glEnd();


//sky
glColor3ub (0,206,209);
glBegin(GL_POLYGON);
glVertex2d (0,225);
glVertex2d (450,225);
glVertex2d (450,400);
glVertex2d (0, 400);
glEnd();

//Bird
glColor3ub (0,0, 0);
glLineWidth(4);
glBegin(GL_LINES);
glVertex2d (50, 325);
glVertex2d (58, 329);
glEnd();

glColor3ub (0,0, 0);
glLineWidth(4);
glBegin(GL_LINES);
glVertex2d (58, 329);
glVertex2d (53, 335);
glEnd();

glColor3ub (0,0, 0);
glLineWidth(4);
glBegin(GL_LINES);
glVertex2d (58, 329);
glVertex2d (63, 330);
glEnd();

glColor3ub (0,128, 0);
glLineWidth(80);
glBegin(GL_LINES);
glVertex2d (0, 225);
glVertex2d (450, 225);
glEnd();

//hill 1
glColor3ub (160,82,45);
glBegin(GL_POLYGON);
glVertex2d (0,225);
glVertex2d (100, 225);
glVertex2d (50,275);
glVertex2d (0, 250);
glEnd();

//2
glColor3ub (210,105,30);
glBegin(GL_POLYGON);
glVertex2d (100,225);
glVertex2d (170,225);
glVertex2d (140,275);
glVertex2d (70,250);
glEnd();

//3
glColor3ub (184,134,11);
glBegin(GL_POLYGON);
glVertex2d (160,225);
glVertex2d (240,225);
glVertex2d (200,260);
glVertex2d (155,240);
glEnd();

//4
glColor3ub (210,105,30);
glBegin(GL_TRIANGLES);
glVertex2d (240,225);
glVertex2d (325,225);
glVertex2d (280,280);
glEnd();

//5
glColor3ub (205,133,63);
glBegin(GL_TRIANGLES);
glVertex2d (325,225);
glVertex2d (420,225);
glVertex2d (370,270);
glEnd();

//6
glColor3ub (210,105,30);
glBegin(GL_POLYGON);
glVertex2d (420,225);
glVertex2d (450,225);
glVertex2d (450,250);
glVertex2d (425,275);
glVertex2d (410,230);
glEnd();

//Tree
glColor3ub (139,69,19);
glPointSize(5.0);
glBegin(GL_POLYGON);
glVertex2d (75,225);
glVertex2d (80,225);
glVertex2d (80,260);
glVertex2d (75,260);
glEnd();

glColor3ub (0,100,0);
glPointSize(50.0);
glBegin(GL_TRIANGLES);
glVertex2d (50,260);
glVertex2d (105,260);
glVertex2d (78,290);
glEnd();

glColor3ub (0,128,0);
glPointSize(50.0);
glBegin(GL_TRIANGLES);
glVertex2d (50,270);
glVertex2d (105,270);
glVertex2d (78,300);
glEnd();

//sun
glColor3ub(255, 165, 0);
circle_kon(250, 350, 30, 30);
glEnd();

//cloud1
x += dy;
if (x >= 400 || x <= 100)
dy *= -1;

glColor3ub(255, 255, 255);
circle_kon(x+50, 350, 20, 20);
glEnd();

glColor3ub(255, 255, 255);
circle_kon(x+60, 340, 20, 20);
glEnd();

glColor3ub(255, 255, 255);
circle_kon(x+25, 330, 20, 20);
glEnd();

//cloud2
glColor3ub(255, 255, 255);
circle_kon(x+150, 350, 20, 20);
glEnd();

glColor3ub(255, 255, 255);
circle_kon(x+160, 330, 20, 20);
glEnd();

glColor3ub(255, 255, 255);
circle_kon(x+140, 325, 20, 20);
glEnd();

glColor3ub(255, 0, 0);
circle_kon(x+150, 105, 11, 11);
glEnd();
glFlush ();
}


void init (void)
{
glClearColor (0.0, 0.0, 0.0, 0.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0, 400, 0, 400);

}

void update(int val)
{
    glutPostRedisplay();
    glutTimerFunc(40, update, 0);
}
int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (1000, 700);
glutInitWindowPosition (0, 0);
glutCreateWindow ("River Scene");
init();
glutDisplayFunc(display);
glutTimerFunc(45, update, 0);
update(0);
glutMainLoop();
return 0;
}
