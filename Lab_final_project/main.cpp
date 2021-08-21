#include <windows.h>
#ifdef APPLE
#include <GLUT/glut.h>
#else
#endif
#include <GL/gl.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>

float p=0;
void sun(float x,float y)
{
    float th;
    glBegin(GL_POLYGON);
    glColor3f (1.0f, 0.0f, 0.0f);
    for(int i=0; i<360; i++)
    {
        th=i*(3.1416/180);
        glVertex2f(x+2.5*cos(th),y+2.5*sin(th));
    }
    glEnd();
}
void display(void)
{
    glClear (GL_COLOR_BUFFER_BIT);

//Quads
    //lower part
    glBegin(GL_QUADS);
    glColor3f (1.0f, 0.5f, 0.0f);
    glVertex3f(0, 0, 0);
    glVertex3f(100, 0, 0);
    glVertex3f(100, 45, 0);
    glVertex3f(0, 45, 0);

    //uper part sky
    glColor3f (0.0f, 0.5f, 1.0f);
    glVertex3f(0, 45, 0);
    glVertex3f(100, 45, 0);
    glVertex3f(100, 80, 0);
    glVertex3f(0, 80, 0);

    //road
    glColor3f (0.1f, 0.1f, 0.1f);
    glVertex3f(40, 0, 0);
    glVertex3f(60, 0, 0);
    glVertex3f(55, 45, 0);
    glVertex3f(45, 45, 0);

    //hill
    glColor3f (1.0f, 0.6f, 0.0f);
    glVertex3f(45, 45, 0);
    glVertex3f(100, 45, 0);
    glVertex3f(100, 60, 0);
    glVertex3f(80, 70, 0);

    //car
    if(p<=40)
        p=p+0.005;
    else
        p=0;
    glutPostRedisplay();

    glColor3f (0.6f, 0.6f, 0.6f);
    glVertex3f(47, 5+p, 0);
    glVertex3f(49, 5+p, 0);
    glVertex3f(49, 0+p, 0);
    glVertex3f(47, 0+p, 0);

    glColor3f (0.3f, 0.3f, 0.3f);
    glVertex3f(46.5, 1+p, 0);
    glVertex3f(47, 1+p, 0);
    glVertex3f(47, 2+p, 0);
    glVertex3f(46.5, 2+p, 0);

    glColor3f (0.3f, 0.3f, 0.3f);
    glVertex3f(46.5, 3+p, 0);
    glVertex3f(47, 3+p, 0);
    glVertex3f(47, 4+p, 0);
    glVertex3f(46.5, 4+p, 0);

    glColor3f (0.3f, 0.3f, 0.3f);
    glVertex3f(49, 1+p, 0);
    glVertex3f(49.5, 1+p, 0);
    glVertex3f(49.5, 2+p, 0);
    glVertex3f(49, 2+p, 0);

    glColor3f (0.3f, 0.3f, 0.3f);
    glVertex3f(49, 3+p, 0);
    glVertex3f(49.5, 3+p, 0);
    glVertex3f(49.5, 4+p, 0);
    glVertex3f(49, 4+p, 0);

    glEnd();

//Triangles
    //hill
    glBegin(GL_TRIANGLES);

    glColor3f (1.0f, 0.7f, 0.0f);
    glVertex3f(10, 45, 0);
    glVertex3f(55, 45, 0);
    glVertex3f(40, 65, 0);

    glColor3f (1.0f, 0.8f, 0.0f);
    glVertex3f(0, 45, 0);
    glVertex3f(90, 45, 0);
    glVertex3f(60, 65, 0);

    glColor3f (1.0f, 0.9f, 0.0f);
    glVertex3f(0, 45, 0);
    glVertex3f(70, 45, 0);
    glVertex3f(0, 70, 0);

    glEnd();

// road line
    glBegin(GL_LINES);
    glColor3f (1.0f, 1.0f, 1.0f);

    glVertex3f(50, 0, 0);
    glVertex3f(50, 5 , 0);

    glVertex3f(50, 10, 0);
    glVertex3f(50, 15, 0);

    glVertex3f(50, 20, 0);
    glVertex3f(50, 25, 0);

    glVertex3f(50, 30, 0);
    glVertex3f(50, 35, 0);

    glVertex3f(50, 40, 0);
    glVertex3f(50, 45, 0);

    //tree
    glColor3f (0.0f, 1.0f, 0.0f);
    glVertex3f(12, 10, 0);
    glVertex3f(12, 13, 0);
    glVertex3f(12, 12, 0);
    glVertex3f(11, 12, 0);
    glVertex3f(11, 12, 0);
    glVertex3f(11, 13, 0);
    glVertex3f(12, 11, 0);
    glVertex3f(13, 11, 0);
    glVertex3f(13, 11, 0);
    glVertex3f(13, 14, 0);

    glVertex3f(12, 24, 0);
    glVertex3f(12, 27, 0);
    glVertex3f(12, 26, 0);
    glVertex3f(11, 26, 0);
    glVertex3f(11, 26, 0);
    glVertex3f(11, 27, 0);
    glVertex3f(12, 26, 0);
    glVertex3f(13, 26, 0);
    glVertex3f(13, 26, 0);
    glVertex3f(13, 28, 0);

    glVertex3f(20, 36, 0);
    glVertex3f(20, 40, 0);
    glVertex3f(20, 38, 0);
    glVertex3f(19, 38, 0);
    glVertex3f(19, 38, 0);
    glVertex3f(19, 39, 0);
    glVertex3f(20, 39, 0);
    glVertex3f(21, 39, 0);
    glVertex3f(21, 39, 0);
    glVertex3f(21, 41, 0);

    glVertex3f(35, 32, 0);
    glVertex3f(35, 35, 0);
    glVertex3f(35, 34, 0);
    glVertex3f(34, 34, 0);
    glVertex3f(34, 34, 0);
    glVertex3f(34, 35, 0);
    glVertex3f(35, 34, 0);
    glVertex3f(36, 34, 0);
    glVertex3f(36, 34, 0);
    glVertex3f(36, 35, 0);

    glVertex3f(77, 33, 0);
    glVertex3f(77, 37, 0);
    glVertex3f(77, 36, 0);
    glVertex3f(76, 36, 0);
    glVertex3f(76, 36, 0);
    glVertex3f(76, 38, 0);
    glVertex3f(77, 35, 0);
    glVertex3f(78, 35, 0);
    glVertex3f(78, 35, 0);
    glVertex3f(78, 37, 0);

    glVertex3f(91, 24, 0);
    glVertex3f(91, 28, 0);
    glVertex3f(91, 27, 0);
    glVertex3f(90, 27, 0);
    glVertex3f(90, 27, 0);
    glVertex3f(90, 29, 0);
    glVertex3f(91, 26, 0);
    glVertex3f(92, 26, 0);
    glVertex3f(92, 26, 0);
    glVertex3f(92, 28, 0);

    glVertex3f(67, 11, 0);
    glVertex3f(67, 15, 0);
    glVertex3f(67, 13, 0);
    glVertex3f(66, 13, 0);
    glVertex3f(66, 13, 0);
    glVertex3f(66, 16, 0);
    glVertex3f(67, 14, 0);
    glVertex3f(68, 14, 0);
    glVertex3f(68, 14, 0);
    glVertex3f(68, 16, 0);

    glEnd();

    sun(90, 75);

    glFlush ();
}
void init (void)
{
    glClearColor (248, 248, 255, 0.0);//select clearing (background) color
    glOrtho(-1,1,-1,1,-1,1);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0, 100, 0, 80, -10.0, 10.0);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (1000, 800);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("Final Project");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
