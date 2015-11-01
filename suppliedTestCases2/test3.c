/* test expression and sequential code*/
int x, j, k6; // 1, 2, 3
void foo1(int x1){
  int x,j,k5;//4, 5, 6
  x = foo2(x1);//7
  j = (x+x1)/k5;//8
}


int foo2(int x2){
  int p;//9
  p = p+x2;//10
  return p;//11
  }

int main()
{
  int a,b,c1;//12,13,14
  int r1,r2,r3;//15,16,17
  a = 10;//18
  b = a+10;//19
  r1 = (a>=b) || (b<=c1) && (c1!=a);//20
  r2 = !r1;//21
  r3 = ((a+b)*10-(a-c1)*200)*2;//22
  foo1(r1+r2-r3+c1);//23
  printf("%d %d %d\n", r1, r2, r3);//24
  return 0;//25
}

