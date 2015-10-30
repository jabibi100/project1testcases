/* 
* A more complicated example
*
*/

int g0;
int g1;
int g2;
int g3;
int g4;
int g5;
int g6;
int g7;


int foo1(int y)
{
	int x1;
	int	x2;

	g0 = y;
	g4 = 22;

	y = x1;
	switch( x2 )
	{
		case 1: x2 = g1; break;
		case 2: x2 = g2; break;
		case 3: x2 = g3; break;
	}
}



void foo2()
{
	int y1, y2;
	int z1 = y1;

	g5 = foo1(g4);

	if( y2 > 12 )
	{
		printf( "hey, we should print y2 since it is undefined!\n" );
	}
}



void foo3()
{
	int z1;
	int z2;

	
	while( z1 < 20 )
	{
		printf( "need to exit somehow\n" );
	}
	
	switch(z2){
		case 1: g3 = 110; break;
		default: g3 = 120;
	}
}


void foo4(int x)
{
	int t1, t2;

	x = t1;
	g6 = 12;
}


void main()
{
	int r1, r2;
	int r3 = 22;

	if( r3 > 22 )
	g2 = 12;

	if( r1 > 20 )   
	foo3();
	else 
	foo3();

	switch(r2) {
	case 1: 
	default: foo2();
	}

	while(r2>100) foo4(g3);

	r1 = g0;
	r2 = g6;
	g1 = 12;

	printf( "%d %d\n", g5, g6);
	printf( "g7 is not DEFined so need to print!%d\n", g7 );
}
