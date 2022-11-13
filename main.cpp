#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include <math.h>
#define PI 3.1416


float windowHeight = 630;
float windowWidth =1200;

double sval=1;
bool flagScale=false;
double boat_move=0;
double bird_move=0;
double sun_move=0;
double cloud1_move=0;
double cloud2_move=0;


void drawFilledCircle(GLfloat x, GLfloat y, GLfloat radius){
	int i;
	int triangleAmount = 100;
	GLfloat twicePi = 2.0f * PI;


	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
}



void nouka(){



glPushMatrix();
glBegin(GL_QUADS);
    glColor3f(0.1,0.1,0.1);
    glVertex2f(0.0,13.0);
    glVertex2f(2.0,12);
    glVertex2f(4.0,12);
    glVertex2f(6.0,13.0);

glEnd();
glPopMatrix();

glBegin(GL_QUADS);
    glColor3f(0.9,0.0,0.0);
    glVertex2f(2.0,13.5);
    glColor3f(0.9,0.0,0.0);
    glVertex2f(1,13.0);
    glColor3f(0.9,0.4,0.1);
    glVertex2f(5.0,13.0);
    glColor3f(0.9,0.4,0.1);
    glVertex2f(4.0,13.5);

glEnd();
glPopMatrix();

}

void pakhi(){

glPushMatrix();
glBegin(GL_TRIANGLES);
    glColor3f(.1,0,0);
    glVertex2f(15,10);
    glVertex2f(15,9.5);
    glVertex2f(15.5,9.75);
glEnd();
glPopMatrix();

}

void khor(){

glPushMatrix();
glBegin(GL_QUADS);
    glColor3f(.6,.3,.1);
    glVertex2f(5.0,7.0);
    glVertex2f(5.0,5.5);
    glVertex2f(6.5,5.5);
     glVertex2f(6.5,7.0);
glEnd();
glPopMatrix();

glPushMatrix();
glBegin(GL_TRIANGLES);
    glColor3f(.6,.3,.1);
    glVertex2f(5.75,8);
    glVertex2f(5,7);
    glVertex2f(6.5,7);
glEnd();
glPopMatrix();

}

void kapor(){

glPushMatrix();
glBegin(GL_QUADS);
    glColor3f(.9,0.0,0.3);
    glVertex2f(8.4,5.7);
    glVertex2f(8.4,4.5);
    glVertex2f(9.0,4.5);
     glVertex2f(9.0,5.7 );
glEnd();
glPopMatrix();

}


void cloud1(){

glPushMatrix();
glColor3f(1.0,1.0,1.0);
drawFilledCircle(10,23,1.2);
glPopMatrix();

glPushMatrix();
glColor3f(1.0,1.0,1.0);
drawFilledCircle(11.5,23,1.5);
glPopMatrix();

glPushMatrix();
glColor3f(1.0,1.0,1.0);
drawFilledCircle(13,23,1.2);
glPopMatrix();

}

void cloud2(){

glPushMatrix();
glColor3f(1.0,1.0,1.0);
drawFilledCircle(8,21,1.2);
glPopMatrix();

glPushMatrix();
glColor3f(1.0,1.0,1.0);
drawFilledCircle(9.5,21,1.5);
glPopMatrix();

glPushMatrix();
glColor3f(1.0,1.0,1.0);
drawFilledCircle(11,21,1.2);
glPopMatrix();

}


void ghor(){

glPushMatrix();
glBegin(GL_QUADS);
    glColor3f(.7,.5,0.3);
    glVertex2f(9.5,9.5);
    glVertex2f(9.5,8.0);
    glVertex2f(11.0,8.0);
     glVertex2f(11.0,9.5);
glEnd();
glPopMatrix();

glPushMatrix();
glBegin(GL_TRIANGLES);
    glColor3f(1.0,0.5,0.1);
    glVertex2f(10.25,11.0);
    glVertex2f(9.0,9.5);
    glVertex2f(11.5,9.5);
glEnd();
glPopMatrix();


glPushMatrix();
glBegin(GL_QUADS);
    glColor3f(0.8,0.6,0.2);
    glVertex2f(10.0,9.0);
    glVertex2f(10.0,8.0);
    glVertex2f(10.5,8.0);
     glVertex2f(10.5,9.0);
glEnd();
glPopMatrix();


};

 void ghash(){
 glPushMatrix();
glBegin(GL_TRIANGLES);
    glColor3f(.1,.7,.4);
    glVertex2f(15,10);
    glVertex2f(15,9.5);
    glVertex2f(16.5,9.75);
glEnd();
glPopMatrix();

 }


void pahar(){

glPushMatrix();
glBegin(GL_TRIANGLES);
    glColor3f(0,.1,.1);
    glVertex2f(3.0,19.0);
    glColor3f(0,0.5,0.3);
    glVertex2f(0.0,15.0);
    glColor3f(0.1,0.9,0.2);
    glVertex2f(6.0,15.0);
glEnd();
glPopMatrix();

}

void bash(){

glPushMatrix();
glBegin(GL_QUADS);
    glColor3f(0.4,0.1,0.1);
    glVertex2f(6.5,6.0);
    glVertex2f(6.5,4.0);
    glVertex2f(6.80,4.0);
     glVertex2f(6.80,6.0);
glEnd();
glPopMatrix();


}


void Tree(){


glPushMatrix();
glBegin(GL_TRIANGLES);
    glColor3f(0,.2,.1);
    glVertex2f(24,11);
    glColor3f(0,.7,.1);
    glVertex2f(22,8);
    glColor3f(0,.7,.1);
    glVertex2f(26,8);
glEnd();
glPopMatrix();

glPushMatrix();
glBegin(GL_QUADS);
    glColor3f(0.3,0.5,0.1);
    glVertex2f(23,8);
    glColor3f(0,.7,.1);
    glVertex2f(22.5,7);
    glVertex2f(25.5,7);
     glVertex2f(25,8 );
glEnd();
glPopMatrix();

glPushMatrix();
glBegin(GL_QUADS);
    glColor3f(0.2,0.0,0.0);
    glVertex2f(23.5,7);
    glVertex2f(23.5,5);
    glVertex2f(24.5,5);
     glVertex2f(24.5,7 );
glEnd();
glPopMatrix();


}




void display(void)
{

glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
glMatrixMode( GL_PROJECTION );
glLoadIdentity();
gluOrtho2D(-1, 27  , -1,25);
glMatrixMode( GL_MODELVIEW );
glLoadIdentity();

 glViewport(0, 0 ,windowWidth ,windowHeight);

//sky
glPushMatrix();
glBegin(GL_QUADS);
    glColor3f(.9,.8,0);
    glVertex2f(0.0,26.0);
    glColor3f(.5,.2,1);
    glVertex2f(0.0,15.0);
    glColor3f(.9,.8,0);
    glVertex2f(26.0,15.0);
    glColor3f(1,.2,.5);

     glVertex2f(26.0,26.0);
glEnd();
glPopMatrix();

pahar();
glPushMatrix();
glTranslatef(5.0,0.0,0.0);
pahar();
glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(10.0,0.0,0.0);
pahar();
glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(15.0,0.0,0.0);
pahar();
glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(20.0,0.0,0.0);
pahar();
glEnd();
glPopMatrix();

//uporer nodi
glPushMatrix();
glBegin(GL_QUADS);
    glColor3f(0,.2,.5);
    glVertex2f(0.0,14.5);
    glColor3f(.1,.7,.9);
    glVertex2f(0.0,9.0);
    glColor3f(0,.8,.9);
    glVertex2f(26.0,9.0);
    glColor3f(0,.5,.8);
     glVertex2f(26.0,14.5 );
glEnd();
glPopMatrix();

//right mati and nodi
glPushMatrix();
glBegin(GL_QUADS);
    glColor3f(0,.3,0);
    glVertex2f(0.0,9.5);
    glColor3f(0,.6,.2);
    glColor3f(.6,.8,.2);
    glVertex2f(0.0,0.0);
    glColor3f(0.3,.5,.3);
    glVertex2f(26.0,0.0);
    glColor3f(0,.3,0);
     glVertex2f(26.0,9.0 );
glEnd();
glPopMatrix();


//left mati
glPushMatrix();
glBegin(GL_QUADS);
    glColor3f(0,.3,0);
    glVertex2f(0.0,10.0);
    glColor3f(0,.6,.2);
    glVertex2f(0.0,0.0);
    glColor3f(.6,.8,.2);
    glVertex2f(12.0,0.0);
    glColor3f(0,.3,0);
     glVertex2f(14.0,8.0 );
glEnd();
glPopMatrix();


//ghorer jalna dorja
glPushMatrix();
glBegin(GL_QUADS);
    glColor3f(0.1,0.4,0.8);
    glVertex2f(14.0,9.0);
    glVertex2f(13.0,4.0);
    glVertex2f(16.0,4.0);
     glVertex2f(17.0,9.0 );
glEnd();
glPopMatrix();

//paharer mati
glPushMatrix();
glBegin(GL_QUADS);
    glColor3f(0.4,0.2,0.0);
    glVertex2f(0.0,15.0);
    glVertex2f(0.0,14.5);
    glVertex2f(26.0,14.5);
     glVertex2f(26.0,15.0);
glEnd();
glPopMatrix();


 glPushMatrix();
  glTranslatef(boat_move,0,0);
  glTranslatef(6,0,0.0);
  //glTranslatef(boat_move,0,0);
  nouka();
  glEnd();
  glPopMatrix();

//tree er tringle
glPushMatrix();
glBegin(GL_TRIANGLES);
    glColor3f(0.3,0.5,0.1);
    glVertex2f(3.0,13.0);
    glVertex2f(0.0,10.0);
    glVertex2f(6.0,10.0);
glEnd();
glPopMatrix();

//tree square
glPushMatrix();
glBegin(GL_QUADS);
    glColor3f(0.3,0.5,0.1);
    glVertex2f(2.0,10.0);
    glVertex2f(1.0,8.0);
    glVertex2f(5.0,8.0);
     glVertex2f(4.0,10.0);
glEnd();
glPopMatrix();


glPushMatrix();
glBegin(GL_QUADS);
    glColor3f(0.4,0.2,0.0);
    glVertex2f(2.5,8.0);
    glVertex2f(2.5,5.0);
    glVertex2f(3.5,5.0);
     glVertex2f(3.5,8.0);
glEnd();
glPopMatrix();


glPushMatrix();
glBegin(GL_QUADS);
    glColor3f(0.4,0.2,0.0);
    glVertex2f(2.5,5.0);
    glVertex2f(2.0,4.0);
    glVertex2f(4.0,4.0);
     glVertex2f(3.5,5.0);
glEnd();
glPopMatrix();


//boro ghorer chal
glPushMatrix();
glBegin(GL_QUADS);
    glColor3f(1.0,0.7,0.0);
    glVertex2f(5.0,9.0);
    glVertex2f(4.0,7.0);
    glVertex2f(8.0,7.0);
     glVertex2f(9.0,9.0);
glEnd();
glPopMatrix();

glPushMatrix();
glBegin(GL_QUADS);
    glColor3f(1.0,0.7,0.0);
    glVertex2f(8.5,8.5);
    glVertex2f(9.3,7.0);
    glVertex2f(10.0,7.0);
     glVertex2f(9.0,9.0);
glEnd();
glPopMatrix();

glPushMatrix();
glBegin(GL_QUADS);
    glColor3f(0.9,0.5,0.6);
    glVertex2f(5.0,7.0);
    glVertex2f(5.0,5.5);
    glVertex2f(8.0,5.5);
     glVertex2f(8.0,7.0);
glEnd();
glPopMatrix();


glPushMatrix();
glBegin(GL_QUADS);
    glColor3f(1.0,0.5,0.1);
    glVertex2f(8.0,7.0);
    glVertex2f(8.0,5.5);
    glVertex2f(9.3,6.0);
     glVertex2f(9.3,7.0);
glEnd();
glPopMatrix();



glPushMatrix();
glBegin(GL_TRIANGLES);
    glColor3f(1.0,0.5,0.1);
    glVertex2f(8.5,8.5);
    glVertex2f(8.0,7.0);
    glVertex2f(9.3,7.0);
glEnd();
glPopMatrix();

//ghorer jalna
glPushMatrix();
glBegin(GL_QUADS);
    glColor3f(0.9,0.9,0.8);
    glVertex2f(5.25,6.5);
    glVertex2f(5.25,6.0);
    glVertex2f(6.3,6.0);
     glVertex2f(6.3,6.5);
glEnd();
glPopMatrix();

//ghorer jalna
glPushMatrix();
glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex2f(6.5,6.5);
    glVertex2f(6.5,6.0);
    glVertex2f(7.5,6.0);
     glVertex2f(7.5,6.5);
glEnd();
glPopMatrix();


glPushMatrix();
glBegin(GL_QUADS);
    glColor3f(0.9,0.9,0.8);
    glVertex2f(8.5,7.0);
    glVertex2f(8.5,5.7);
    glVertex2f(9.0,5.9);
     glVertex2f(9.0,7.0);
glEnd();
glPopMatrix();


glPushMatrix();
glBegin(GL_TRIANGLES);
    glColor3f(1.0,0.5,0.1);
    glVertex2f(12.0,9.0);
    glVertex2f(10.5,7.0);
    glVertex2f(13.5,7.0);
glEnd();
glPopMatrix();


//single soto ghorer square
glPushMatrix();
glBegin(GL_QUADS);
    glColor3f(.5,.3,0);
    glVertex2f(11.0,7.0);
    glVertex2f(11.0,5.5);
    glVertex2f(13.0,5.5);
     glVertex2f(13.0,7.0);
glEnd();
glPopMatrix();



bash();
glPushMatrix();
glTranslatef(4,0.0,0.0);
glScalef(1.0,1,1);
bash();
glEnd();
glPopMatrix();


glPushMatrix();
glBegin(GL_QUADS);
    glColor3f(0.8,0.6,0.2);
    glVertex2f(6.5,5.5);
    glVertex2f(6.5,5.6);
    glVertex2f(11.0,5.5);
     glVertex2f(11.0,5.6);
glEnd();
glPopMatrix();



  kapor();
  glPushMatrix();
glTranslatef(1,0.0,0.0);
kapor();
glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(-1,0.0,0.0);
kapor();
glEnd();
glPopMatrix();


//majher nodi
glPushMatrix();
glBegin(GL_QUADS);
//glColor3f(0,.5,.8);
    glColor3f(0.3,.7,1);
    glVertex2f(14.0,9.3);
    glVertex2f(13,4);
    glVertex2f(16,4);
    glColor3f(0,.5,.8);
     glVertex2f(17,9.2 );
glEnd();
glPopMatrix();

//last bnodi
glPushMatrix();
glBegin(GL_QUADS);
    glColor3f(0.3,.7,1);
    glVertex2f(13,4);
    glVertex2f(12,0);
    glVertex2f(15,0);
    glColor3f(0,.5,.8);
     glVertex2f(16,4 );
glEnd();
glPopMatrix();

glPushMatrix();
glBegin(GL_QUADS);
    glColor3f(0.6,0.2,0.8);
    glVertex2f(6.0,9.5);
    glVertex2f(5.5,9.0);
    glVertex2f(8.5,9.0);
     glVertex2f(8.0,9.5);
glEnd();
glPopMatrix();


glPushMatrix();
glTranslatef(-2.0,4.0,0.0);
Tree();
glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(-4.0,3.0,0.0);
Tree();
glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(-6.0,3.0,0.0);
Tree();
glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(0.1,3.0,0.0);
Tree();
glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(-7.0,-1.0,0.0);
Tree();
glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(-8,-4.5,0.0);
Tree();
glEnd();
glPopMatrix();


ghor();

glPushMatrix();
glTranslatef(13,-1.5,0.0);
ghor();
glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(11,-2,0.0);
ghor();
glEnd();
glPopMatrix();


glPushMatrix();
glTranslatef(10,-3,0.0);
ghor();
glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(13,-3,0.0);
ghor();
glEnd();
glPopMatrix();



glPushMatrix();
    glColor3f(1,1,0.4);
    glTranslatef(sun_move,0,0);
    drawFilledCircle(4,22,1.5);
   glPopMatrix();

  glPushMatrix();
  glTranslatef(cloud1_move,0,0);
  glTranslatef(-3,0.3,0.0);
  cloud1();
  glEnd();
  glPopMatrix();

  glPushMatrix();
  glTranslatef(cloud2_move,0,0);
  glTranslatef(6,0,0.0);
  cloud2();
  glEnd();
  glPopMatrix();


  glPushMatrix();
  glTranslatef(19.5,1,0.0);
  khor();
  glEnd();
  glPopMatrix();

  glPushMatrix();
  glTranslatef(19.5,1.5,0.0);
  khor();
  glEnd();
  glPopMatrix();

   glPushMatrix();
  glTranslatef(-4.8,0,0.0);
  khor();
  glEnd();
  glPopMatrix();

  glPushMatrix();
  glTranslatef(-4,0,0.0);
  khor();
  glEnd();
  glPopMatrix();


  glPushMatrix();
  glTranslatef(bird_move,0,0);
  glTranslatef(3,11,0.0);
  pakhi();
  glEnd();
  glPopMatrix();

  glPushMatrix();
  glTranslatef(bird_move,0,0);
  glTranslatef(2.5,11.5,0.0);
  pakhi();
  glEnd();
  glPopMatrix();

  glPushMatrix();
  glTranslatef(bird_move,0,0);
  glTranslatef(2.5,10.5,0.0);
  pakhi();
  glEnd();
  glPopMatrix();

  glPushMatrix();
  glTranslatef(bird_move,0,0);
  glTranslatef(2,10,0.0);
  pakhi();
  glEnd();
  glPopMatrix();

  glPushMatrix();
  glTranslatef(bird_move,0,0);
  glTranslatef(2,11,0.0);
  pakhi();
  glEnd();
  glPopMatrix();

  glPushMatrix();
  glTranslatef(bird_move,0,0);
  glTranslatef(2,12,0.0);
  pakhi();
  glEnd();
  glPopMatrix();



glFlush();
glutSwapBuffers();
}


void myKeyboardFunc( unsigned char key, int x, int y )
{
    switch ( key )
    {

    case 'S':
        flagScale=true;
        break;
    case 's':
        flagScale=false;
        break;



    case 16:
        exit(1);
    }
    glutPostRedisplay();
}

void animate()
{
	if (flagScale == true)
	{
		boat_move-= 0.003;
		if(boat_move < -6)
			boat_move = 15;
	}
	if (flagScale == false)
	{
		boat_move = 0;

	}
	if (flagScale == true)
	{
		bird_move+= 0.005;
		if(bird_move >16)
			bird_move = -15.5;
	}
	if (flagScale == false)
	{
		bird_move = 0;

	}

	if (flagScale == true)
	{
		sun_move+= 0.001;
		if(sun_move >20.8)
			sun_move = -2;
	}
	if (flagScale == false)
	{
		sun_move = 0;

	}
	if (flagScale == true)
	{
		cloud1_move-= 0.001;
		if(cloud1_move < -6)
			cloud1_move = 15;
	}
	if (flagScale == false)
	{
		cloud1_move = 0;

	}
	if (flagScale == true)
	{
		cloud2_move-= 0.001;
		if(cloud2_move < -13)
			cloud2_move = 8;
	}
	if (flagScale == false)
	{
		cloud2_move = 0;

	}

	glutPostRedisplay();
}


void init()
{
    glClearColor (0.0,0.0,1.0,0.0 );

}

int main (int argc, char **argv)
{
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
glutInitWindowPosition(50,-50);
glutInitWindowSize(windowWidth, windowHeight);
glutCreateWindow("River side village ");

glShadeModel( GL_SMOOTH );
glutKeyboardFunc(myKeyboardFunc);
glutIdleFunc(animate);

glutDisplayFunc(display);
glutMainLoop();
return 0;
}
