#include <GL/freeglut.h>
#include <stdio.h>
#include <stdlib.h>

int scale=1;
double factor;
void mydis()
{
  glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT); 
  //glClearColor(0.0f,1.0f,0.0f,0.0f);
  scale++;
  scale=scale%360;
  factor=(double)scale/10;
  printf("factor is %f\n",factor);
  glViewport(0,0,400,400);
  glMatrixMode(GL_PROJECTION);
  glRotated(1.0,1.0,0.0,0.0);
  //glLoadIdentity();
  //glScaled(1.0f,factor,1.0f);
  
  glMatrixMode(GL_MODELVIEW);
  glRotated(scale,0.1,0.0,0.0);
  glBegin(GL_TRIANGLE_STRIP);
  glColor3f(1.0f,0.0f,0.0f);
  glVertex3f(0.3f,0.0f,0.5f);
  //glColor3f(0.0f,1.0f,0.0f);
  glVertex3f(0.0f,0.3f,0.5f);
  glVertex3f(0.0f,0.0f,0.5f);
  //glColor3f(0.0f,0.0f,1.0f);
  glVertex3f(-0.3f,0.3f,0.5f);
  //glColor3f(1.0f,1.0f,0.0f);
  glVertex3f(-0.3f,0.0f,0.5f);
  glEnd();
  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();
  glMatrixMode(GL_MODELVIEW);
  glLoadIdentity();
  glViewport(400,400,400,400);
  glBegin(GL_TRIANGLE_STRIP);
  glColor3f(1.0f,0.0f,0.0f);
  glVertex3f(0.3f,0.0f,0.5f);
  //glColor3f(0.0f,1.0f,0.0f);
  glVertex3f(0.0f,0.3f,0.5f);
  glVertex3f(0.0f,0.0f,0.5f);
  //glColor3f(0.0f,0.0f,1.0f);
  glVertex3f(-0.3f,0.3f,0.5f);
  //glColor3f(1.0f,1.0f,0.0f);
  glVertex3f(-0.3f,0.0f,0.5f);
  glEnd();
  glFlush();
}


int main(int argc,char** argv)
{
  glutInit(&argc,argv);
  glutInitDisplayMode(GLUT_RGBA);
  glutInitWindowSize(800,800);
  glutCreateWindow("triangle");
  glutDisplayFunc(mydis);
  glutIdleFunc(mydis);
  glEnable(GL_CULL_FACE);
  glFrontFace(GL_CCW);
  glCullFace(GL_BACK);
  glPolygonMode(GL_FRONT_AND_BACK,GL_LINE);
  glutMainLoop();
  return 0;
}
