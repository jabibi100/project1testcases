/*
output.txt should have:

foo2:y
foo3:z,y
foo5:y,z
 */
void foo()
{
    int x = 2; //1
    int y; //2
 
    if( x > 1 ) //3
    {
        y = 2;//4
    }
    else
    {
        y = 1;//5
    }


   // "y" should be OK
   printf( "%d\n", y ); //6
}

void foo2()
{
    int x = 1;//7
    int y;//8

    if( x > 1 )//9
    {
        y = 2;//10
    }
    else if( x < 1 )//11
    {
        y = 3;//12
    }

    // "y" should be printed since there is no ELSE:
    printf( "%d\n", y ); //13
}

void foo3()
{
    float y;//14
    float z;//15
    float w = 1;//16

    // "y" should be printed
    if( y > 2)//17
    {
        // "w' is OK
        printf( "%f\n", w );//18
        z = 2.0;//19
    }

    // "z" should be printed:
    printf( "%f\n", z );//20
}

void foo4()
{
    int y = 1;//21
    char z;//22

    if( y > 0 )//23
        z = 'a';//24
    else if( y == 0 )//25
        z = 'b';//26
    else
        z = 'c';//27

    // "z" should NOT be printed:
    printf( "%d\n", z );//28
}


void foo5()
{
    int x = 2;//29
    int y;//30
    int z;//31

    if( x > 1 )//32
        y = 2;//33
    else
    {
        // "z" should be printed
        if( z < 2 )//34
        {
            y = 3;//35
        }
    }

    // "y" should be printed:
    printf( "%d\n", y );//36
}


void foo6()
{
    int x = 2;//37
    int y;//38

    if( x < 1 )//39
    {
        y = 100;//40
    }
    else
    {
        if( x < 100 )//41
            y = 101;//42
        else
            y = 102;//43
    }
        
    // "y" should be OK
    printf( "%d\n", y );//44
}


int main(){

foo();//45
foo1();//46
foo2();//47
foo3();//48
foo4();//49
foo5();//50
foo6();//51

}


