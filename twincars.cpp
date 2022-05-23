#include<GL/glut.h>
#include<stdio.h>

GLfloat a=540,b=540,c=600,d=600,e=340,f=340,g=400,h=400,i=86,j=58,k=58,l=86,m=10,n=38,o=38,p=10,q=10,r=740,s=38,t=740,u=38,v=800,w=10,x=800;
GLfloat a1=540,b1=540,c1=600,d1=600,e1=340,f1=340,g1=400,h1=400,i1=114,j2=142,k1=142,l1=114,m1=190,n1=162,o1=162,p1=190,q1=114,r1=740,s1=142,t1=740,u1=142,v1=800,w1=114,x1=800;
GLfloat z1=10,z2=38,z3=38,z4=10,z5=30,z6=30,z7=90,z8=90,ca1=8,ca2=8,ca3=40,ca4=40,ca5=10,ca6=14,ca7=34,ca8=38,ca9=10,ca10=18,ca11=30,ca12=38;
GLfloat y11=114,y2=142,y3=142,y4=114,y5=30,y6=30,y7=90,y8=90,cb1=112,cb2=112,cb3=144,cb4=144,cb5=114,cb6=118,cb7=138,cb8=142,cb9=114,cb10=122,cb11=134,cb12=142;
GLfloat count=0,stop=0,me=0,me1=0,qq=0,qqq=0,stop2=0,stop3=0;
GLfloat ga1=200,ga2=400,ga3=400,ga4=200;
GLfloat sp1=0.07,sp2=0.05;
GLint mnb=0,kl=0,init=0;
GLfloat so11=0,so12=0,so13=100,so14=100,so21=125,so22=125,so23=225,so24=225,so31=250,so32=250,so33=350,so34=350,so41=375,so42=375,so43=475,so44=475,so51=500,so52=500,so53=600,so54=600,so61=625,so62=625,so63=700,so64=700;//,so71=450,so72=450,so73=500,so74=500,so81=525,so82=525,so83=575,so84=575;
void myinit()
{
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	
	gluOrtho2D(0,200,0,600);
	glMatrixMode(GL_MODELVIEW);
}

void drawString()
{ 
    	glColor3f(1.0, 1.0, 1.0);
    	glRasterPos3f(0, 585, 0.0);
    	char c[10]="SCORE:";
    	
		int i;
    	for (i=0; c[i] != '\0'; i++)
    	{
    	
    		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, c[i]); 
		}	
}
void draw4()
{		
		glColor3f(0.7, 0.0, 1.0);
    	glRasterPos3f(20,575, 0.0);
    	
			
    	char c[100]="CGV MINI PROJECT ON TWIN CAR";
char c2[100];
    	char c1[100]="";
    	char c3[100]="UNDER THE GUIDANCE OF:";
    	char c8[100]="MRS. KEERTHANA M M, ASSISTANT PROFESSOR, DEPT. OF CSE";
    	char c4[100]="SUBMITTED BY : ";
    	char c5[100]="Name:MOHAMMED KHALEEQ        USN :4AD18CS041 ";
    	char c6[100]="PRESS 'F' TO START";
    	char c7[100]="Name:NANDAN S     USN :4AD18CS042 ";
char c9[100];	
int i;
		glColor3f(1.0, 0.0, 0.0);
   
    	for (i=0; c[i] != '\0'; i++)
    		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, c[i]);
			glColor3f(0.7, 0.0, 1.0);
    
    		glRasterPos3f(60,530, 0.0);
		for (i=0; c1[i] != '\0'; i++)
    		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, c1[i]);
			glRasterPos3f(40,350, 0.0);
		for (i=0; c2[i] != '\0'; i++)
    		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, c2[i]);
			glRasterPos3f(40,380, 0.0);
		glRasterPos3f(40,380, 0.0);
		for (i=0; c8[i] != '\0'; i++)
    		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, c8[i]);
    			glRasterPos3f(40,320, 0.0);
		for (i=0; c9[i] != '\0'; i++)
    		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, c9[i]);
    		glRasterPos3f(0,420, 0.0);
		for (i=0; c3[i] != '\0'; i++)
    		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, c3[i]);
    		glRasterPos3f(0,280, 0.0);
		for (i=0; c4[i] != '\0'; i++)
    		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, c4[i]);
    		glRasterPos3f(0,250, 0.0);
		for (i=0; c7[i] != '\0'; i++)
    		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, c7[i]);
			
			
			glRasterPos3f(0,210, 0.0);
		for (i=0; c5[i] != '\0'; i++)
    		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, c5[i]);
			glRasterPos3f(50,80, 0.0);
		for (i=0; c6[i] != '\0'; i++)
    		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, c6[i]);	
	
	
}
void draw()
{	
		glColor3f(1.0, 1.0, 1.0);
    	glRasterPos3f(75, 300, 0.0);
    	char c[100]="GAME OVER ";
    	char c1[100]="SCORE=";
		
		int i;
    	for (i=0; c[i]!='\0'; i++)
    	{
    	
    		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, c[i]); 
    		 
		} 
			glColor3f(1.0, 1.0, 1.0);
    	glRasterPos3f(0, 585, 0.0);
		for (i=0; c1[i]!='\0'; i++)
    	{
    	
    		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, c1[i]); 
    		 
		} 
		
}
void draw2()
{
	
    	char c[100]="PRESS S TO START";
    	char c1[100]="PRESS P TO PAUSE";
		char c2[100]="A/a : LEFT";
		char c3[100]="D/d : RIGHT";
		char c4[100]="J/j : LEFT";
		char c5[100]="L/l : RIGHT";	
    	
		int i,j;
		glColor3f(1.0, 0.0, 0.0);
		glRasterPos3f(71, 300, 0.0);
    	for (i=0; c[i]!='\0'; i++)
    	{
    	
    		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, c[i]); 
    		 
		} 
		glRasterPos3f(71, 250, 0.0);
		for (i=0; c1[i]!='\0'; i++)
    	{
    	
    		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, c1[i]); 
    		 
		} 
			glColor3f(1.0,1.0,0.0);
			glRasterPos3f(0,200, 0.0);
		for (i=0; c2[i] != '\0'; i++)
    		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,c2[i]);
			glRasterPos3f(0,250,0.0);
		for (i=0; c3[i] != '\0'; i++)
    		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,c3[i]); 
			glRasterPos3f(160,200,0.0);
			for (i=0; c5[i] != '\0'; i++)
    		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,c5[i]);
			glRasterPos3f(160,250,0.0);
		for (i=0; c4[i] != '\0'; i++)
    		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,c4[i]);	
}

void draw3()
{
		glColor3f(0.0, 1.0, 1.0);
    	glRasterPos3f(0, 300, 0.0);
    	char c[100]="LEVEL COMPLETE ";
    	char c1[100]="PRESS 'S' TO START";
		char c2[100]="NEXT LEVEL";
    	
		int i;
    	for (i=0; c[i]!='\0'; i++)
    	{
    	
    		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, c[i]); 
    		 
		} 
		glRasterPos3f(0, 250, 0.0);
			for (i=0; c1[i]!='\0'; i++)
    	{
    	
    		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, c1[i]); 
    		 
		} 
		glRasterPos3f(0, 200, 0.0);
			for (i=0; c2[i]!='\0'; i++)
    	{
    	
    		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, c2[i]); 
    		 
		} 
		
}
void scoredisp()
{
	int z,j=0,k=0;
	z=mnb;
	glColor3f(1.0,1.0,1.0);
	glRasterPos2f(30,585);
    
	 	
	while(z > 9)
        {
            k = z % 10;
            glRasterPos2f (35,585);
             glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,48+k);         
           z =z/ 10;
           glRasterPos2f(30,585);    
       }     
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,48+z); 	
}

void obj()
{
	count=count+1;
	
	if(count==20000)
	{	
		qq=1;
		qqq=0;
						
		sp1=sp1+0.06;
		sp2=sp2+0.06;
				
		 a=540;
		 b=540;
		 c=600;
		 d=600;
		 e=340;
		 f=340;
		 g=400;
		 h=400;
		 r=740;
		 t=740;
		 v=800;
		 x=800;
		  
		 a1=540;
		 b1=540;
		 c1=600;
		 d1=600;
		 e1=340;
		 f1=340;
		 g1=400;
		 h1=400;
		 r1=740;
		 t1=740;
		 v1=800;
		 x1=800;
		 
		me1=1;
		me=0;
		
	}
	if(count==40000)
	{	
		qq=1;
		qqq=0;
			
		sp1=sp1+0.06;
		sp2=sp2+0.06;
		
		 a=540;
		 b=540;
		 c=600;
		 d=600;
		 e=340;
		 f=340;
		 g=400;
		 h=400;
		 r=740;
		 t=740;
		 v=800;
		 x=800;
		 
		 a1=540;
		 b1=540;
		 c1=600;
		 d1=600;
		 e1=340;
		 f1=340;
		 g1=400;
		 h1=400;
		 r1=740;
		 t1=740;
		 v1=800;
		 x1=800;
		 
		me1=1;
		me=0;
		
	}
	if(count==50000)
	{	
		qq=1;
		qqq=0;
			
		sp1=sp1+0.06;
		sp2=sp2+0.06;
		
		 a=540;
		 b=540;
		 c=600;
		 d=600;
		 e=340;
		 f=340;
		 g=400;
		 h=400;
		 r=740;
		 t=740;
		 v=800;
		 x=800;
		 		 
		 a1=540;
		 b1=540;
		 c1=600;
		 d1=600;
		 e1=340;
		 f1=340;
		 g1=400;
		 h1=400;
		 r1=740;
		 t1=740;
		 v1=800;
		 x1=800;
		 
		me1=1;
		me=0;
		
	}
	
	if(me==1)
	{
		qqq=1;
	
	if(stop==0)
	{
		if(stop2==0)
		{	
		//FIRST BOXES MOV
		if(a>0||b>0||c>0||d>0)
		{
		a=a-sp1;
		b=b-sp1;
		c=c-sp1;
		d=d-sp1;
		}
		else
		{
		a=540;
		b=540;
		c=600;
		d=600;
		}
		
		if(e>0||f>0||g>0||h>0)
		{
		
		e=e-sp1;
		f=f-sp1;
		g=g-sp1;
		h=h-sp1;
		
		}
		else
		{
		
		e=540;
		f=540;
		g=600;
		h=600;
		}
		
		if(r>0||t>0||v>0||x>0)
		{
		
		r=r-sp1;
		t=t-sp1;
		v=v-sp1;
		x=x-sp1;
		
		}
		else
		{
		
		r=540;
		t=540;
		v=600;
		x=600;
		}
		}
		
		if(stop3==0)
		{
		
		//SECOND BOXES MOV
		
		if(a1>0||b1>0||c1>0||d1>0)
		{
		a1=a1-sp2;
		b1=b1-sp2;
		c1=c1-sp2;
		d1=d1-sp2;
		}
		else
		{
		
		a1=540;
		b1=540;
		c1=600;
		d1=600;
		}
		
		if(e1>0||f1>0||g1>0||h1>0)
		{
		
		e1=e1-sp2;
		f1=f1-sp2;
		g1=g1-sp2;
		h1=h1-sp2;
		
		}
		else
		{
		
		e1=540;
		f1=540;
		g1=600;
		h1=600;
		}
		
		if(r1>0||t1>0||v1>0||x1>0)
		{
		
		r1=r1-sp2;
		t1=t1-sp2;
		v1=v1-sp2;
		x1=x1-sp2;
		
		}
		else
		{
		
		r1=540;
		t1=540;
		v1=600;
		x1=600;
		}
		
		}
		
		//WHITE LINE MOV
		
		
		if(so11>0||so12>0||so13>0||so14>0)
		{
		
		so11=so11-0.09375;
		so12=so12-0.09375;
		so13=so13-0.09375;
		so14=so14-0.09375;
		}
		else
		{
		
		so11=625;
		so12=625;
		so13=700;
		so14=700;
		}
		if(so21>0||so22>0||so23>0||so24>0)
		{
		so21=so21-0.09375;
		so22=so22-0.09375;
		so23=so23-0.09375;
		so24=so24-0.09375;
		}
		else
		{
		so21=625;
		so22=625;
		so23=700;
		so24=700;
		}
		
		if(so31>0||so32>0||so33>0||so34>0)
		{
		so31=so31-0.09375;
		so32=so32-0.09375;
		so33=so33-0.09375;
		so34=so34-0.09375;
		}
		else
		{
		so31=625;
		so32=625;
		so33=700;
		so34=700;
		}
		if(so41>0||so42>0||so43>0||so44>0)
		{
		so41=so41-0.09375;
		so42=so42-0.09375;
		so43=so43-0.09375;
		so44=so44-0.09375;
		}
		else
		{
		so41=625;
		so42=625;
		so43=700;
		so44=700;
		}
		if(so51>0||so52>0||so53>0||so54>0)
		{
		so51=so51-0.09375;
		so52=so52-0.09375;
		so53=so53-0.09375;
		so54=so54-0.09375;
		}
		else
		{
		so51=625;
		so52=625;
		so53=700;
		so54=700;
		}
		if(so61>0||so62>0||so63>0||so64>0)
		{
			so61=so61-0.09375;
			so62=so62-0.09375;
			so63=so63-0.09375;
			so64=so64-0.09375;
		}
		else
		{
			so61=625;
			so62=625;
			so63=700;
			so64=700;
		}
	
	}
	else
	{
		if(ga1>=0||ga2>=0||ga3>=0||ga4>=0)                   
		{
			ga1=0;
			ga2=200;
			ga3=200;
			ga4=0;			
		}
	}
		
		//FIRST CAR COLLISSION
		if((m==z4&&e<z8&&e>z5)||(p==z4&&h<z8&&h>z5))
		{
		//stop=1;
		stop2=1;
		
		}
		else if((i==z4&&a<z8&&a>z5)||(l==z4&&d<z8&&d>z8))
		{
		//stop=1;
		stop2=1;
		}
		else if((q==z4&&r<z8&r>z5)||(w==z4&&x<z8&&x>z8))
		{
		//stop=1;
		stop2=1;
		}
				
		//SECOND CAR COLLISION
		
		if((m1==y4&&e1<y8&&e1>y5)||(p1==y4&&h1<y8&&h1>y5))
		{
		//stop=1;
		//stop2=2;
		stop3=1;
		}
		else if((i1==y4&&a1<y8&&a1>y5)||(l1==y4&&d1<y8&&d1>y5))
		{
		//stop=1;
		//stop2=2;
		stop3=1;
		}
		else if((q1==y4&&r1<y8&&r1>y5)||(w1==y4&&x1<y8&&x1>y5))
		{
		//stop=1;
		//
		//sstop2=2;
		stop3=1;
		}	
		glutPostRedisplay();	
		
	}
	
		glutPostRedisplay();
}
void display()
{	
	glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glClearColor(0.0,0.0,0.0,0.0);
	glColor3f(0.0,1.0,0.0);
		
	glBegin(GL_POLYGON);
		glVertex2f(96,0);
		glVertex2f(104,0);				//DIVIDER
		glVertex2f(104,600);
		glVertex2f(96,600);
	glEnd();
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_POLYGON);
				glVertex2f(i,a);		//FIRST BOX
				glVertex2f(j,b);
				glVertex2f(k,c);
				glVertex2f(l,d);
	glEnd();
	glBegin(GL_POLYGON);
			glVertex2f(m,e);			//SECOND BOX
			glVertex2f(n,f);
			glVertex2f(o,g);
		    glVertex2f(p,h);
	glEnd();
	glBegin(GL_POLYGON);
			glVertex2f(q,r);
			glVertex2f(s,t);				//THIRD BOX
			glVertex2f(u,v);
		    glVertex2f(w,x);
	glEnd();
		
	
	//SECOND PATH
		
	glBegin(GL_POLYGON);
				glVertex2f(i1,a1);		//FIRST BOX
				glVertex2f(j2,b1);
				glVertex2f(k1,c1);
				glVertex2f(l1,d1);
	glEnd();
	glBegin(GL_POLYGON);
			glVertex2f(m1,e1);			//SECOND BOX
			glVertex2f(n1,f1);
			glVertex2f(o1,g1);
		    glVertex2f(p1,h1);
	glEnd();
	glBegin(GL_POLYGON);
			glVertex2f(q1,r1);
			glVertex2f(s1,t1);				//THIRD BOX
			glVertex2f(u1,v1);
		    glVertex2f(w1,x1);
	glEnd();


	//DISPLAY OF MIDDLE WHITE OF FIRST PATH
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);
		glVertex2f(46,so11);
		glVertex2f(51,so12);
		glVertex2f(51,so13);
		glVertex2f(46,so14);
	glEnd();
	glBegin(GL_POLYGON);
		glVertex2f(46,so21);
		glVertex2f(51,so22);
		glVertex2f(51,so23);
		glVertex2f(46,so24);
	glEnd();
	glBegin(GL_POLYGON);
		glVertex2f(46,so31);
		glVertex2f(51,so32);
		glVertex2f(51,so33);
		glVertex2f(46,so34);
	glEnd();
	glBegin(GL_POLYGON);
		glVertex2f(46,so41);
		glVertex2f(51,so42);
		glVertex2f(51,so43);
		glVertex2f(46,so44);
	glEnd();
	glBegin(GL_POLYGON);
		glVertex2f(46,so51);
		glVertex2f(51,so52);
		glVertex2f(51,so53);
		glVertex2f(46,so54);
	glEnd();
	glBegin(GL_POLYGON);
		glVertex2f(46,so61);
		glVertex2f(51,so62);
		glVertex2f(51,so63);
		glVertex2f(46,so64);
	glEnd();
	
	//DISPLAY OF WHITE MIDDLE OF SECOND PATH
	
	glBegin(GL_POLYGON);
		glVertex2f(149,so11);
		glVertex2f(154,so12);
		glVertex2f(154,so13);
		glVertex2f(149,so14);
	glEnd();
	glBegin(GL_POLYGON);
		glVertex2f(149,so21);
		glVertex2f(154,so22);
		glVertex2f(154,so23);
		glVertex2f(149,so24);
	glEnd();
	glBegin(GL_POLYGON);
		glVertex2f(149,so31);
		glVertex2f(154,so32);
		glVertex2f(154,so33);
		glVertex2f(149,so34);
	glEnd();
	glBegin(GL_POLYGON);
		glVertex2f(149,so41);
		glVertex2f(154,so42);
		glVertex2f(154,so43);
		glVertex2f(149,so44);
	glEnd();
	glBegin(GL_POLYGON);
		glVertex2f(149,so51);
		glVertex2f(154,so52);
		glVertex2f(154,so53);
		glVertex2f(149,so54);
	glEnd();
	glBegin(GL_POLYGON);
		glVertex2f(149,so61);
		glVertex2f(154,so62);
		glVertex2f(154,so63);
		glVertex2f(149,so64);
	glEnd();
	
		glColor3f(0.6,0.6,0.6);
		glPointSize(20);
		glBegin(GL_POINTS);					// CAR 1
			glVertex2f(ca1,76);
			glVertex2f(ca2,45);
			glVertex2f(ca3,45);
			glVertex2f(ca4,76);
		glEnd();
		glColor3f(0.0,0.1,1.0);
    glBegin(GL_POLYGON);
		glVertex2f(z1,z5);
		glVertex2f(z2,z6);
		glVertex2f(z3,z7);
		glVertex2f(z4,z8);
		
		
	glEnd();
			glColor3f(1.0,1.0,0.0);
    glBegin(GL_POLYGON);
		glVertex2f(ca5,90);
		glVertex2f(ca6,95);
		glVertex2f(ca7,95);
		glVertex2f(ca8,90);
		
		
	glEnd();
			glColor3f(1.0,1.0,0.0);
    glBegin(GL_POLYGON);
		glVertex2f(ca9,30);
		glVertex2f(ca10,23);
		glVertex2f(ca11,23);
		glVertex2f(ca12,30);
	glEnd();
	
	glColor3f(0.6,0.6,0.6);
		glPointSize(20);
		glBegin(GL_POINTS);
			glVertex2f(cb1,76);
			glVertex2f(cb2,45);
			glVertex2f(cb3,45);
			glVertex2f(cb4,76);
		glEnd();
		glColor3f(0.0,0.1,1.0);				
	glBegin(GL_POLYGON);
			glVertex2f(y11,y5);			//CAR2
			glVertex2f(y2,y6);
			glVertex2f(y3,y7);
			glVertex2f(y4,y8);
	glEnd();
			glColor3f(1.0,1.0,0.0);
    glBegin(GL_POLYGON);
		glVertex2f(cb5,90);
		glVertex2f(cb6,95);
		glVertex2f(cb7,95);
		glVertex2f(cb8,90);
		
		
	glEnd();
			glColor3f(1.0,1.0,0.0);
    glBegin(GL_POLYGON);
		glVertex2f(cb9,30);
		glVertex2f(cb10,23);
		glVertex2f(cb11,23);
		glVertex2f(cb12,30);
	glEnd();
		
	drawString();
	
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
		glVertex2f(ga1,0);
		glVertex2f(ga2,0);
		glVertex2f(ga3,600);
		glVertex2f(ga4,600);
	glEnd();
	if(stop2==1&&stop3==1)
	{
		glBegin(GL_POLYGON);
			glVertex2f(0,0);
			glVertex2f(300,0);				
			glVertex2f(300,600);
			glVertex2f(0,600);
		glEnd();
	draw();
	}
	if(me==0&&me1==0)
	{
		draw2();
	}
	if(qq==1&&qqq==0&&stop2==0&&stop3==0)
	{	
	
		draw3();
	}
	
	scoredisp();
	
    if(init==0)
	{	
		glColor3f(0.0,0.0,0.0);
		glBegin(GL_POLYGON);
			glVertex2f(0,0);
			glVertex2f(300,0);				
			glVertex2f(300,600);
			glVertex2f(0,600);
		glEnd();
		draw4();
	}	
			
	glFlush();
}
void movright1()
{
	if(y11==114&&y2==142&&y3==142&&y4==114)
	{
	y11=y11+76;
	y2=y2+20;
	y3=y3+20;
	y4=y4+76;
	
	cb1=cb1+48;
	cb2=cb2+48;
	cb3=cb3+48;
	cb4=cb4+48;

	cb5=cb5+48;
	cb6=cb6+48;
	cb7=cb7+48;
	cb8=cb8+48;
	
	cb9=cb9+48;
	cb10=cb10+48;
	cb11=cb11+48;
	cb12=cb12+48;
	}
}
void movleft1()
{
	if(y11==190&&y2==162&&y3==162&&y4==190)
	{
	y11=y11-76;
	y2=y2-20;
	y3=y3-20;
	y4=y4-76;
	
	cb1=cb1-48;
	cb2=cb2-48;
	cb3=cb3-48;
	cb4=cb4-48;

	cb5=cb5-48;
	cb6=cb6-48;
	cb7=cb7-48;
	cb8=cb8-48;
	
	cb9=cb9-48;
	cb10=cb10-48;
	cb11=cb11-48;
	cb12=cb12-48;
	}
}
void movleft()
{
	if(z1==86&&z2==58&&z3==58&&z4==86)
	{
	z1=z1-76;
	z2=z2-20;
	z3=z3-20;
	z4=z4-76;
	
	ca1=ca1-48;
	ca2=ca2-48;
	ca3=ca3-48;
	ca4=ca4-48;
	
	ca5=ca5-48;
	ca6=ca6-48;
	ca7=ca7-48;
	ca8=ca8-48;
	
	ca9=ca9-48;
	ca10=ca10-48;
	ca11=ca11-48;
	ca12=ca12-48;
	}
}


void movright()
{
	if(z1==10&&z2==38&&z3==38&&z4==10)
	{
	z1=z1+76;
	z2=z2+20;
	z3=z3+20;
	z4=z4+76;
	
	ca1=ca1+48;
	ca2=ca2+48;
	ca3=ca3+48;
	ca4=ca4+48;
	
	ca5=ca5+48;
	ca6=ca6+48;
	ca7=ca7+48;
	ca8=ca8+48;
	
	ca9=ca9+48;
	ca10=ca10+48;
	ca11=ca11+48;
	ca12=ca12+48;
	
	}
	
}
void asd(unsigned char key,int x,int y)
{	if(stop==0)
	mnb=mnb+1;
	if(key=='a'||key=='A')
	{
		movleft();
    }
	if(key=='d'||key=='D')
	{
		movright();
    }
    if(key=='j'||key=='J')
    {
    	movleft1();
    }
    if(key=='l'||key=='L')
    {
    	movright1();	
    }
    if(key=='s'||key=='S')
    {
    	me=1;
    }
    if(key=='p'||key=='P')
    {
    	me=0;
    
    }
    if(key=='f'||key=='F')
    {
    	init=1;
    }
}
void menu(int id)
{
	switch(id)
	{
		case 1: exit(0);
			break;
		case 2:	me=1;
			break;
		case 3: me=0;
			break;
	}
	glutPostRedisplay();
}
int main(int argc, char** argv)
{
	glutInit(&argc,argv);
	glutInitWindowSize(500,700);
	glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(300,000);
	glutCreateWindow("TWIN CARS");
	myinit ();
	glutIdleFunc(obj);
	glutKeyboardFunc(asd);
	glutCreateMenu(menu);
	glutAddMenuEntry("QUIT", 1);
	glutAddMenuEntry("START", 2);
	glutAddMenuEntry("PAUSE", 3);
	glutAttachMenu(GLUT_RIGHT_BUTTON);
	glutDisplayFunc(display);
	
	glutMainLoop();

}

