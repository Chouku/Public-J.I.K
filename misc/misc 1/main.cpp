#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>

using namespace std;
float xRotate=0;
float yRotate=0;
void myView()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    //==============KUBAS======================
    glPushMatrix();
        glScalef(0.2,0.2,0);
        glTranslatef(-4,4,0);//pernesio funkcija

        glColor3f(0,1,0);
        glRotatef(xRotate,1,0,0);
        glRotatef(yRotate,0,1,0);
        glutSolidCube(1);

        glColor3f(1,0,0);
        //glRotatef(45,1,0,0);
        //glRotatef(30,0,1,0);
        glutWireCube(1);
    glPopMatrix();
  //=========================================

    //==============SFERA======================

    glPushMatrix();
        glScalef(0.2,0.2,0);
        glTranslatef(-2,4,0);//pernesio funkcija

        glColor3f(0,1,0);
        glRotatef(xRotate,1,0,0);
        glRotatef(yRotate,0,1,0);
        glutSolidSphere(1,20,20);

        glColor3f(1,0,0);
        glutWireSphere(1,20,20);
    glPopMatrix();
            //==============Saturno ziedai======================
    glPushMatrix();

        glColor3f(0,1,0);
                glScalef(0.2,0.2,0);
        glTranslatef(-3,-3,0);//pernesio funkcija

        glRotatef(xRotate,1,0,0);
        glutSolidTorus(0.2,1.3,10,20);

        glColor3f(1,0,0);
        glutWireTorus(0.2,1.3,10,20);
    glPopMatrix();
            //==============Saturnas======================

    glPushMatrix();
        glScalef(0.2,0.2,0);
        glTranslatef(-3,-3,0);//pernesio funkcija

        glColor3f(0,1,0);
        glRotatef(xRotate,1,0,0);
        glRotatef(yRotate,0,1,0);
        glutSolidSphere(1,20,20);

        glColor3f(1,0,0);
        glutWireSphere(1,20,20);

glPopMatrix();
glPopMatrix();
    //=========================================



    //==============KUGIS======================

    glPushMatrix();
        glScalef(0.2,0.2,0);
        glTranslatef(0,4,0);//pernesio funkcija

        glColor3f(0,1,0);
        glRotatef(xRotate,1,0,0);
        glRotatef(yRotate,0,1,0);
        glutSolidCone(1,2,10,10);

        glColor3f(1,0,0);
        glutWireCone(1,2,10,10);
    glPopMatrix();
    //=========================================

    //==============Spurga======================
    glPushMatrix();
        glScalef(0.15,0.15,0);
        glTranslatef(4,5,0);//pernesio funkcija

        glColor3f(0,1,0);
... (149 lines left)
