    #include<iostream.h>
    #include<conio.h>
    #include<process.h>
    #include<stdio.h>
    #include<dos.h>
    #include<stdlib.h>
    #include<fstream.h>
    #include<graphics.h>
    const long int LEFT=75,RIGHT=77,UP=72,DOWN=80,ENTER=13;
    class CAR
    {
    public:
    int vel, cp, init, op1, op2, op3, level;
    long score;
    long lev_score[ 5 ];
    char player[ 20 ];
    CAR::CAR()
    {
    level = 1;
    vel = 1;
    cp = 300;
    init = 0;
    op1 = 0;
    op2 = -20;
    op3 = -40;
    score = 0;
    lev_score[ 0 ] = 10000;
    lev_score[ 1 ] = 30000;
    lev_score[ 2 ] = 60000;
    lev_score[ 3 ] = 100000;
    lev_score[ 4 ] = 150000;
    }
    }
    car;

 void page()
{
 clrscr();
 char mch;
 int h=DETECT,g;
 initgraph(&h,&g,"c:\\turboc3\\bgi");
 setfillstyle(SOLID_FILL,BLUE);
 line(15,10,625,10);
 line(15,10,15,470);
 line(15,470,625,470);
 line(625,10,625,470);
 settextstyle(10,0,10);
 outtext(" P S P");
 settextstyle(7,0,1);
 outtextxy(70,250,"PRAVEEN");
 outtextxy(300,250,"SAKTHI");
 outtextxy(470,250,"PRANAV");
 settextstyle(10,0,4);
 outtextxy(190,350,"DEVELOPERS");
 floodfill(262,26,WHITE);
 delay(3000);
 cleardevice();
 line(15,10,625,10);
 line(15,10,15,470);
 line(15,470,625,470);
 line(625,10,625,470);

 setfillstyle(SOLID_FILL,RED);
	line(273,68,285,65);delay(0);
	line(285,65,298,63);delay(0);
	line(298,63,306,63);delay(0);
	line(306,63,314,65);delay(0);
	line(314,65,327,66);delay(0);
	line(327,66,334,68);delay(0);
	line(334,68,328,117);delay(0);
	line(328,117,279,117);delay(0);
	line(279,117,273,68);delay(0);



//========PART 2===========/
line(283,124,324,124);delay(0);
line(324,124,324,178);delay(0);
line(324,178,314,180);delay(0);
line(314,180,304,182);delay(0);
line(304,182,294,180);delay(0);
line(294,180,283,178);delay(0);
line(283,178,283,124);delay(0);



//==============PART 3=======================//
line(335,100,339,68);delay(0);
line(339,68,347,71);delay(0);
line(347,71,352,73);delay(0);
line(352,73,357,75);delay(0);
line(357,75,360,77);delay(0);
line(360,77,363,79);delay(0);
line(363,79,368,82);delay(0);
line(368,82,371,85);delay(0);
line(371,85,375,89);delay(0);
line(375,89,378,93);delay(0);
line(378,93,382,97);delay(0);
line(382,97,385,100);delay(0);
line(385,100,386,112);delay(0);
line(386,112,388,122);delay(0);
line(388,122,389,135);delay(0);
line(389,135,389,146);delay(0);
line(389,146,389,159);delay(0);
line(389,159,392,162);delay(0);
line(392,162,395,165);delay(0);
line(395,165,397,170);delay(0);
line(397,170,398,173);delay(0);
line(398,173,399,182);delay(0);
line(399,182,399,191);delay(0);
line(399,191,400,197);delay(0);
line(400,197,398,207);delay(0);
line(398,207,396,215);delay(0);
line(396,215,393,222);delay(0);
line(393,222,391,229);delay(0);
line(391,229,390,231);delay(0);
line(390,231,388,240);delay(0);
line(388,240,385,251);delay(0);
line(385,251,383,260);delay(0);
line(383,260,381,267);delay(0);
line(381,267,379,274);delay(0);
line(379,274,378,287);delay(0);
line(378,287,378,301);delay(0);
line(378,301,377,306);delay(0);
line(377,306,376,311);delay(0);
line(376,311,374,318);delay(0);
line(374,318,371,325);delay(0);
line(371,325,367,332);delay(0);
line(367,332,363,336);delay(0);
line(363,336,360,341);delay(0);
line(360,341,346,363);delay(0);
line(346,363,339,370);delay(0);
line(339,370,321,359);delay(0);
line(321,359,284,359);delay(0);
line(284,359,263,370);delay(0);
line(263,370,258,363);delay(0);
line(258,363,247,347);delay(0);
line(247,347,240,336);delay(0);
line(240,336,232,324);delay(0);
line(232,324,227,311);delay(0);
line(227,311,226,292);delay(0);
line(226,292,223,255);delay(0);
line(223,255,218,245);delay(0);
line(218,245,217,231);delay(0);
line(217,231,211,217);delay(0);
line(211,217,208,204);delay(0);
line(208,204,207,184);delay(0);
line(207,184,208,174);delay(0);
line(208,174,211,165);delay(0);
line(211,165,217,157);delay(0);
line(217,157,220,100);delay(0);
line(220,100,228,92);delay(0);
line(228,92,233,86);delay(0);
line(233,86,239,81);delay(0);
line(239,81,245,77);delay(0);
line(245,77,254,73);delay(0);
line(254,73,267,67);delay(0);
line(267,67,271,100);delay(0);
line(271,100,250,105);delay(0);
line(250,105,246,90);delay(0);
line(246,90,246,106);delay(0);
line(246,106,237,111);delay(0);
line(237,111,231,114);delay(0);
line(231,114,225,120);delay(0);
line(225,120,226,136);delay(0);
line(226,136,227,148);delay(0);
line(227,148,227,164);delay(0);
line(227,164,227,206);delay(0);
line(227,206,225,215);delay(0);
line(225,215,221,231);delay(0);
line(221,231,222,244);delay(0);
line(222,244,223,249);delay(0);
line(223,249,254,310);delay(0);
line(254,310,253,318);delay(0);
line(253,318,252,325);delay(0);
line(252,325,251,331);delay(0);
line(251,331,263,355);delay(0);
line(263,355,272,354);delay(0);
line(272,354,280,351);delay(0);
line(280,351,294,352);delay(0);
line(294,352,296,351);delay(0);
line(296,351,298,350);delay(0);
line(298,350,299,349);delay(0);
line(299,349,307,349);delay(0);
line(307,349,312,352);delay(0);
line(312,352,327,352);delay(0);
line(327,352,334,355);delay(0);
line(334,355,341,355);delay(0);
line(341,355,355,329);delay(0);
line(355,329,353,321);delay(0);
line(353,321,353,316);delay(0);
line(353,316,357,306);delay(0);
line(357,306,365,291);delay(0);
line(365,291,371,281);delay(0);
line(371,281,375,275);delay(0);
line(375,275,378,266);delay(0);
line(378,266,382,254);delay(0);
line(382,254,384,242);delay(0);
line(384,242,386,233);delay(0);
line(386,233,385,227);delay(0);
line(385,227,383,218);delay(0);
line(383,218,381,212);delay(0);
line(381,212,380,209);delay(0);
line(380,209,381,120);delay(0);
line(381,120,376,116);delay(0);
line(376,116,373,114);delay(0);
line(373,114,367,111);delay(0);
line(367,111,359,108);delay(0);
line(359,108,358,92);delay(0);
line(358,92,353,104);delay(0);
line(353,104,335,100);delay(0);
line(375,89,367,111);delay(0);
line(396,215,381,212);delay(0);
line(367,332,355,329);delay(0);
line(228,92,231,114);delay(0);
line(211,217,227,206);delay(0);



//===PART 4====//
line(267,371,283,363);delay(0);
line(283,363,320,363);delay(0);
line(320,363,334,371);delay(0);
line(334,371,327,372);delay(0);
line(327,372,315,373);delay(0);
line(315,373,291,373);delay(0);
line(291,373,280,372);delay(0);
line(280,372,267,371);delay(0);



//=====PART 5====//
line(257,321,268,339);delay(0);
line(268,339,276,329);delay(0);
line(276,329,330,329);delay(0);
line(330,329,338,339);delay(0);
line(338,339,348,321);delay(0);
line(348,321,349,330);delay(0);
line(349,330,340,349);delay(0);
line(340,349,338,351);delay(0);
line(338,351,334,349);delay(0);
line(334,349,328,346);delay(0);
line(328,346,312,346);delay(0);
line(312,346,311,345);delay(0);
line(311,345,297,345);delay(0);
line(297,345,296,347);delay(0);
line(296,347,280,346);delay(0);
line(280,346,269,350);delay(0);
line(269,350,267,351);delay(0);
line(267,351,256,332);delay(0);
line(256,332,257,321);delay(0);

//========PART 6======//
line(229,123,237,117);delay(0);
line(237,117,242,115);delay(0);
line(242,115,245,114);delay(0);
line(245,114,251,112);delay(0);
line(251,112,260,110);delay(0);
line(260,110,266,107);delay(0);
line(266,107,272,106);delay(0);
line(272,106,279,182);delay(0);
line(279,182,303,189);delay(0);
char ssd;
line(303,189,326,182);delay(0);
line(326,182,334,104);delay(0);
line(334,104,346,109);delay(0);
line(346,109,355,112);delay(0);
line(355,112,361,115);delay(0);
line(361,115,367,118);delay(0);
line(367,118,373,121);delay(0);
line(373,121,377,124);delay(0);
line(377,124,375,133);delay(0);
line(375,133,374,139);delay(0);
line(374,139,373,145);delay(0);
line(373,145,372,151);delay(0);
line(372,151,371,159);delay(0);
line(371,159,370,167);delay(0);
line(370,167,369,185);delay(0);
line(369,185,369,186);delay(0);
line(369,186,368,207);delay(0);
line(368,207,369,214);delay(0);
line(369,214,370,220);delay(0);
line(370,220,329,236);delay(0);
line(329,236,323,238);delay(0);
line(323,238,319,241);delay(0);
line(319,241,313,242);delay(0);
line(313,242,306,243);delay(0);
line(306,243,295,243);delay(0);
line(295,243,284,243);delay(0);
line(284,243,277,236);delay(0);
line(277,236,272,235);delay(0);
line(272,235,236,221);delay(0);
line(236,221,237,212);delay(0);
line(237,212,238,204);delay(0);
line(238,204,239,205);delay(0);
line(239,205,240,196);delay(0);
line(240,196,239,183);delay(0);
line(239,183,238,174);delay(0);
line(238,174,237,165);delay(0);
line(237,165,236,161);delay(0);
line(236,161,235,153);delay(0);
line(235,153,233,146);delay(0);
line(233,146,232,136);delay(0);
line(232,136,230,128);delay(0);
line(230,128,229,123);delay(0);
line(279,182,236,221);delay(0);
line(326,182,370,220);delay(0);


//======PART 7=====//
line(235,225,277,242);delay(0);
line(277,242,280,244);delay(0);
line(280,244,278,248);delay(0);
line(278,248,264,248);delay(0);
line(264,248,248,242);delay(0);
line(248,242,235,225);delay(0);



//=====PART 8====//
line(370,223,324,245);delay(0);
line(324,245,326,248);delay(0);
line(326,248,337,247);delay(0);
line(337,247,349,245);delay(0);
line(349,245,355,243);delay(0);
line(355,243,370,231);delay(0);
line(370,231,370,223);delay(0);



//===PART 9====//
line(234,232,244,247);delay(0);
line(244,247,279,255);delay(0);
line(279,255,283,249);delay(0);
line(283,249,301,250);delay(0);
line(301,250,318,249);delay(0);
line(318,249,324,256);delay(0);
line(324,256,361,249);delay(0);
line(361,249,370,239);delay(0);
line(370,239,370,251);delay(0);
line(370,251,362,280);delay(0);
line(362,280,331,324);delay(0);
line(331,324,276,325);delay(0);
line(276,325,245,281);delay(0);
line(245,281,234,248);delay(0);
line(234,248,234,232);delay(0);
line(279,255,276,325);delay(0);
line(324,256,331,324);delay(0);
 setbkcolor(YELLOW);
floodfill(262,26,WHITE);
 setfillstyle(SOLID_FILL,BLUE);
 line(15,400,625,400);delay(0);
 line(15,400,15,470);
  line(625,470,625,400);
  line(15,470,625,470);
 floodfill(30,430,WHITE);

 outtextxy(90,405,"PICKAXE PRESENTS");
  delay(3000);
  cleardevice();
  setbkcolor(BLACK);
  line(15,10,625,10);
 line(15,10,15,470);
 line(15,470,625,470);
 line(625,10,625,470);

 settextstyle(4,0,8);
 setcolor(LIGHTBLUE);
 outtextxy(100,100,"FORTNITE");
 settextstyle(10,0,3);
 setcolor(RED);
 outtextxy(100,200,"DESTINY IS STILL ALIVE");
 outtextxy(120,250,"THE END IS NEAR !!!");
 delay(3000);
 cleardevice();
  setcolor(YELLOW);
 //variables for arcs
 int x=317,y=236;
 int cc=1,rl=-30,v1=0,v2=0,v3=0,num=0,n=0;

 outtextxy(255,400,"LOADING...");
 while(1)
 {
  //show loaded percent
  gotoxy(40,15);
  cout<<num<<"%";

  //draw the arcs
  setcolor(cc);
  setlinestyle(0,0,3);
  setcolor(cc);
  arc(x,y,270+v2,90+v2,40);
  setcolor(LIGHTRED);
  arc(x,y,320-v2,120-v2,70);
  arc(x,y,320-v2,120-v2,72);
  setcolor(CYAN);
  arc(x,y,30+v1,160+v1,92);
  setcolor(cc);
  arc(x,y,300-v1,40-v1,111);
  setcolor(LIGHTMAGENTA);
  arc(x,y,300+v3,140+v3,131);
  arc(x,y,300+v3,140+v3,133);

  if(num>=100)	//when loading gets completed
  {
	break;
  }
  // assigning increase and decrease values to arc

  v1+=4+rand()%8;
  v2+=6+rand()%8;
  v3+=3+rand()%8;
  randomize();
  num=num+n;
  n=rand()%2;
  delay(10);
  if(rl==1)
  rl=-0;
  cc++ ;
  if(cc==14)
  cc=0;

  if(num==30||num==60||num==80)
  cleardevice();
 }

 delay(40);
 cleardevice();
 line(15,10,625,10);
 line(15,10,15,470);
 line(15,470,625,470);
 line(625,10,625,470);

 settextstyle(7,0,4);
 setcolor(RED);
 outtextxy(200,40,"STORY LINE");
 bar( 170, 80, 420, 82 );
 setcolor(YELLOW);
 settextstyle(3,0,3);
 outtextxy(50,150,"YOU ARE A F1 RACER");
 outtextxy(50,200,"KEEP YOUR FANS HAPPY ");
 outtextxy(50,250,"WHILE RACING ")   ;
 settextstyle(3,0,3);
 outtextxy(50,300,"YOU ARE NOW RACING A TRAFFIC ROAD ");
 outtextxy(50,350,"RACE IN THE TRAFFIC AND WIN YOUR OBJECTIVE");
 settextstyle(3,0,2);
 outtextxy(50,400,"USE RESPECTIVE ARROW KEYS TO MOVE ON THE ROADS");
 delay(6000);
 cleardevice();
 line(15,10,625,10);
 line(15,10,15,470);
 line(15,470,625,470);
 line(625,10,625,470);
 setcolor(RED);
 outtextxy(270,150,"DONE BY");
 outtextxy(270,200,"1.PRAVEEN");
 outtextxy(270,250,"2.SAKTHI");
 outtextxy(270,300,"3.PRANAV");
 delay(3000);
 cleardevice();
 }

    int randx( )
    {
    int x = random( 56 * 8 );

    if ( x < 22 * 8 )
    {
    x = x + ( 22 * 8 );
    }

    return ( x );
    }

    void right()
    {
    if ( car.cp < 420 )
    {
    car.cp += 10;
    }
    }

    void left()
    {
    if ( car.cp > 180 )
    {
    car.cp -= 10;
    }
    }

    void score_store()
    {
    cleardevice();
    line(15,10,625,10);
    line(15,10,15,470);
    line(15,470,625,470);
    line(625,10,625,470);
    setcolor( 4 );
    settextstyle( 2, 0, 6 );
    outtextxy( 45,125, "YOUR SCORE IS : " );
    gotoxy( 27, 9 );
    cout << car.score;
    outtextxy(43,155, "ENTER YOUR NAME TO STORE :" );
    gotoxy( 40, 11 );
    gets( car.player );
    ofstream score("score.dat", ios::app );
    score << "\n";
    score.write( car.player, 20 );
    score << car.score;
    score.close();
    }

    void disp_score()
    {
    cleardevice();
    setcolor( 5 );
    settextstyle( 2, 0, 9 );
    outtextxy( 200, 20, "SCORE CARD" );
    ifstream score( "score.dat" );
    char ch;
    int i = 0;
    gotoxy( 1, 5 );

    while ( score.get( ch ) )
    {
    score.seekg( i, ios::beg );
    score.get( ch );
    cout << ch;
    i++;
    }
    getch();
    }

    void bgmove()
    {
    if ( car.init > 5 )
    {
    car.init = 1;
    }

    else
    {
    car.init += car.vel;
    }

    setcolor(RED);
    setfillstyle(SOLID_FILL,RED);
    sector(car.cp+20,330,0,180,20,30);
    setfillstyle(SOLID_FILL,YELLOW);
    bar3d(car.cp,333,car.cp+37,360,4,4);
    sector(car.cp+20,362,180,360,20,10);

    for ( int i = car.init;i < 70;i += 5 )
    {
    setcolor( YELLOW );
    setfillstyle( 9, YELLOW );
    bar( 16 * 8, i * 8, 20 * 8, ( i + 2 ) * 8 );
    bar( 60 * 8, i * 8, 64 * 8, ( i + 2 ) * 8 );
    }
    }
    void opp1( int x1 )
    {
    if ( car.op1 < 600 )
    {
    car.op1 += 10;
    setfillstyle( 1, RED );
    bar3d( x1, car.op1, x1 + 30, car.op1 + 30, 2, 3 );
    }

    else
    {
    car.op1 = 0;
    }
    }

    void opp2( int x2 )
    {
    if ( car.op2 < 600 )
    {
    car.op2 += 10;
    setfillstyle( 1, YELLOW );
    bar3d( x2, car.op2, x2 + 30, car.op2 + 30, 2, 3 );
    }

    else
    {
    car.op2 = 0;
    }
    }

    void opp3( int x3 )
    {
    if ( car.op3 < 600 )
    {
    car.op3 += 10;
    setfillstyle( 1, BLUE );
    bar3d( x3, car.op3, x3 + 30, car.op3 + 30, 2, 3 );
    }
    else
    {
    car.op3 = 0;
    }
    }

    int check( int x, int op, int cp )
    {
    int a[ 31 ], b[ 31 ], c[ 40 ], d[ 50 ];
    for ( int i = 0;i < 30;i++ )
    {
    a[ i ] = x + i;
    }
    for ( i = 0;i < 30;i++ )
    {
    b[ i ] = op + i;
    }
    for ( i = 0;i < 40;i++ )
    {
    c[ i ] = cp + i;
    }
    for ( i = 0;i < 50;i++ )
    {
    d[ i ] = 300 + i;
    }
    for ( i = 0;i < 40;i++ )
    {
    for ( int j = 0;j < 50;j++ )
    {
    for ( int k = 0;k < 30;k++ )
    {
    if ( a[ k ] == c[ i ] && b[ k ] == d[ j ] )
    return 1;
    }
    }
    }
    return 0;
    }

    void loss()
    {
    setcolor( BLUE );
    settextstyle( 2, 0, 9 );
    outtextxy( 180, 150, "ONE CHANCE LOST" );
    delay( 1000 );
    }

    void over()
    {
    for ( int i = 1;i < 35;i++ )
    {
    cleardevice();
    delay( 20 );
    settextstyle( 1, 0, 6 );
    setcolor( RED );
    outtextxy( 150, 100, "GAME OVER" );
    delay( 20 );
    }

    delay( 2000 );
    cleardevice();
    score_store();
    getch();
    }

    void score()
    {
    car.score = car.score + 11 * car.vel;
    setcolor( 5 );
    settextstyle( 2, 0, 6 );
    outtextxy( 530, 12, "Score " );
    gotoxy( 75, 2 );
    cout << car.score;
    }

    void win()
    {
    cleardevice();

    for ( int k = 0;k < 2;k++ )
    {
    for ( int i = 0;i < 15;i++ )
    {
    setcolor( i );
    settextstyle( 4, 0, 5 );
    outtextxy( 200, 100, "Congrats!!" );
    setcolor( i + 1 );
    outtextxy( 150, 200, "You won the race" );
    delay( 150 );
    }
    }
    delay( 3000 );
    score_store();
    }

    void level()
    {
    int level = car.level;
    if ( car.score > car.lev_score[ level - 1 ] )
    {
    if ( car.level < 5 )
    {
    car.level++;
    if ( car.vel < 4 )
    {
    car.vel++;
    }
    }

    else
    {win();}
    }

    settextstyle( 2, 0, 6 );
    setcolor( 5 );
    outtextxy( 4, 12, "Level" );
    gotoxy( 8, 2 );
    cout << car.level;
    }

    void about()
    {
    char opt;
    while(!kbhit())
    {
    for(int i=300;kbhit()==0;i++)
    {
    cleardevice();
    setcolor( 9 );
    settextstyle( 4, 0, 5 );
    setfillstyle( 9, 12 );
    outtextxy( 220, 0, "ABOUT" );
    bar( 220, 60, 370, 62 );
    settextstyle( 2, 0, 5 );
    setcolor( 2 );
    setcolor( 6 );
    settextstyle( 2, 0, 6 );
    outtextxy( 600 - i, 600 - i, "PSP" );
    setfillstyle( 1, 4 );
    bar3d( 180, 380, 450, 460, 4, 6 );
    setcolor( 1 );
    settextstyle( 2, 0, 10 );
    outtextxy( 280, 380, "BYE" );
    outtextxy( 230, 420, "FRIENDS" );
    delay( 60 );
    }
    }
    getch();
    }
    int play()
    {
    car.score = 0;
    int life=3,m,x1,x2,x3,s;
    re:
    while(life)
    {
    cleardevice();
    if ( car.op1 == 0 )
    {
    x1 = randx();
    car.op1++;
    }

    else
    {
    opp1( x1 );
    }
    if ( car.op2 == 0 )
    {
    x2 = randx();
    car.op2++;
    }

    else if(car.op2<1)
    {car.op2++;}
    else
    {
    opp2( x2 );
    }

    if(car.op3==0)
    {
    x3 = randx();
    car.op3++;
    }

    else if ( car.op3 < 1 )
    {car.op3++;}

    else
    {
    opp3( x3 );
    }

    setcolor( 10 );
    setfillstyle( 0, 0 );
    bar3d( 0, 0, 80, 70, 4, 3 );
    bgmove();
    level();
    score();
    settextstyle( 2, 0, 6 );
    setcolor( 5 );
    outtextxy( 4, 44, "Life" );
    gotoxy( 8, 4 );
    cout << life;

    if ( check( x2, car.op2, car.cp ) || check( x1, car.op1, car.cp ) || check( x3, car.op3, car.cp ) )
    {
    loss();
    life--;

    if ( life == 0 )
    {
    over();
    }

    car.op1 = 1;
    car.op2 = -16;
    car.op3 = -32;
    goto re;
    }

    if ( kbhit() )
    {
    m = getch();

    switch ( m )
    {
    case LEFT: left();
    break;
    case RIGHT: right();
    break;
    case 'q': exit( 0 );
    }
    }
    else
    {
    delay( 100 );
    }
    }
    getch();
    return ( 0 );
    }

    void help()
    {
    cleardevice();
    settextstyle( 4, 0, 6 );
    setcolor( 13 );
    outtextxy( 200, 10, "HELP" );
    textcolor( YELLOW );
    gotoxy( 3, 6 );
    cout << "\n\n\n\n->UP\t--\tForward movement\n->LEFT\t--\tLeftside movement\n->RIGHT\t--\tRightside movement\n->q\t--\tExit from game at any time\n";
    getch();
    }

 void menu()
{
int s = 1, t = 0, a, p = 140;
do
{
do
{
cleardevice();
setcolor( RED );
settextstyle( 1, 0, 4 );
outtextxy( 230, 30, "MENU" );
setfillstyle( 1, 2 );
bar( 140, 80, 400, 82 );
settextstyle( 1, 0, 1 );
setcolor( YELLOW );
outtextxy( 220, 137,"1)PLAY GAME" );
outtextxy( 220, 167,"2)SCORES" );
outtextxy( 220, 197,"3)HELP" );
outtextxy( 220, 227,"4)ABOUT" );
outtextxy( 220, 257,"5)EXIT" );
setcolor( RED );
rectangle( 200, p, 350, p + 20 );
a = getch();

   switch ( a )
{
case UP: if ( p > 140 )
 {
p -= 30;
s--;
}
break;

case DOWN: if ( p < 260 )
{
p+= 30;
s++;
};
break;

case ENTER: a = 1;
break;
default: break;
}
}
while(a!= 1 );
switch(s)
{
case 1: play();
break;
case 2: disp_score();
break;
case 3: help();
break;
case 4: about();
break;
case 5: {exit( 0 );
}
break;
}
}
while(t==0);
getch();
}
void main()
{
int gdriver= DETECT,gmode,errorcode;
initgraph(&gdriver,&gmode,"..\\Bgi" );
cleardevice();
page();
menu();
closegraph();
}
