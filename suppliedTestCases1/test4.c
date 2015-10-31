/* basic switch*/
int getnumber(){
  return 1; //1
}

int main(){
  int i,j,k; // 2 3 4
  int a; // 5
  a = getnumber(); // 6
  switch(a){ // 7
  case 0: 
    i=a; //8
    j=a; //9
    k=a; //10
    break; //11
  case 1:
    i = a; //12
    k = a; //13
    break; //14
  case 2:
    i = a; //15
    j= a;  //16
    break; //17
  default:
    i = a; //18
    break; //19
  };

  printf("%d %d %d\n", i,j,k);//20
  return 1; //21
}
