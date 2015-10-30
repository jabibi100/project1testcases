/* basic switch*/
int getnumber(){
  return 1;
}

int main(){
  int i,j1,k2;
  int a;
  a = getnumber();
  switch(a){
  case 0: 
    i=a;
    j1=a;
    k2=a;
    break;
  case 1:
    i = a;
    k2 = a;
    break;
  case 2:
    i = a;
    j1= a;
    break;
  default:
    i = a;
    break;
  };

  printf("%d %d %d\n", i,j1,k2);
  return 1;
}
