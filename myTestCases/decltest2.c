
void foo_1()
{
    float x;

    {
        float y;
    }
}

void foo_2()
{
    int var1=1;
	int var2;
	int var3;
    int var4;
	int var5;
	int var6 = 10;
	int var7;

    if( var1 == 1 && var2 <= 2 || var3 != 3 && !var4 || var5 < 3 && 4 > var6  && 5 >= var7 )
    {
        char y = 3;
    }
}

char foo_3()
{
    char x;

    if( x == '9')
    {
        printf("%d\n", x );
    }
}

void foo_4()
{
    float var1;
	float var2=2;
    float var3;
	float var4;
    float var5;
    float var6;

    var6  = var1 + var2 * 2 / var3 - var4 + var5;

    printf( "%d\n", var6 );
}

int main(){
	foo_1();
	foo_2();
	foo_3();
	foo_4();
}