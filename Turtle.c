#include "Turtle.h"
#include <GL/glut.h>
#include <math.h>
#include <stdbool.h>
float x=0;
float y=0;
float theta=0;
bool draw=true;

void Init(float _x,float _y, float _theta)
{
	//Implement this function
/*	
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
 	glOrtho(0.0, 500.0,0.0, 500.0,0.0,0.0);
 	*/
//	x=_x/cos(_theta*3.14/180);
//	y=_y/sin(_theta*3.14/180);
	x=_x;
	y=_y;
	theta=_theta;
	//BGColor(0,0,0);
}

void Forward(float dist)
{
	//Implement this function
	//printf("hello\n");
	if(draw)
	{  
	  //printf("hello\n");
	  glBegin(GL_LINES);
	  glVertex2f(x,y);
	  glVertex2f(x+dist*cos(theta*M_PI/180),y+dist*sin(theta*M_PI/180));
	  glEnd();
	  glFlush();
	}
	x=x+dist*cos(theta*M_PI/180);
	y=y+dist*sin(theta*M_PI/180);
	//theta=arctan(x/y);

}

void Backward(float dist)
{
	//Implement this function
	//theta=180+theta;
	Forward(-dist);

/*	
    if(draw)
    {
	glBegin(GL_LINES);
	glVertex2f(x,y);
	glVertex2f(x-dist*cos(theta*M_PI/180),y-dist*sin(theta*M_PI/180));
	glEnd();
	glFlush();
    }
	y=y-dist*sin(theta*M_PI/180);
	x=x-dist*cos(theta*M_PI/180);
	//theta=arctan(x/y);
  */  
}

void Right(float _theta)
{
	//Implement this function
	theta=theta-_theta;
	
}

void Left(float _theta)
{
	//Implement this function
	theta=theta+_theta;
}

void PenDown( bool down ) 
{
	//Implement this function
	draw=down;
}

void LineColor(float r,float g, float b)
{
	//Implement this function
	glColor3f(r,g,b);
}

void BGColor(float r,float g, float b)
{
	//Implement this function
	glClearColor(r, g, b,0.0);
	//glFlush();
	//glClearDepth(0.5);
	//glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glClear(GL_COLOR_BUFFER_BIT);
}

void LineWidth( float width ) 
{
	//Implement this function
	glLineWidth(width);
}

void ResetPosition() 
{
	//Implement this function
	x=0.0;
	y=0.0;
	theta=0.0;
}

void ClearScreen()
{
	//Implement this function
	glClearColor(0, 0, 0,0.0);
	glClear(GL_COLOR_BUFFER_BIT);
}
