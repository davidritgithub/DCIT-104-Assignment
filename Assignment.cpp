#include <iostream>
using namespace std;
int main()
{
     int i, j, sum = 0, count = 0,flag;
     for(i = 2; i <= 10; i++)
     {
         flag=0;
         for(j = i - 1; j > 1; j--)
         {
             if(i % j == 0)
             {
                 flag=1;
                 break;
             }
         }
         if(flag==0)
         {
              sum = sum + i;
              count++;
         }

     }
     cout<<"The avg:"<< sum / count;
return 0;
}
