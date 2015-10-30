/* 
* A more complicated example
*
*/

int g0; //1
int g1;//2
int g2;//3
int g3;//4
int g4;//5
int g5;//6
int g6;//7
int g7;//8


int foo1(int y)
{
	int x1;//9
	int	x2;//10

	g0 = y;//11
	g4 = 22;//12

	y = x1;//13
	switch( x2 )//14
	{
		case 1: 
			x2 = g1;//15 
			break;//16
		case 2: 
			x2 = g2; //17
			break;//18
		case 3: 
			x2 = g3; //19
			break;//20
	}
}



void foo2()
{
	int y1, y2;//21 22
	int z1 = y1;//23

	g5 = foo1(g4);//24

	if( y2 > 12 )//25
	{
		printf( "hey, we should print y2 since it is undefined!\n" );//26
	}
}



void foo3()
{
	int z1;//27
	int z2;//28

	
	while( z1 < 20 )//29
	{
		printf( "need to exit somehow\n" );//30
	}
	
	switch(z2){//31
		case 1: 
			g3 = 110;//32
			break;//33
		default: 
			g3 = 120;//34
	}
}


void foo4(int x)
{
	int t1, t2;//35 36

	x = t1;//37
	g6 = 12;//38
}


void main()
{
	int r1, r2;//39 40
	int r3 = 22; //41

	if( r3 > 22 )//42
		g2 = 12;//43

	if( r1 > 20 )  //44 
		foo3();//45
	else 
		foo3();//46

	switch(r2) {//47
		case 1: 
		default: 
			foo2();//48
	}

	while(r2>100) foo4(g3); // 49  50

	r1 = g0;//51
	r2 = g6;//52
	g1 = 12;//53

	printf( "%d %d\n", g5, g6); //54
	printf( "g7 is not DEFined so need to print!%d\n", g7 );//55
}
