#include "Drawings.h"
#include <stdbool.h>
#include <math.h>
#define True true 
#define False false

void Circle(float radius, float no_of_points, float center_x, float center_y)
{
 	Init( center_x, center_y, 0 );		// Move to the center (facing right)
	int k;
	float increment=2*M_PI/no_of_points;
	PenDown(false);
	Forward(radius);
	Left(90);
	PenDown(true);
	for(k=0;k<no_of_points;k++)
	{
	    Forward(radius*increment);
	    Left(increment*180/M_PI);
	}
 
}

void square(float size, float center_x, float center_y)
{
 	Init( center_x, center_y, 0 );		// Move to the center (facing right)

	PenDown(false);
	Forward(size/2);
	PenDown(true);
	
	Left(90);
	Forward(size/2);

	Left(90);
	Forward(size);
	
	Left(90);
	Forward(size);
	
	Left(90);
	Forward(size);
	
	Left(90);
	Forward(size/2);
	

}

void Square()
{
	ClearScreen();
	Init( 250, 250, 0 );		// Move to the center (facing right)
	BGColor( 0, 0, 0 );		// Set Background color black
	LineColor( 1 , 1, 1 );		// Set Line color white
	PenDown( False );		// Move without drawing
	Forward( 50 );			// Move forward (right) 50 units
	Left( 90 );			// Turn left 90 degrees (facing up)
	PenDown ( True );		// Start Drawing

	//ClearScreen();	

	Forward( 50 );			// Move forward (up) 50 units
	Left( 90 );			// Turn left 90 degrees (facing left)
	//BGColor(1,0,0);
	Forward( 100 );			// ...
	Left( 90 );

	Forward( 100 );
	Left( 90 );
	Forward( 100 );
	Left( 90 );
	
	//BGColor(1,1,0);

	Forward( 50 );
	

  	//ClearScreen();

}




/*


void Original1()
{
	ClearScreen();
	float radius=50.0;
	int no_of_points=100; 
	Circle(radius,no_of_points,200,250);

	Init(250,250,90);
	Forward(radius);
	Left(90);
	Forward(2*radius);
	Left(90);
	Forward(2*radius);
	Left(90);
	Forward(2*radius);
	Left(90);
	Forward(radius);

	
	Init(250,250,180);
	Forward(2*radius);
	
	Init(250-radius,250+radius,270);
	Forward(2*radius);

	Init(250,250-radius,135);
	Forward(2*sqrt(2)*radius);

  
	Init(250,250+radius,225);
	Forward(2*sqrt(2)*radius);
	
	
}
*/

void Original1()
{
	ClearScreen();
	BGColor( 0, 0, 0 );		// Set Background color black
	float radius=50.0;
	int no_of_points=100; 
	//Circle(radius,no_of_points,200,250);

	
	float x=250;
	float y=250;
	Init(x,y,0);

	int no_of_circles=50;
	float angle=360/no_of_circles;
	float theta=0;
	int i;
	int radius_inner=70;
	for(i=0;i<no_of_circles;i++)
	{
	   
	  if(i%2==0)
	  {
	    	LineColor(1,1,0);
	  }
	  else
	  {
	    	LineColor(0,1,1);
	  }


	  Circle(radius,no_of_points,x+radius_inner*cos(theta*M_PI/180),y+radius_inner*sin(theta*M_PI/180));
	   theta=theta+angle;
	   //Square();
	}
	
	
	theta=0;
	LineColor(0.7,0.2,0.8);
	float new_radius=(radius_inner+radius)+30;
	no_of_circles=100;
	angle=360/no_of_circles;
	for(i=0;i<no_of_circles+200;i++)
	{
	  
	  Circle(30,no_of_points,x+new_radius*cos(theta*M_PI/180),y+new_radius*sin(theta*M_PI/180));	  
	  theta=theta+angle;
	  
	}
	
	/*
	Init(250,250,90);
	Forward(radius);
	Left(90);
	Forward(2*radius);
	Left(90);
	Forward(2*radius);
	Left(90);
	Forward(2*radius);
	Left(90);
	Forward(radius);

	
	Init(250,250,180);
	Forward(2*radius);
	
	Init(250-radius,250+radius,270);
	Forward(2*radius);

	Init(250,250-radius,135);
	Forward(2*sqrt(2)*radius);

  
	Init(250,250+radius,225);
	Forward(2*sqrt(2)*radius);
	
	*/
}

void Original2()
{
	ClearScreen();
	BGColor( 0, 0, 0 );		// Set Background color black
	
	LineColor(1,1,1);	
	
	Circle(50,200,250,250);
	square(50,250,250);
	square(100,250,250);

	Circle(50,200,300,250);
	square(50,300,250);
	square(100,250,250);

	Circle(50,200,200,250);
	square(50,200,250);
	square(100,200,250);
	
	Circle(50,200,250,200);
	square(50,250,200);
	square(100,250,200);

	Circle(50,200,250,300);
	square(50,250,300);
	square(100,250,300);
	
	square(200,250,250);
	Circle(100,200,250,250);
	
	Circle(sqrt(2)*100,200,250,250);

	
	//Forward(100);
	//Backward(400);
	
}

void Example()
{
	// For Instructor/TA to fill
}
