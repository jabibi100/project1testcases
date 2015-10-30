
/*

output.txt should have:

foo:y
foo2:x,z
foo3:x,y
foo5:a

*/
void foo()
{
    int x ; //1
    int y;//2

    // "y" should be printed
    switch( y )//3
    {
        case 1:
        {
            x = 2;//4
            printf( "%d\n", x );//5
            break;//6
        }

        case 2:
            x = 3;//7
            printf( "%d\n", x );//8
            break;//9

        default:
            x = 4;//10
            printf( "%d\n", x );//11
            break;//12
    }

    // "x" should NOT be printed since it is defined in ALL blocks above:
    printf( "%d\n", x );//13
}

void foo2()
{
    int x;//14
    int y = 2;//15

    // y is OK here:
    switch(y)//16
    {
        // fall through example:
        case 1:
        case 2:
        {
            int z;//17

            // should print "z"
            printf( "%d\n", z );//18
            break;//19
        }

        case 3:
        default:
            // should print "x"
            printf( "%d\n", x );//20
    }
}

void foo3()
{
    int y;//21
    int x;//22

    switch(y)//23
    {
        case 0:
            y = 1;//24
            // y is OK here:
            printf( "%d\n", y );//25

            // fall through
        case 1:
            // should print "y" (not defined in the Case 1 block!)
            printf( "%d\n", y ); break;//26 27

        case 2:
            x = 3; break;//28 29

        default:
            x = 4; break;//30 31
    }

    // should print "x" since it is not initialized in the first block:
    printf( "%d\n", x );//32
}




void foo4()
{
    int y = 1;//33
    int x;//34

    // "y" is OK
    switch(y*2)//35
    {
        case 1:
        case 2:
        default:
            x = 1;//36
            break;//37
    }

    // should NOT print "x"
    printf( "x is %d\n", x );//38
}

void foo5()
{
    float a;//39
    float c;//40
    int b = 2;//41

    switch( b )//42
    {
        case 1:
            a = 1.0; break;//43 44
        case 2:
            a = 2.0; break;//45 46
    }

    // "a" is uninitialized since there is not DEFAULT block above.
    c = a;//47
}

int main(){

	 foo();//48
	 foo2();//49
	 foo3();//50
	 foo4();//51
	 foo5();//52
}

