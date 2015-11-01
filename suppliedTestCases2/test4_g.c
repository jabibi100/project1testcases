/*test call graph*/
int g1;//1
int g2;//2
int g3;//3

void init1( int i1)
{
   g1 = i1;//4
}

void init2( int i2){
  g2 = i2;//5
}

int sub(){
  return g1-g3;//6
}
 
void main(){
  int i;//7
  scanf("%d", &i);//8

  if (i<10){//9
  init1(1);//10
  init2(1);//11
  printf("%d\n", g1+g2);//12
  }
  
 i = sub();//13
}

