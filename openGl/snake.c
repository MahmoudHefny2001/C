#include <stdio.h>
#include <math.h>
#include <GL/glut.h>
#define drawW 600
#define drawH 600

void reshape(int width, int height)
{
	glViewport(0, 0, width, height);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();

	float ratio = (float)width / height;
	if (width > height)
	{
		glOrtho(-drawW * ratio, drawW * ratio, -drawH, drawH, -1, 1);
	}
	else
	{
		glOrtho(-drawW, drawW, -drawH / ratio, drawH / ratio, -1, 1);
	}
	glClearColor(1, 1, 1, 1);
}
void Snake(void)
{

	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1, 0, 0);
	glRecti(100, 15, -90, -10);

	glEnable(GL_POINT_SMOOTH);
	glPointSize(30);
	glBegin(GL_POINTS);

	glColor3f(0.5, 0.8, 0.7);
	glVertex2f(30, 180);
	glEnd();

	glFlush();
}
void Motion(unsigned char key, int x, int y)
{
	switch (key)
	{
	case 'w':
		glTranslated(25, 25, 0);
		Snake();
		break;
	case 'W':
		glTranslated(25, 25, 0);
		Snake();
		break;
	case 'd':
		glTranslated(-25, 25, 0);
		Snake();
		break;
	
	case 'D':
		glTranslated(-25, 25, 0);
		Snake();
		break;

	case 's':
		glRotated(-90, 0, 0, 1);
		Snake();
		break;

	case 'S':
		glRotated(-90, 0, 0, 1);
		Snake();
		break;

	case 'a':
		glRotated(90, 0, 0, 1);
		Snake();
		break;

	case 'A':
		glRotated(90, 0, 0, 1);
		Snake();
		break;

	}
}
int main(int argc, char *argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);

	glutCreateWindow("Snake Game");
	glutInitWindowSize(700, 700);

	glutDisplayFunc(Snake);
	glutReshapeFunc(reshape);
	glutKeyboardFunc(Motion);
	glutMainLoop();
	return 0;
}