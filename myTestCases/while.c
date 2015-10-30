int xx;//30
int yy;//31
char cc = 's';//32
double dd;//33
float ff =2.0;//34
void foo()
{
    int x; //1

    while ( x < 2 )//2
    {
		while(x!=2){//3
			if(x==34){//4
				x = 2;//5
			}
			if(x==-1){//6
				while(x!= -1){//7
					x++;//8
					int a = 1;//9	
					while(a> -2){//10
						++a;//11
					}
					--a;//12
				}
			}else{
				xx++;//13
				x--;//14
			}
		}
        int y;//15
        x = 2;//16

        // "y" should be printed:
        printf( "%d\n", y );//17
    }

    // "x" should be printed:
    //printf( "%d\n", x );
}

void foo2()
{
    int x = 2;//18
    int y;//19
    int z;//20

    while ( x < 2 )//21
    {
        while( y < 3 )//22
        {
			switch(x){//23
				case 1:
				case 2:
					if(y>1){//24
						z = 1;//25
					}
					break;//26
			}
			continue;//27
        }
        
        // "z" should be reported:
        printf( "%d\n", z );//28
    }
}


int main(){
	foo();//29
}


