/* test expression and sequential code*/
void foo1(int x1);
int foo2(int x2);

void foo1(int x1){
  int x,j,k5;
  x = foo2(x1);
  j = (x+x1)/k5;
}


int foo2(int x2){
  int p;
  p = p+x2;
  return p;
  }

int main()
{
  int a,b,c1;
  int r1,r2,r3;
  a = 10;
  b = a+10;
  r1 = (a>=b) || (b<=c1) && (c1!=a);
  r2 = !r1;
  r3 = ((a+b)*10-(a-c1)*200)*2;
  foo1(r1+r2-r3+c1);
  printf("%d %d %d\n", r1, r2, r3);
  return 0;
}

