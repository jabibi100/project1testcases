char g1; //1
float g2; //2
int g3 = 4 + 5; //3

void f()
{
  int a; //4
  int b; //5
  double d = 0.5; //6

  a = 3; //7
  b = 5; //8
  switch(a + b) //9
  {
    case 3 + 7:
    case 8:
    {
      while(b < 5 && d != 1.4) //10
      {
        if(b >= 2) //11
        {
          a += 5; //12
        }
        else
        {
          a = 1; //13
          switch(b) //14
          {
            case 3:
            {
              b = 12; //15
              return; //16
            }
            case 4:
            {
              b = 8; //17
              break; //18
            }
            case 8:
            {
              if(d <= 3.1) //19
              {
                continue; //20
              }
            }
          }
        }
        d += d * d; //21
        if(!(d >= 3.5)) //22
        {
          return; //23
        }
        b++; //24
      }
      if(b > 5) //25
      {
        break; //26
      }
    }
    case 7:
    {
      switch(b / 3) //27
      {
        case 0:
        {
          a += a < b; //28
          break; //29
        }
        default:
        {
          b = a; //30
        }
      }
    }
    case 20:
    {
      while(1) //31
      {
        d += 5.5; //32
        if(a > b) //33
        {
          d = 10.0 - d; //34
        }
        else
        {
          d = 4.3 - d; //35
        }
        a += b; //36
        if(a == b || b / 7 != 8) //37
        {
          d = 3.4 - d; //38
          continue; //39
        }
        else
        {
          d = 0.3 + d; //40
          break; //41
        }
        b = 4; //42
      }
      break; //43
    }
    default:
    {
      while(1) //44
      {
        d += 2.4; //45
        a++; //46
        if(a * 3 < b) //47
        {
          if(d < 8.6) //48
          {
            while(d > 0.3) //49
            {
              b++; //50
              d -= 4.2; //51
            }
            a = 4; //52
          }
          else
          {
            continue; //53
          }
        }
        else
        {
          d = -3.0; //54
          break; //55
        }
        d += 5.5; //56
        if(b > a) //57
        {
          d -= 0.5; //58
          break; //59
        }
      }
    }
  }

  while(a < b) //60
  {
    b = 13 + a; //61
    a = a * a; //62
  }
}

int main()
{
  g1 = 'A'; //63
  f(); //64

  return 0; //65
}