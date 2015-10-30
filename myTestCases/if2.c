/*
output.txt should have:

foo:s,w,y,x
 */
void main()
{
    int z = 12;//1
    int x;//2
    int y;//3
    int w;//4
    int r = 0, s;//5 6

    // "x" should be printed
    printf( "%d\n", x == 1 ? 12 : 13 );//7

    // "y" should be printed:
    printf( "%d\n", z == 12 ? y : 13 );//8

    // "w" and "s" should be printed:
    printf( "%d\n", z == 12 ? (w * 12 + 43) : (r + s) );//9
}


