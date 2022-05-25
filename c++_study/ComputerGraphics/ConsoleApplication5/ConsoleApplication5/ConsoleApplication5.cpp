#include <Windows.h>
#include <gl/glut.h>

void init() {
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
}

void display() {
	//glClearColor(0.0, 0.0, 0.0, 0.0);
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.5, 1.0, 0.5);
	//glEnable(GL_PROGRAM_POINT_SIZE_EXT);
	glPointSize(5);

	glBegin(GL_POLYGON);
	
	glVertex3f(0.0, 0.5, 0.0); // 1이면 화면 끝이고 0이면 화면 중앙이다
	glVertex3f(-0.5, 0.25, 0.0);
	glColor3f(1.0, 0.0, 0.0);
	glVertex3f(-0.5, -0.25, 0.0);
	glVertex3f(0.0, -0.5, 0.0);
	glColor3f(1.0, 1.0, 0.0);

	glVertex3f(0.5, -0.25, 0.0);
	glVertex3f(0.5, 0.25, 0.0);
	
	/*glVertex2f(-0.5f, 0.5f); 
	glVertex2f(0.5f, 0.5f); 
	glVertex2f(-0.5f, -0.5f); 
	glVertex2f(0.5f, -0.5f);*/


	glEnd();
	glFlush();

}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

	glutInitWindowSize(600, 600);
	glutInitWindowPosition(10, 10);
	glutCreateWindow("An Example OpenGL Program");
	init();
	glutDisplayFunc(display);
	glutMainLoop();
}