
/******    Md. Hasanuzzaman Dipu              ******/
/******    Daffodil International University, CSE Department, 35th Batch  ******/

#include<bits/stdc++.h>
#include<math.h>
#include<GL/gl.h>
#include<GL/glu.h>
#include<GL/glut.h>
using namespace std;
int x,y;

void room(void)
{
    //Top of the room
    x=5,y=50;
    glColor3f (0.5, 0.1, 0.5);
    glBegin(GL_POLYGON);
    glVertex2d (x,y+9);
    glVertex2d (x,y+17);
    glVertex2d (x+100,y+17);
    glVertex2d (x+100,y+14);
    glEnd();
    //room left wall
    x=y=5;
    glColor3f (1.0, 0.8, 0.8);
    glBegin(GL_POLYGON);
    glVertex2d (x,y);
    glVertex2d (x+10,y+15);
    glVertex2d (x+10,y+45);
    glVertex2d (x,y+60);
    glEnd();

    x=y=5;
    glColor3f (1.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2d (x+3,y+25);
    glVertex2d (x+7,y+25);
    glVertex2d (x+7,y+40);
    glVertex2d (x+3,y+45);
    glEnd();
     x=y=5;
     //Window
    glColor3f (1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2d (x+4,y+26);
    glVertex2d (x+6,y+26);
    glVertex2d (x+6,y+40);
    glVertex2d (x+4,y+43);
    glEnd();
    x=y=5;
    //side line
    glColor3f (0.5, 0.1, 0.5);
    glBegin(GL_POLYGON);
    glVertex2d (x,y);
    glVertex2d (x+10,y+15);
    glVertex2d (x+10,y+17);
    glVertex2d (x,y+4);
    glEnd();
    //room right wall
    x=105;
    glColor3f (1.0, 0.8, 0.8);
    glBegin(GL_POLYGON);
    glVertex2d (x,y);
    glVertex2d (x-10,y+15);
    glVertex2d (x-10,y+45);
    glVertex2d (x,y+60);
    glEnd();
    //side line
    x=105;
    glColor3f (0.5, 0.1, 0.5);
    glBegin(GL_POLYGON);
    glVertex2d (x,y);
    glVertex2d (x-10,y+15);
    glVertex2d (x-10,y+17);
    glVertex2d (x,y+4);
    glEnd();
    //room back
    //room back wall
    x=15;
    glColor3f (0.2, 0.3, 0.2);
    glBegin(GL_POLYGON);
    glVertex2d (x,y+15);
    glVertex2d (x,y+45);
    glVertex2d (x+80,y+45);
    glVertex2d (x+80,y+15);
    glEnd();
    //buttom line
     x=15;
    glColor3f (0.5, 0.1, 0.5);
    glBegin(GL_POLYGON);
    glVertex2d (x,y+9);
    glVertex2d (x,y+17);
    glVertex2d (x+80,y+17);
    glVertex2d (x+80,y+14);
    glEnd();

     //Bed Back H_D
    x=16;
    glColor3f (1.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2d (x,y+10);
    glVertex2d (x,y+18);
    glVertex2d (x+14,y+18);
    glVertex2d (x+14,y+15);
    glEnd();
    //room roof
    x=15,y=50;
    glColor3f (0.2, 0.6, 0.3);
    glBegin(GL_POLYGON);
    glVertex2d (x,y);
    glVertex2d (x-10,y+15);
    glVertex2d (x+90,y+15);
    glVertex2d (x+80,y);
    glEnd();
    //room floor
    x=15,y=20;
    glColor3f (0.5,3.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex2d (x,y);
    glVertex2d (x-10,y-15);
    glVertex2d (x+90,y-15);
    glVertex2d (x+80,y);
    glEnd();
   //2nd floor
     x=15,y=20;
    glColor3f (0.03,0.5, 0.05);
    glBegin(GL_TRIANGLE_STRIP);
    glVertex2d (x,y);
    glVertex2d (x-10,y-15);
    glVertex2d (x+90,y-15);
    glVertex2d (x+80,y);
    glEnd();
}

void BED(void)
{

    // BED leg 1
    x=10,y=11;
    glColor3f (0.0, 0.2, 0.4);
    glBegin(GL_POLYGON);
    glVertex2d (x,y);
    glVertex2d (x+15,y);
    glVertex2d (x+15,y-3);
    glVertex2d (x,y-3);
    glEnd();
    // BED leg 2
    x=24,y=11;
    glColor3f (0.0, 0.2, 0.4);
    glBegin(GL_POLYGON);
    glVertex2d (x,y);
    glVertex2d (x+1,y);
    glVertex2d (x+1,y-3);
    glVertex2d (x,y-3);
    glEnd();
    // BED leg 3
    x=29,y=19;
    glColor3f (0.0, 0.2, 0.4);
    glBegin(GL_POLYGON);
    glVertex2d (x,y);
    glVertex2d (x+1,y);
    glVertex2d (x+1,y-3);
    glVertex2d (x,y-3);
    glEnd();

    // BED BODY
    x=10,y=12;
    glColor3f (0.3, 0.7, 0.0);
    glBegin(GL_POLYGON);
    glVertex2d (x,y);
    glVertex2d (x+6,y+8);
    glVertex2d (x+20,y+8);
    glVertex2d (x+20,y+7);
    glVertex2d (x+15,y-1);
    glVertex2d (x,y-1);
    glEnd();
    //bed shit
    x=10,y=13;
    glColor3f (0.0, 0.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2d (x,y);
    glVertex2d (x+6,y+8);
    glVertex2d (x+20,y+8);
    glVertex2d (x+20,y+7);
    glVertex2d (x+15,y-1);
    glVertex2d (x,y-1);
    glEnd();



}
/*
void Window(){
 //Window
    glColor3f (1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2d (x+4,y+26);
    glVertex2d (x+6,y+26);
    glVertex2d (x+6,y+40);
    glVertex2d (x+4,y+43);
    glEnd();

}*/

void almira(void)
{
      x=80,y=20;
    glColor3f (1.0, 0.9, 0.9);
    glBegin(GL_POLYGON);
    glVertex2d (x,y);
    glVertex2d (x,y-1);
    glVertex2d (x+8,y-1);
    glVertex2d (x+8,y);
    glEnd();
    // Almira stand
    x=78,y=21;
    glColor3f (0.3, 0.0, 0.6);
    glBegin(GL_POLYGON);
    glVertex2d (x,y);
    glVertex2d (x,y-3);
    glVertex2d (x+1,y-3);
    glVertex2d (x+1,y-2);
    glVertex2d (x+12,y-2);
    glVertex2d (x+12,y);
    glEnd();
    x=89,y=19;
    glBegin(GL_POLYGON);
    glVertex2d (x,y);
    glVertex2d (x,y-1);
    glVertex2d (x+1,y-1);
    glVertex2d (x+1,y);
    glEnd();
    // Almira body
    x=78,y=42;
    glColor3f (0.1, 0.0, 0.1);
    glBegin(GL_POLYGON);
    glVertex2d (x,y);
    glVertex2d (x,y-21);
    glVertex2d (x+12,y-21);
    glVertex2d (x+12,y);
    glEnd();
     // Almira body line
    x=84,y=42;
    glColor3f (1.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2d (x,y);
    glVertex2d (x,y-21);
    glVertex2d (x+0.5,y-21);
    glVertex2d (x+0.5,y);
    glEnd();
    x=82,y=32;
    glColor3f (0.2, 0.5, 0.0);
    glBegin(GL_POLYGON);
    glVertex2d (x,y);
    glVertex2d (x,y-1);
    glVertex2d (x+1,y-1);
    glVertex2d (x+1,y);
    glEnd();
    x=85,y=32;
    glColor3f (0.2, 0.5, 0.0);
    glBegin(GL_POLYGON);
    glVertex2d (x,y);
    glVertex2d (x,y-1);
    glVertex2d (x+1,y-1);
    glVertex2d (x+1,y);
    glEnd();

}


void TV()
{
    //Tv stand
    x=65,y=22;
    glColor3f (0.3, 0.6, 0.6);
    glBegin(GL_POLYGON);
    glVertex2d (x,y+5);
    glVertex2d (x,y-3);
    glVertex2d (x+1,y-3);
    glVertex2d (x+1,y-2);
    glVertex2d (x+10,y-2);
    glVertex2d (x+10,y+5);
    glEnd();
    x=74,y=20;
    glBegin(GL_POLYGON);
    glVertex2d (x,y);
    glVertex2d (x,y-1);
    glVertex2d (x+1,y-1);
    glVertex2d (x+1,y);
    glEnd();
    // TV body
    x=65,y=39;
    glColor3f (0.0, 0.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2d (x,y-8);
    glVertex2d (x,y-11.5);
    glVertex2d (x+9,y-11.5);
    glVertex2d (x+9,y-8);
    glEnd();
    //white leg
     x=66,y=38;
    glColor3f (1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2d (x,y-10.5);
    glVertex2d (x,y-11);
    glVertex2d (x+7,y-11);
    glVertex2d (x+7,y-10.5);
    glEnd();
     x=66,y=33;
    glColor3f (1.0, 0.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2d (x,y-8);
    glVertex2d (x,y-12);
    glVertex2d (x+8,y-12);
    glVertex2d (x+8,y-8);
    glEnd();
    x=66,y=31;
    glColor3f (1.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2d (x,y);
    glVertex2d (x,y-1);
    glVertex2d (x+7,y-1);
    glVertex2d (x+7,y);
    glEnd();
     x=80,y=20;
    glColor3f (1.0, 0.9, 0.9);
    glBegin(GL_POLYGON);
    glVertex2d (x,y);
    glVertex2d (x,y-1);
    glVertex2d (x+8,y-1);
    glVertex2d (x+8,y);
    glEnd();

}
void freezer()
{ //Top of the frz
     x=51,y=39;
    glColor3f (0.5, 0.5, 0.5);
    glBegin(GL_POLYGON);
    glVertex2d (x,y);
    glVertex2d (x,y-1);
    glVertex2d (x+8,y-1);
    glVertex2d (x+8,y);
    glEnd();

   //Refrigerator stand
    x=50,y=21;
    glColor3f (0.3, 0.6, 0.6);
    glBegin(GL_POLYGON);
    glVertex2d (x,y);
    glVertex2d (x,y-3);
    glVertex2d (x+1,y-3);
    glVertex2d (x+1,y-2);
    glVertex2d (x+10,y-2);
    glVertex2d (x+10,y);
    glEnd();
    x=59,y=19;
    glBegin(GL_POLYGON);
    glVertex2d (x,y);
    glVertex2d (x,y-1);
    glVertex2d (x+1,y-1);
    glVertex2d (x+1,y);
    glEnd();
    //Refrigerator body
    x=51,y=38;
    glColor3f (0.5, 0.0, 0.1);
    glBegin(GL_POLYGON);
    glVertex2d (x,y);
    glVertex2d (x,y-17);
    glVertex2d (x+8,y-17);
    glVertex2d (x+8,y);
    glEnd();
    //middle of the frz
    x=51,y=31;
    glColor3f (0.5, 0.5, 0.5);
    glBegin(GL_POLYGON);
    glVertex2d (x,y);
    glVertex2d (x,y-1);
    glVertex2d (x+8,y-1);
    glVertex2d (x+8,y);
    glEnd();
}
void ShowCase()
{ //Top of the S_C
     x=33,y=39;
    glColor3f (0.1, 0.0, 0.1);
    glBegin(GL_POLYGON);
    glVertex2d (x,y-8);
    glVertex2d (x,y-4);
    glVertex2d (x+13,y-4);
    glVertex2d (x+13,y-8);
    glEnd();
    //S_C body
    x=33,y=38;
    glColor3f (0.3, 0.02, 1.0);
    glBegin(GL_POLYGON);
    glVertex2d (x,y-4);
    glVertex2d (x,y-17);
    glVertex2d (x+13,y-17);
    glVertex2d (x+13,y-4);
    glEnd();
     //middel line
     x=39,y=35;
    glColor3f (0.0, 0.0, 0.1);
    glBegin(GL_POLYGON);
    glVertex2d (x,y-4);
    glVertex2d (x,y-17);
    glVertex2d (x+0.5,y-17);
    glVertex2d (x+0.5,y-4);
    glEnd();
    //middle of the S_C
    x=33,y=31;
    glColor3f (0.1, 0.1, 0.1);
    glBegin(GL_POLYGON);
    glVertex2d (x,y);
    glVertex2d (x,y-1);
    glVertex2d (x+13,y-1);
    glVertex2d (x+13,y);
    glEnd();
    //Bottom S_C
     x=33,y=26;
    glColor3f (0.1, 0.0, 0.1);
    glBegin(GL_POLYGON);
    glVertex2d (x,y-8);
    glVertex2d (x,y-4);
    glVertex2d (x+13,y-4);
    glVertex2d (x+13,y-8);
    glEnd();
}
void WallMate()
{

    x=16,y=42;
    glColor3f (.7, .3, .8);
    glBegin(GL_POLYGON);
    glVertex2d (x,y);
    glVertex2d (x,y-12);
    glVertex2d (x+15,y-12);
    glVertex2d (x+15,y);
    glEnd();
     x=17,y=42;
    glColor3f (1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2d (x,y-1);
    glVertex2d (x,y-11);
    glVertex2d (x+13,y-11);
    glVertex2d (x+13,y-1);
    glEnd();


     x=16,y=33;
    glColor3f (1.0,  0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2d (x+4,y+4);
    glVertex2d (x+5,y+4);
    glVertex2d (x+5,y-2);
    glVertex2d (x+4,y-2);
    glEnd();

     x=18,y=33;
    glColor3f (0.0,  0.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2d (x+4,y+6);
    glVertex2d (x+5,y+6);
    glVertex2d (x+5,y-2);
    glVertex2d (x+4,y-2);
    glEnd();
    x=20,y=33;
    glColor3f (1.0,  0.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2d (x+4,y+4);
    glVertex2d (x+5,y+4);
    glVertex2d (x+5,y-2);
    glVertex2d (x+4,y-2);
    glEnd();
    x=22,y=33;
    glColor3f (0.0,  0.8, 1.0);
    glBegin(GL_POLYGON);
    glVertex2d (x+4,y+2);
    glVertex2d (x+5,y+2);
    glVertex2d (x+5,y-2);
    glVertex2d (x+4,y-2);
    glEnd();

    x=24,y=33;
    glColor3f (0.8,  0.8, 0.0);
    glBegin(GL_POLYGON);
    glVertex2d (x+4,y);
    glVertex2d (x+5,y);
    glVertex2d (x+5,y-2);
    glVertex2d (x+4,y-2);
    glEnd();


}

void WallMate2()
{



   x=50,y=47;
    glColor3f (0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2d (x,y);
    glVertex2d (x+11,y);
    glVertex2d (x+11,y-4);
    glVertex2d (x,y-4);
    glEnd();


    x=51,y=46;
    glColor3f (1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2d (x,y);
    glVertex2d (x+9,y);
    glVertex2d (x+9,y-2);
    glVertex2d (x,y-2);
    glEnd();
      x=51,y=46;
    glColor3f (1.0,  0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2d (x+4,y);
    glVertex2d (x+5,y);
    glVertex2d (x+5,y-2);
    glVertex2d (x+4,y-2);
    glEnd();
     x=53,y=46;
    glColor3f (0.0,  0.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2d (x+4,y);
    glVertex2d (x+5,y);
    glVertex2d (x+5,y-2);
    glVertex2d (x+4,y-2);
    glEnd();
     x=49,y=46;
    glColor3f (0.0,  1.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2d (x+4,y);
    glVertex2d (x+5,y);
    glVertex2d (x+5,y-2);
    glVertex2d (x+4,y-2);
    glEnd();


    x=63,y=37;
    glColor3f (0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2d (x,y);
    glVertex2d (x+13,y);
    glVertex2d (x+13,y-8);
    glVertex2d (x,y-8);
    glEnd();


    x=64,y=36;
    glColor3f (1.0, 1.0, 0.6);
    glBegin(GL_POLYGON);
    glVertex2d (x,y);
    glVertex2d (x+11,y);
    glVertex2d (x+11,y-6);
    glVertex2d (x,y-6);
    glEnd();



}
void door()
{
    x=99,y=40;
    glColor3f (0.0, 0.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2d (x,y);
    glVertex2d (x+4,y+2);
    glVertex2d (x+5,y+2);
    glVertex2d (x+5,y-30);
    glVertex2d (x,y-30);
    glEnd();

    x=100,y=39;
    glColor3f (1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex2d (x,y);
    glVertex2d (x+3,y+2);
    glVertex2d (x+3,y-28);
    glVertex2d (x,y-28);
    glEnd();

}

void display(void)
{
    glClear (GL_COLOR_BUFFER_BIT);
    room();
    BED();
    //Window();
    almira();
    freezer();
    TV();
    ShowCase();
    WallMate();
    WallMate2();
    door();
    glFlush ();
}

void init(void)
{
    glClearColor(0, 0, 0, 0);
    glMatrixMode(GL_PROJECTION);
    // for setting the transformation which here is 2D
    gluOrtho2D(0, 110, 0, 70);
}

int main(int agrc, char ** argv)
{
    glutInit(&agrc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowPosition(100, 50);
    glutInitWindowSize(1000, 900);
    glutCreateWindow("Shahadat Hossain");       // Change your desire name :)
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}


