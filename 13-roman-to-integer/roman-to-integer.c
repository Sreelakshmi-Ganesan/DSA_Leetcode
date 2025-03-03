int romanToInt(char* s) {
    int l=strlen(s);
    int i=0,num=0,dig=0;
    while(s[i]!='\0')
    { 
       switch(s[i])
       {
        case 'I':{num=1;
                 break;}
        case 'V':{num=5;
                 break;}
        case 'X':{num=10;
                 break;}
        case 'L':{num=50;
                 break;}
        case 'C':{num=100;
                 break;}
        case 'D':{num=500;
                 break;}
        case 'M':{num=1000;
                 break;}
                                            
       }
        if(s[i]=='I' &&s[i+1]=='V')
        {num=4;
         i++;}
        else if(s[i]=='I' &&s[i+1]=='X')
        {num=9;
         i++;}
        else if(s[i]=='X' &&s[i+1]=='L')
        {num=40;
         i++;
         }
        else if(s[i]=='X' &&s[i+1]=='C')
        {num=90;
         i++;
        }
        else if(s[i]=='C' &&s[i+1]=='D')
        {num=400;
          i++;
        }
        else if(s[i]=='C' &&s[i+1]=='M')
        {num=900;
          i++;
        }
       dig=dig+num;
       i++;
    }
    return dig;
}