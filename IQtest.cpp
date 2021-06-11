  #include <iostream>
  #include<stdio.h>
  char s[5][5];
  using namespace std;
 
  int main()
  {
      while(scanf("%s",s[0])!=EOF)
      {
         getchar();
         scanf("%s",s[1]);
         getchar();
        scanf("%s",s[2]);
         getchar();
         scanf("%s",s[3]);
         getchar();
        int i,j;
         int bsum,wsum;
         for(i=0;i<3;i++)
         {
             for(j=0;j<3;j++)
             {
                  bsum=0;
                  wsum=0;
                  if(s[i][j]=='#')bsum++;
                  else wsum++;
                  if(s[i+1][j]=='#')bsum++;
                  else wsum++;
                  if(s[i][j+1]=='#')bsum++;
                  else wsum++;
                 if(s[i+1][j+1]=='#')bsum++;
                  else wsum++;
                  if(bsum>=3||wsum>=3)
                  break;
             }
             if(bsum>=3||wsum>=3)
            break;
        }
         if(bsum>=3||wsum>=3)
         printf("YES\n");
         else printf("NO\n");
     }
     return 0;
 }
