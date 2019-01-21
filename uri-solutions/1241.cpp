#include <bits/stdc++.h>

using namespace std;

int main(){

char str[10000],str1[10000];
int i,j,k,l,n,m,count,T;

cin >> T;

while(T--){

   cin >>str;
   cin >> str1;

   i = strlen(str);
   j= strlen(str1);

   if(j>i)
      cout << "nao encaixa" << "\n";
   else if(i>=j){
      k = i-j;
      m=0;
      count =0;

      for(n=k;n<i;n++){
         if(str[n]==str1[m])
            count++;
               m++;
      }

      if(count== j)
      cout << "encaixa" << "\n";
      else
      cout << "nao encaixa" << "\n";
   }

}

return 0;
}
