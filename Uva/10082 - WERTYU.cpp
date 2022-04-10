#include<bits/stdc++.h>
using namespace std;
int main()
{
	int ln;
    string w;
    while(getline(cin,w))
        {
        	ln=w.size();
        	for(int i=0;i<ln;i++)
        	{
         if(w[i]=='=')putchar('-');
         else if(w[i]=='-')putchar('0');
         else if(w[i]=='0')putchar('9');
         else if(w[i]=='9')putchar('8');
         else if(w[i]=='8')putchar('7');
         else if(w[i]=='7')putchar('6');
         else if(w[i]=='6')putchar('5');
         else if(w[i]=='5')putchar('4');
         else if(w[i]=='4')putchar('3');
         else if(w[i]=='3')putchar('2');
         else if(w[i]=='2')putchar('1');
         else if(w[i]=='1')putchar(96);

         else if(w[i]==92)putchar(93);
         else if(w[i]==93)putchar(91);
         else if(w[i]==91)putchar('P');
         else if(w[i]=='P')putchar('O');
         else if(w[i]=='O')putchar('I');
         else if(w[i]=='I')putchar('U');
         else if(w[i]=='U')putchar('Y');
         else if(w[i]=='Y')putchar('T');
         else if(w[i]=='T')putchar('R');
         else if(w[i]=='R')putchar('E');
         else if(w[i]=='E')putchar('W');
         else if(w[i]=='W')putchar('Q');

         else if(w[i]==39)putchar(59);
         else if(w[i]==59)putchar('L');
         else if(w[i]=='L')putchar('K');
         else if(w[i]=='K')putchar('J');
         else if(w[i]=='J')putchar('H');
         else if(w[i]=='H')putchar('G');
         else if(w[i]=='G')putchar('F');
         else if(w[i]=='F')putchar('D');
         else if(w[i]=='D')putchar('S');
         else if(w[i]=='S')putchar('A');

         else if(w[i]==47)putchar(46);
         else if(w[i]==46)putchar(44);
         else if(w[i]==44)putchar('M');
         else if(w[i]=='M')putchar('N');
         else if(w[i]=='N')putchar('B');
         else if(w[i]=='B')putchar('V');
         else if(w[i]=='V')putchar('C');
         else if(w[i]=='C')putchar('X');
         else if(w[i]=='X')putchar('Z');
         else{
            putchar(w[i]);
         }
        }
        }
    return 0;
}
