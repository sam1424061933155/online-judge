//
//  main.cpp
//  online judge
//
//  Created by sam on 2017/3/10.
//  Copyright © 2017年 sam. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    char right[]={'`','1','2','3','4','5','6','7','8','9'
                 ,'0','-','=','Q','W','E','R','T','Y','U'
                 ,'I','O','P','[',']','\\','A','S','D','F'
                 ,'G','H','J','K','L',';','\'','Z','X','C'
                 ,'V','B','N','M',',','.','/',' '};
    
    char wrong[]={'1','2','3','4','5','6','7','8','9','0'
                 ,'-','=','?','W','E','R','T','Y','U','I'
                 ,'O','P','[',']','\\','?','S','D','F','G'
                 ,'H','J','K','L',';','\'','?','X','C','V'
                 ,'B','N','M',',','.','/','?',' '};
    
    string in;
    
    getline(cin,in);
    //cout << in;

    int pos=0;
    for(int i =0;i<in.length();i++){
        pos=-1;
        for(int j=0;j<48;j++){
            if(in[i]==wrong[j]){
                 pos=j;
                break;
            }
        }
        if(pos!=-1)
            printf("%c",right[pos]);
        else
            printf("%c",in[pos]);
        if(i==in.length()-1)
            printf("\n");
    }

    return 0;
}
