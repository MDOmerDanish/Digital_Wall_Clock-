# include "iGraphics.h"
#include <stdio.h>
#include <time.h>

int gettime(int t[])
{
    time_t ctime;
    struct tm * current;
    time ( &ctime );
    current = localtime ( &ctime );
    t[0] = current->tm_hour;
    t[1] = current->tm_min;
    t[2] = current->tm_sec;

}

int x = 100, y = 100, r = 20;
/*
	function iDraw() is called again and again by the system.

	*/




void iDraw()
{
    iClear();
    iFilledRectangle(193,276.5,7.5,7.5);
    iFilledRectangle(193,300.5,7.5,7.5);
    iFilledRectangle(352,276.5,7.5,7.5);
    iFilledRectangle(352,300.5,7.5,7.5);




    int t[3]= {};
    gettime(t);
    int h1,h2,m1,m2,s1,s2;
    int arr[6];
    if(t[0]>12)
    {
        h1=(t[0]-12)/10;
    }
    //h1=(t[0]-12)/10;
    if(t[0]<13)
    {
        h1=t[0]/10;
    }

    arr[0]=h1;

    if(t[0]>12)
    {
        h2=(t[0]-12)%10;
    }
    if (t[0]<12)
    {
        h2=t[0]%10;
    }
    arr[1]=h2;
    if(t[0]==12 ||t[0]==0)
    {
        arr[0]=1;
        arr[1]=2;
    }
    m1=t[1]/10,arr[2]=m1,m2=t[1]%10,arr[3]=m2,s1=t[2]/10,arr[4]=s1,s2=t[2]%10,arr[5]=s2;

    //place your drawing codes here
//	iClear();
    iSetColor(255, 100, 10);
    int i,j=0;
    //  int arr[6];




    for(i=0; i<=400; i=i+80)
    {

        if(arr[j]==1)
        {
            iFilledRectangle(100+i,300,5,50);
            iFilledRectangle(100+i,243,5,50);

            // iFilledRectangle(50+i,300,5,50);
            //iFilledRectangle(50+i,244,5,50);
        }
        if(arr[j]==2)
        {
            iFilledRectangle(52.5+i,350,50,5);
            iFilledRectangle(100+i,300,5,50);
            iFilledRectangle(52.5+i,293.5,50,5);
            iFilledRectangle(50+i,244,5,50);
            iFilledRectangle(52.5+i,237.5,50,5);
        }
        if(arr[j]==3)
        {
            iFilledRectangle(100+i,300,5,50);
            iFilledRectangle(52.5+i,350,50,5);
            iFilledRectangle(52.5+i,293.5,50,5);
            iFilledRectangle(52.5+i,237.5,50,5);
            iFilledRectangle(100+i,243,5,50);
        }
        if(arr[j]==4)
        {
            iFilledRectangle(50+i,300,5,50);
            iFilledRectangle(52.5+i,293.5,50,5);
            iFilledRectangle(100+i,300,5,50);
            iFilledRectangle(100+i,243,5,50);
        }
        if(arr[j]==5)
        {
            iFilledRectangle(52.5+i,350,50,5);
            iFilledRectangle(50+i,300,5,50);
            iFilledRectangle(52.5+i,293.5,50,5);
            iFilledRectangle(100+i,243,5,50);
            iFilledRectangle(52.5+i,237.5,50,5);
        }
        if(arr[j]==6)
        {
            iFilledRectangle(50+i,300,5,50);
            iFilledRectangle(52.5+i,293.5,50,5);
            iFilledRectangle(52.5+i,350,50,5);
            iFilledRectangle(50+i,244,5,50);
            iFilledRectangle(52.5+i,237.5,50,5);
            iFilledRectangle(100+i,243,5,50);
        }
        if(arr[j]==7)
        {
            iFilledRectangle(52.5+i,350,50,5);
            iFilledRectangle(100+i,300,5,50);
            iFilledRectangle(100+i,243,5,50);
        }
        if(arr[j]==8)
        {
            iFilledRectangle(50+i,300,5,50);
            iFilledRectangle(52.5+i,293.5,50,5);
            iFilledRectangle(100+i,300,5,50);
            iFilledRectangle(52.5+i,350,50,5);
            iFilledRectangle(50+i,244,5,50);
            iFilledRectangle(52.5+i,237.5,50,5);
            iFilledRectangle(100+i,243,5,50);
        }
        if(arr[j]==9)
        {
            iFilledRectangle(50+i,300,5,50);
            iFilledRectangle(52.5+i,293.5,50,5);
            iFilledRectangle(100+i,300,5,50);
            iFilledRectangle(52.5+i,350,50,5);
            iFilledRectangle(52.5+i,237.5,50,5);
            iFilledRectangle(100+i,243,5,50);
        }
        if(arr[j]==0)
        {
            iFilledRectangle(50+i,300,5,50);
            iFilledRectangle(100+i,300,5,50);
            iFilledRectangle(52.5+i,350,50,5);
            iFilledRectangle(50+i,244,5,50);
            iFilledRectangle(52.5+i,237.5,50,5);
            iFilledRectangle(100+i,243,5,50);
        }
        j++;

    }

}

/*
	function iMouseMove() is called when the user presses and drags the mouse.
	(mx, my) is the position where the mouse pointer is.
	*/


void iMouseMove(int mx, int my)
{
    printf("x = %d, y= %d\n",mx,my);
    //place your codes here
}

/*
	function iMouse() is called when the user presses/releases the mouse.
	(mx, my) is the position where the mouse pointer is.
	*/
void iMouse(int button, int state, int mx, int my)
{
    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
    {
        //place your codes here
        //	printf("x = %d, y= %d\n",mx,my);
        x += 10;
        y += 10;
    }
    if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
    {
        //place your codes here
        x -= 10;
        y -= 10;
    }
}

/*
	function iKeyboard() is called whenever the user hits a key in keyboard.
	key- holds the ASCII value of the key pressed.
	*/
void iKeyboard(unsigned char key)
{
    if (key == 'q')
    {
        exit(0);
    }
    //place your codes for other keys here
}

/*
	function iSpecialKeyboard() is called whenver user hits special keys like-
	function keys, home, end, pg up, pg down, arraows etc. you have to use
	appropriate constants to detect them. A list is:
	GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
	GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
	GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
	GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
	*/
void iSpecialKeyboard(unsigned char key)
{

    if (key == GLUT_KEY_END)
    {
        exit(0);
    }
    //place your codes for other keys here
}


int main()
{

    iSetTimer(1000, iDraw);
    //place your own initialization codes here.
    iInitialize(800, 400, "demo");

    return 0;
}
