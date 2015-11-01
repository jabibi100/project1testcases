/* basic switch*/
int i, a;//1,2
int getnumber(){
  return 1;//3
}

int main(){
  int i,j1,k2;//4,5,6
  int a;//7
  a = getnumber();//8
  switch(a){//9
  case 0: 
    i=a;//10
    j1=a;//11
    k2=a;//12
    break;//13
  case 1:
    i = a;//14
    k2 = a;//15
    break;//16
  case 2:
    i = a;//17
    j1= a;//18
    break;//19
  default:
    i = a;//20
    break;//21
  };

  printf("%d %d %d\n", i,j1,k2);//22
  return 1;//23
}
