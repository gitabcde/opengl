#include <GL/freeglut.h>

void mydis()
{
  glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT); 
  glClearColor(0.0f,1.0f,0.0f,0.0f);
  glRotated(1,1.0,0.0,0.0);
  glBegin(GL_TRIANGLES);
  glColor3f(1.0f,0.0f,0.0f);
  glVertex3f(0.3f,-0.15f,0.2f);
  glVertex3f(0.0f,0.15f,0.2f);
  glVertex3f(-0.3f,-0.15f,0.2f);
  glEnd();
  glutSwapBuffers();
}


int main(int argc,char** argv)
{
  glutInit(&argc,argv);
  glutInitDisplayMode(GLUT_RGBA|GLUT_DOUBLE);
  glutCreateWindow("triangle");
  glutDisplayFunc(mydis);
  glutIdleFunc(mydis);


  glutMainLoop();
  return 0;
}
