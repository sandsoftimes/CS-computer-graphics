/* Compile code as: gcc hello.c -lGL -lglut */

#include<GL/glut.h>
#include<math.h>

void display()
{
	glClearColor(1.0, 1.0, 1.0, 0.0);
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0, 0.0, 0.0);

	int i;
	int points = 360;
	double theta = acos(-1)*2 / (double)points, x, y;
	glBegin(GL_LINE_LOOP);
		for (i = 0; i < points; i++) {
			x = 0.75*cos(i*theta);
			y = 0.75*sin(i*theta);
			glVertex2f(x, y);
		}
	glEnd();
	glFlush();
}

int main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitWindowSize(300, 300);
	glutInitWindowPosition(300, 300);
	glutCreateWindow("Simple Polygon");
	glutDisplayFunc(display);
	glutMainLoop();
}


