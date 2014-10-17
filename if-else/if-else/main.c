//
//  main.c
//  homework2
//
//  Created by Maya on 10/15/14.
//  Copyright (c) 2014 Maya. All rights reserved.
//

#include <stdio.h>

float heat_index (float t, float rh);

int main()
{
    printf("Heat index is = %f\n", heat_index(100.25, 9.17));
    printf("Heat index is = %f\n", heat_index(85.33, 93.12));
    printf("Heat index is = %f\n", heat_index(75.02, 54.78));
    
    return 0;
};

float heat_index (float t, float rh)
{
    printf("If you have t=%f, ph=%f\n", t, rh);
    
    float hi = 0;
    if (rh<13 && 80<t<112)
    {
        hi=((13-rh)/4)*sqrt((17-abs(t-95.0))/17);
    }
    else if (rh>85 && 80<t<87)
    {
        hi=((rh-85)/10)*((87-t)/5);
    }
    else
    {
        hi=0.5*(t+61.0+((t-68.0)*1.2)+(rh*0.094));
    }
    
    return hi;
};



