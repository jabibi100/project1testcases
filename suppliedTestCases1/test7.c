/* test if condition*/


int add(int i, int j){
  return i+j;i//1
}

void main(){
  int i,j,k;//2,3,4
  i = 10;//5
  while(i<20){//6
    j = add(i,1);//7
    i += 1;//8
  }

  if (i< (j+10)*(i-10) )//9
    k = add(i,j);//10
  printf("%d %d %d\n", i, j, k);//11
}
