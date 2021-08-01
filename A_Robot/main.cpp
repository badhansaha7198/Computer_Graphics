#include <windows.h>
#include <GL/gl.h>
#include <GL/glut.h>
void display(void)
{
    glClear (GL_COLOR_BUFFER_BIT);
    glColor3f (1.0, 0.0, 0.0);

    //head
    glBegin(GL_QUADS);
    glColor3f(0.5f, 1.0f, 1.0f);
    glVertex3f(0.3,0.75,0.0);
    glColor3f(0.5f, 0.5f, 1.0f);
    glVertex3f(0.3,0.5,0.0);
    glColor3f(0.5f, 0.5f, 0.0f);
    glVertex3f(0.7,0.5,0.0);
    glColor3f(1.0f, 0.5f, 1.0f);
    glVertex3f(0.7,0.75,0.0);
    glEnd();

    //reye
    glBegin(GL_QUADS);
    glColor3f(0.1f, 0.1f, 0.1f);
    glVertex3f(0.55,0.7,0.0);
    glVertex3f(0.55,0.65,0.0);
    glVertex3f(0.6,0.65,0.0);
    glVertex3f(0.6,0.7,0.0);
    glEnd();

    //leye
    glBegin(GL_QUADS);
    glColor3f(0.1f, 0.1f, 0.1f);
    glVertex3f(0.4,0.7,0.0);
    glVertex3f(0.4,0.65,0.0);
    glVertex3f(0.45,0.65,0.0);
    glVertex3f(0.45,0.7,0.0);
    glEnd();

    //rear
    glBegin(GL_QUADS);
    glColor3f(0.1f, 0.1f, 0.1f);
    glVertex3f(0.7,0.7,0.0);
    glVertex3f(0.7,0.6,0.0);
    glVertex3f(0.75,0.6,0.0);
    glVertex3f(0.75,0.7,0.0);
    glEnd();

    //lear
    glBegin(GL_QUADS);
    glColor3f(0.1f, 0.1f, 0.1f);
    glVertex3f(0.25,0.7,0.0);
    glVertex3f(0.25,0.6,0.0);
    glVertex3f(0.3,0.6,0.0);
    glVertex3f(0.3,0.7,0.0);
    glEnd();

    //body
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.5f, 1.0f);
    glVertex3f(0.25,0.5,0.0);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex3f(0.25,0.15,0.0);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex3f(0.75,0.15,0.0);
    glColor3f(0.0f, 0.0f, 0.5f);
    glVertex3f(0.75,0.5,0.0);
    glEnd();

    //nose
    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 0.5f, 0.0f);
    glVertex3f(0.5,0.65,0.0);
    glVertex3f(0.45,0.6,0.0);
    glVertex3f(0.55,0.6,0.0);
    glEnd();

    //mouth
    glBegin(GL_LINES);
    glColor3f(0.1f, 0.1f, 0.1f);
    glVertex3f(0.4,0.55,0.0);
    glVertex3f(0.6,0.55,0.0);
    glEnd();

    //rhand
    glBegin(GL_LINES);
    glColor3f(0.1f, 0.1f, 0.1f);
    glVertex3f(0.75,0.45,0.0);
    glVertex3f(0.85,0.45,0.0);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.1f, 0.1f, 0.1f);
    glVertex3f(0.85,0.45,0.0);
    glVertex3f(0.85,0.3,0.0);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.1f, 0.1f, 0.1f);
    glVertex3f(0.825,0.3,0.0);
    glVertex3f(0.875,0.3,0.0);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.1f, 0.1f, 0.1f);
    glVertex3f(0.875,0.3,0.0);
    glVertex3f(0.875,0.25,0.0);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.1f, 0.1f, 0.1f);
    glVertex3f(0.825,0.3,0.0);
    glVertex3f(0.825,0.25,0.0);
    glEnd();

    //rhand
    glBegin(GL_LINES);
    glColor3f(0.1f, 0.1f, 0.1f);
    glVertex3f(0.15,0.45,0.0);
    glVertex3f(0.25,0.45,0.0);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.1f, 0.1f, 0.1f);
    glVertex3f(0.15,0.45,0.0);
    glVertex3f(0.15,0.3,0.0);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.1f, 0.1f, 0.1f);
    glVertex3f(0.125,0.3,0.0);
    glVertex3f(0.175,0.3,0.0);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.1f, 0.1f, 0.1f);
    glVertex3f(0.175,0.3,0.0);
    glVertex3f(0.175,0.25,0.0);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.1f, 0.1f, 0.1f);
    glVertex3f(0.125,0.3,0.0);
    glVertex3f(0.125,0.25,0.0);
    glEnd();

    //rleg
    glBegin(GL_LINES);
    glColor3f(0.1f, 0.1f, 0.1f);
    glVertex3f(0.6,0.15,0.0);
    glVertex3f(0.6,0.025,0.0);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.1f, 0.1f, 0.1f);
    glVertex3f(0.6,0.025,0.0);
    glVertex3f(0.65,0.025,0.0);
    glEnd();

    //lleg
    glBegin(GL_LINES);
    glColor3f(0.1f, 0.1f, 0.1f);
    glVertex3f(0.4,0.15,0.0);
    glVertex3f(0.4,0.025,0.0);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.1f, 0.1f, 0.1f);
    glVertex3f(0.4,0.025,0.0);
    glVertex3f(0.45,0.025,0.0);
    glEnd();


    glFlush ();
}
void init (void)
{
    glClearColor (248, 248, 255, 0.0); //select clearing (background) color
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0, 1.0, 0.0, 1.0, -10.0, 10.0);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (600, 600);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("Output");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
