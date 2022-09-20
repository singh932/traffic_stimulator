
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
#include<dos.h>
void main()
{
  int gdriver=DETECT,gmode,errorcode;
  initgraph(&gdriver,&gmode,"c:\\turboc3\\bgi");
  errorcode=graphresult();
  if(errorcode!=grOk)
  {
    printf("graphic error:%s\n",grapherrormsg(errorcode));
    printf("press any key to halt:");
    getch();
    exit(1);

  }

  int x,y,i,j;
  int midx,midy;
  midx=getmaxx()/2;
  midy=getmaxy()/2;
  x=getmaxx();
  y=getmaxy();
  setcolor(7);
  rectangle(0,0,x,y);  //outer rectangle
  circle(midx,midy,12);
  circle(midx,midy,1);

  setcolor(2);
  rectangle(0,0,midx-70,midy-70);     //4 green rectangles
  rectangle(midx+70,0,x,midy-70);
  rectangle(0,midy+70,midx-70,y);
  rectangle(midx+70,midy+70,x,y);
  setfillstyle(1,2);
  floodfill(35,35,2);
  floodfill(35,midy+105,2);
  floodfill(midx+125,35,2);
  floodfill(midx+125,midy+105,2);

  setcolor(8);                                   //8 grey rectangle
  setfillstyle(1,8);                              //verti
  rectangle(midx-100,0,midx-90,midy-70);         //up left rect
  floodfill(midx-95,midy-105,8);
  rectangle(midx-100,midy+70,midx-90,y);         //down left rect
  floodfill(midx-95,midy+105,8);
  rectangle(midx+90,0,midx+100,midy-70);        //up right rect
  floodfill(midx+95,midy-105,8);
  rectangle(midx+90,midy+70,midx+100,y);        //down right rect
  floodfill(midx+95,midy+105,8);
  setcolor(7);                                   //white rectangle
  rectangle(midx-69,midy-100,midx+69,midy-90);	     // up white rect				//lightgrey horizontal
  rectangle(midx-69,midy+90,midx+69,midy+100);      //down white rect
  rectangle(midx-100,midy-69,midx-90,midy+69);      //left white rect
  rectangle(midx+90,midy-69,midx+100,midy+69);     //right white rect

  rectangle(0,midy-100,midx-70,midy-90);        //up left dark grey rect
  floodfill(midx-105,midy-95,7);
  rectangle(midx+70,midy-100,x,midy-90);        //up right dark gery rect
  floodfill(midx+105,midy-95,7);
  rectangle(0,midy+90,midx-70,midy+100);        //down left dark grey rect
  floodfill(midx-105,midy+95,7);
  rectangle(midx+70,midy+90,x,midy+100);        //down right dark grey rect
  floodfill(midx+105,midy+95,7);
  setcolor(8);                                  //
  rectangle(0,midy-100,midx-70,midy-90);        //
  rectangle(midx+70,midy-100,x,midy-90);        //coloring horizontal rec with dark grey
  rectangle(0,midy+90,midx-70,midy+100);        //
  rectangle(midx+70,midy+90,x,midy+100);        //

  setcolor(14);
  setfillstyle(1,14);                     //yellow line
  rectangle(0,midy,midx-100,midy+5);   // left road divider
  rectangle(midx+100,midy,x,midy+5);      //right
  rectangle(midx-2,0,midx+2,midy-100);    //top
  rectangle(midx-2,midy+100,midx+2,y);       //bottom
  floodfill(midx-150,midy+3,14);       //left color
  floodfill(midx+150,midy+3,14);             //right color
  floodfill(midx-1,midy-150,14);      //top color
  floodfill(midx-1,midy+150,14);
  setcolor(15);
    setfillstyle(1,15);       		       //white line
  for(i=2;i<midx-100;i=i+20)
  {                   //left white horizontal line
      rectangle(i,midy-35,i+15,midy-30);
      rectangle(i,midy+35,i+15,midy+40);
      floodfill(i+7,midy-33,15);
      floodfill(i+7,midy+38,15);
  }
  for(i=midx+102;i<x;i=i+20)           //right white horizontal line
  {
     rectangle(i,midy-35,i+15,midy-30);
     rectangle(i,midy+35,i+15,midy+40);
     floodfill(i+7,midy-33,15);
     floodfill(i+7,midy+38,15);
  }
 for(j=0;j<midy-100;j=j+20)            //up white vertical line
  {
    rectangle(midx-39,j,midx-34,j+15);
    rectangle(midx+34,j,midx+39,j+15);
    floodfill(midx-37,j+7,15);
    floodfill(midx+36,j+7,15);
  }
  for(j=midy+102;j<y;j=j+20)           //down white vertical line
  {
    rectangle(midx-39,j,midx-34,j+15);
    rectangle(midx+34,j,midx+39,j+15);
    floodfill(midx-37,j+7,15);
    floodfill(midx+36,j+7,15);
  }
  setcolor(14);                                   //yellow rect traffic vste
  setfillstyle(1,14);
  rectangle(midx-71,midy-100,midx+2,midy-96);      //up traffic rect
  floodfill(midx-34,midy-97,14);
  rectangle(midx+96,midy-71,midx+100,midy+5);      //right traffic rect
  floodfill(midx+98,midy-37,14);
  rectangle(midx-2,midy+96,midx+71,midy+100);      //down traffic rect
  floodfill(midx+16,midy+98,14);
  rectangle(midx-96,midy,midx-100,midy+71);      //left traffic rect
  floodfill(midx-98,midy+34,14);

  setcolor(0);		   //black  traffic rect
  setfillstyle(1,0);
  rectangle(midx-83,midy-129,midx-71,midy-95);  //1  // up black traffic rect
  floodfill(midx-78,midy-110,0);
  /*  setcolor(4);
    circle(midx-77,midy-101,4); //red 1 circle
    setcolor(14);
    circle(midx-77,midy-112,4);   //yellow 1 circle
    setcolor(2);
    circle(midx-77,midy-123,4);    //green 1 circle
    */
  setcolor(0);
  rectangle(midx+96,midy-83,midx+131,midy-71);  //2 // right  black traffic rect
  floodfill(midx+113,midy-76,0);
/*    setcolor(4);
    circle(midx+101,midy-77,4);  //red 2  circle
    setcolor(14);
    circle(midx+113,midy-77,4);    //yellow 2 circle
    setcolor(2);
    circle(midx+125,midy-77,4);     //green 2 circle
  */
  setcolor(0);
  rectangle(midx+71,midy+96,midx+84,midy+131);//3  //down  black traffic rect
  floodfill(midx+77,midy+113,0);
 /*   setcolor(4);
    circle(midx+77,midy+101,4);  //red 3 cicle
    setcolor(14);
    circle(midx+77,midy+113,4);    //yellow 3 circle
    setcolor(2);
    circle(midx+77,midy+125,4);      //green 3 circle
   */
  setcolor(0);
  rectangle(midx-130,midy+84,midx-96,midy+71); //4 // left black traffic rect
  floodfill(midx-122,midy+77,0);
   /* setcolor(4);

    circle(midx-101,midy+78,4);   //red 4 circle
    setcolor(14);
    circle(midx-112,midy+78,4);      //yellow 4 circle
    setcolor(2);
    circle(midx-124,midy+78,4);  //green 4 circle
     */
  while(!kbhit())
  {
     setcolor(2);   //1
     setfillstyle(1,2);       //green    //1
     pieslice(midx-77,midy-123,0,360,4);

     setfillstyle(1,4);  //2		   //red  //2
     setcolor(4);
     pieslice(midx+101,midy-77,0,360,4);

     setfillstyle(1,4);  //3		   //red  //3
     setcolor(4);
     pieslice(midx+77,midy+101,0,360,4);
     setfillstyle(1,4);  //4		    //red  //4
     setcolor(4);
     pieslice(midx-101,midy+78,0,360,4);

     setcolor(2);       //5
     setfillstyle(1,2);       //green blink   //1
     pieslice(midx-77,midy-123,0,360,4);
     delay(2000);

     setfillstyle(1,0);        //6	      //green //1//black
     setcolor(0);
     pieslice(midx-77,midy-123,0,360,4);
     delay(1000);

     setfillstyle(1,14);          //7	    //yellow //1//
     setcolor(14);
     pieslice(midx-77,midy-112,0,360,4);
     delay(2000);

    setfillstyle(1,0);      //8	//yellow /black/1//
    setcolor(0);
    pieslice(midx-77,midy-112,0,360,4);
    delay(1000);

     setfillstyle(1,4);         //9	     //red //1//
     setcolor(4);
     pieslice(midx-77,midy-101,0,360,4);

     setfillstyle(1,0);          //10	   //red black  //4
     setcolor(0);
     pieslice(midx-101,midy+78,0,360,4);

     setfillstyle(1,2);              //11	//green //4//
     setcolor(2);
     pieslice(midx-124,midy+78,0,360,4);
     delay(2000);

     setfillstyle(1,0);             //12	 //green //black//4//
     setcolor(0);
     pieslice(midx-124,midy+78,0,360,4);
     delay(1000);

       setfillstyle(1,14);          //13    // yellow 4//
       setcolor(14);
       pieslice(midx-112,midy+78,0,360,4);
       delay(2000);

       setfillstyle(1,0);           //14	   // yellow//black 4//
       setcolor(0);
       pieslice(midx-112,midy+78,0,360,4);
       delay(1000);

       setfillstyle(1,4);           //15	  //red  //4
       setcolor(4);
       pieslice(midx-101,midy+78,0,360,4);

	setfillstyle(1,0);           //16      //red 2 black
	setcolor(0);
	pieslice(midx+101,midy-77,0,360,4);

       setfillstyle(1,2);     //17   //green 2
       setcolor(2);
       pieslice(midx+125,midy-77,0,360,4);
       delay(2000);

       setfillstyle(1,0);     //18      //green 2//black
       setcolor(0);
       pieslice(midx+125,midy-77,0,360,4);
       delay(1000);

       setfillstyle(1,14);   //19      setcolor(14);
       pieslice(midx+113,midy-77,0,360,4);    //yellow 2 circle
       delay(2000);

       setfillstyle(1,0);    //20
       setcolor(0);
       pieslice(midx+113,midy-77,0,360,4);    //yellow 2 black circle
       delay(1000);

	setfillstyle(1,4);     //21	    //red 2
	setcolor(4);
	pieslice(midx+101,midy-77,0,360,4);

       setfillstyle(1,0);     //22		//red  3 black
       setcolor(0);
       pieslice(midx+77,midy+101,0,360,4);

	 setfillstyle(1,2);  //23	  //green 3 circle
	  setcolor(2);
	 pieslice(midx+77,midy+125,0,360,4);
	 delay(2000);

	 setfillstyle(1,0);   //24	 //green 3 black circle
	  setcolor(0);
	 pieslice(midx+77,midy+125,0,360,4);
	 delay(1000);

	  setfillstyle(1,14); //25   //yellow 3
	  setcolor(14);
	  pieslice(midx+77,midy+113,0,360,4);
	   delay(2000);
	  setfillstyle(1,0);  //26   //yellow 3  black
	  setcolor(0);
	  pieslice(midx+77,midy+113,0,360,4);
	  delay(1000);

	  setfillstyle(1,0); //27     //red 1 black
	  setcolor(0);
	 pieslice(midx-77,midy-101,0,360,4);
  }
  getch();
  closegraph();
}


