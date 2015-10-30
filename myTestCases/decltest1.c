void function_a(int arg1, int arg2)
{
    int f2;
    int f1 = 1;
    int f3=f2;
    int f4;
	int f5=1;
    int f6;
	int f7=1;
	int f8=f6;
    int f9;

    f6 = f4;

    f2 = 2;

    f9++;
    ++f9;

}

void function_b()
{
    int x;
    function_a(x,1);
}

void function_c(int x)
{
    function_b();
    printf( "%d\n", x );
}

int main(){

function_c(10);

}

