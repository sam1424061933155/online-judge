//
//  main.cpp
//  nctu
//
//  Created by sam on 2016/10/15.
//  Copyright © 2016年 sam. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
using namespace std;



int main(int argc, const char * argv[]) {
    // insert code here...
    
    
    int num_case;
    int num_in;
    int in[105];
    string line;
    int sum=0;
    
    scanf("%d",&num_case);
    for(int i=0;i<num_case;i++){
        sum=0;
        for(int j=0;j<105;j++){
            in[j]=0;
        }
        
        scanf("%d",&num_in);
        getline(cin,line);
        for(int j=0;j<num_in;j++){
            getline(cin,line);
            //cout << line << endl;
            if(line[0]=='L'){
                in[j]=-1;
            }if(line[0]=='R'){
                in[j]=1;
            }if(line[0]=='S'){
                string temp=line.substr(8);
                //cout << "temp= "<<temp<<endl;
                int f=atoi(temp.c_str());
                in[j]=in[f-1];
                
            }
            sum=sum+in[j];

        }
        printf("%d\n",sum);
        
    }
    
    
    
    
    
    
    
    return 0;
}
