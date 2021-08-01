#include <windows.h>
#include <GL/gl.h>
#include <GL/glut.h>
void display(void)
{
    glClear (GL_COLOR_BUFFER_BIT);

//Points
    glBegin(GL_POINTS);
    glColor3f (0.0, 0.0, 0.0);
    glVertex3f(0.2, 0.2, 0.0);
    glVertex3f(0.4, 0.4, 0.0);
    glVertex3f(0.6, 0.6, 0.0);
    glVertex3f(0.8, 0.8, 0.0);
    glEnd();

//Lines
    glBegin(GL_LINES);
    glColor3f (0.0, 0.0, 0.0);
    glVertex3f(0.1, 0.8, 0.0);
    glVertex3f(0.3, 0.8, 0.0);

    glVertex3f(0.2, 0.7, 0.0);
    glVertex3f(0.2, 0.9, 0.0);
    glEnd();

//Triangles
    glBegin(GL_TRIANGLES);
    glColor3f (1.0, 0.0, 0.0);
    glVertex3f(0.7, 0.7, 0.0);
    glVertex3f(0.9, 0.7, 0.0);
    glVertex3f(0.7, 0.9, 0.0);
    glEnd();

//Quads
    glBegin(GL_QUADS);
    glColor3f (0.0, 0.0, 1.0);
    glVertex3f(0.7, 0.1, 0.0);
    glVertex3f(0.9, 0.1, 0.0);
    glVertex3f(0.9, 0.3, 0.0);
    glVertex3f(0.7, 0.3, 0.0);
    glEnd();

//Polygon
    glBegin(GL_POLYGON);
    glColor3f (0.0, 1.0, 1.0);
    glVertex3f(0.3, 0.5, 0.0);
    glVertex3f(0.4, 0.3, 0.0);
    glVertex3f(0.6, 0.3, 0.0);
    glVertex3f(0.7, 0.5, 0.0);
    glVertex3f(0.5, 0.7, 0.0);
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
