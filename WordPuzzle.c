#include <stdio.h>
#include <string.h>
#include<math.h>
#include<stdlib.h>


//15x15 word puzzle
int main()
{
   char array[15][15];
   char *pointer=&array[0][0];
   char *first=&array[0][0];
   char *last=&array[14][14];
   char word[10];
   int wordLength;
  
   for(int a=0;a<15;a++)
   {
       for(int b=0;b<15;b++)
       {
          scanf(" %c",&array[a][b]);
       }
   }
  printf("Enter search word: ");
  scanf("%s",word);
  wordLength=strlen(word);


  int compareStrings(char *s1,char *s2,int length,int direction)
  {
     int isSame=1;
      for(int a=0;a<length;a++)
      {
         if(*s1==*s2)
         {
            if(direction==1)
            {
                s1++;
                s2++;
               
            }
            else if(direction==2)
            {
                s1--;
                s2++;
               
            }
             else if(direction==3) //yukarı
            {
              
                s1-=15;

                s2++;
               
            }
            else if(direction==4) //asagi
            {
              
                s1+=15;

                s2++;
              
            }
             else if(direction==5)
            {
                s1-=14;
                s2++;
                
            }
            else if(direction==6)
            {
                s1+=14;
                s2++;
               
            }
            else if(direction==7)
            {
                s1-=16;
                s2++;
              
            }
            else if(direction==8)
            {
                s1+=16;
                s2++;             
            }
           
         }
         else
         {
            isSame=0;
         }

      }
      return isSame;
  }   
  
  void AllMakeStar(char *exparray)
  {
     for(int a=0;a<15;a++)
     {
        for(int b=0;b<15;b++)
        {
      
           *exparray='*';
            exparray++;
        }
     }
  }
  void print2(char *exparray)
  {
     for(int a=0;a<15;a++)
     {
        for(int b=0;b<15;b++)
        {
          
           printf("%c",*exparray);
           exparray++;
        }printf("\n");
     }
  }

  void ChangeArray(char *pointer,char *word,int word_length,int direction)
  {
      for(int c=0;c<word_length;c++)
        {
           if(direction==1)   //sağ
           {
            *(pointer+c)=*(word+c);
           }
           else if(direction==2)  //sol
           {
            *(pointer-c)=*(word+c);
           }
           else if(direction==3)  //yukarı
           {
            *(pointer-15*c)=*(word+c);
           }
            else if(direction==4)  //asagi
           {
            *(pointer+15*c)=*(word+c);
           }
           else if(direction==5)  //sağ yukarı çarpraz
           {
            *(pointer-14*c)=*(word+c);
           }
           else if(direction==6)  //sol aşağı çarpraz
           {
            *(pointer+14*c)=*(word+c);
           }
           else if(direction==7)  //sol yukarı çarpraz
           {
            *(pointer-16*c)=*(word+c);
           }
           else if(direction==8)  //sol aşağı çarpraz
           {
            *(pointer+16*c)=*(word+c);
           }
         
        }
  }
  
  char Control (char word[10],int wordlength)
  {
   
      int condition=0;
       while(*pointer!=word[0] ||condition)   
       { 
          pointer++;
          condition=0;
          if(*pointer==word[0])
          {
           
             if(compareStrings(pointer,word,wordlength,1))  
             {
               char *newPointer=pointer;
               AllMakeStar(&array[0][0]); 
               ChangeArray(pointer,&word[0],wordlength,1); 
              
              break;
             } 
             else if(compareStrings(pointer,word,wordlength,2))
             {
                 AllMakeStar(&array[0][0]); 
                 ChangeArray(pointer,&word[0],wordlength,2); 
                 
                 break;
             }
             else if(compareStrings(pointer,word,wordlength,3))
             {
                 AllMakeStar(&array[0][0]); //hepsini yıldız yapıyorum.
                 ChangeArray(pointer,&word[0],wordlength,3); 
                
                 break;
             }
             else if(compareStrings(pointer,word,wordlength,4))
             {
                 AllMakeStar(&array[0][0]); //hepsini yıldız yapıyorum.
                 ChangeArray(pointer,&word[0],wordlength,4); 
                
                 break;
             }
             else if(compareStrings(pointer,word,wordlength,5))
             {
                 AllMakeStar(&array[0][0]); //hepsini yıldız yapıyorum.
                 ChangeArray(pointer,&word[0],wordlength,5); 
                 
                 break;
             }
             else if(compareStrings(pointer,word,wordlength,6))
             {
                 AllMakeStar(&array[0][0]); //hepsini yıldız yapıyorum.
                 ChangeArray(pointer,&word[0],wordlength,6); 
                 
                 break;
             }
             else if(compareStrings(pointer,word,wordlength,7))
             {
                 AllMakeStar(&array[0][0]); //hepsini yıldız yapıyorum.
                 ChangeArray(pointer,&word[0],wordlength,7); 
                 
                 break;
             }
             else if(compareStrings(pointer,word,wordlength,8))
             {
                 AllMakeStar(&array[0][0]); //hepsini yıldız yapıyorum.
                 ChangeArray(pointer,&word[0],wordlength,8); 
                
                 break;
             }
             else
             {  
                if(*pointer==word[0])
                {
                    condition=1;
                }
             }
          }
          if(pointer==&array[14][14])  
          {
            
             AllMakeStar(&array[0][0]);
             break;
          } 
       }
  }
   Control(word,wordLength);
   print2(&array[0][0]);
   

}
