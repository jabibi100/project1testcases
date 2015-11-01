/* test nested if*/
int testif(int i){
  
  int a1, a2, a3, a4; //1,2,3,4

  if (i ==1) {//5
    printf("now i = 1\n");//6
    a1 = 10;//7
    return i+a1;//8
  }else {
    printf("now i!=1\n");//9
    if (i == 2) {//10
      a1 = 10;//11
      a2 = 10;//12
      printf ("now i = 2\n");//13
      return a1+a2+i;//14
    }
  }
  a1 = 10;//15
  printf("%d % %d \n", a1, a2, a3);//16
  return;//17
}

int main()
{
  int i;//18
  printf("i=:");//19
  scanf("%d", &i);//20
  i = testif(i);//21
    
}
