/* complex switch test*/
void fun(int w, int p)
{
	 int a=9;//1
	 int i=1;//2
	 int k;//3
	 int m;//4
	 switch(i){//5
	  case 1: {
	    switch(a){//6
	      case 1:{
	        a=a+1;//7
	        break;	//8	
	      }
	      case 2:{
	        switch(w) {//9
		  case 1: {
		     m = p * w;//10
	             break;//11
		  }
	          case 2: {
	             p = 2/w + m;//12
		     break;//13
	          }		  					
	       }		
	     }
	    default:
	       a=a+2;//14	  					
	    }
	   k=1;	//15
	 }	 	  	
	 case 4:{
	   k=i+4;//16
	 }	 	  		
	 default:{
	   i = i+1;//17	
	   k = i+a+1;//18
	   i = k+20;//19
	 }
	 }
	 m=k+22;//20
	 printf("%d %d\n", m,k);//21
}

void main(){
  fun(1,2);//22
}

