/* test if condition*/


int add(int i1, int j1){
  return i1+j1;
}

void main(){
  int i1,j1,k1;
  i1 = 10;
  while(i1<20){
    j1 = add(i1,1);
    i1 += 1;
  }

  if (i1< (j1+10)*(i1-10) )
    k1 = add(i1,j1);
  printf("%d %d %d\n", i1, j1, k1);
}
