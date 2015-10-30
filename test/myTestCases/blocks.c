void foo()
{
    int x = 1;
    int z = 1;

    {
        int y;

        printf( "%d\n", y ); 
    }
}

void foo1()
{
    int var1;
    int var2 = 2;
    int var3 = 1;
    int var4;
	int var5;

    {
        int var1 = 2;   
        printf( "%d\n", var1 ); 

        var5  = 2;      

        printf( "%d\n", var4 ); 
    }

    {
        int var2;               

        printf( "%d\n", var2 ); 
        printf( "%d\n", var3 ); 
    }

    printf("%d\n", var5 ); 

}


void foo2()
{
   int x;
   int y = 2;
   int z;
   int w;

    {
        int x = 2;
        int y;
        z = 2;
                                 
        printf( "%d\n", x, y );  
    }

    printf( "%d\n", z, w ); 
}

void main(){

foo();
foo1();
foo2();

}