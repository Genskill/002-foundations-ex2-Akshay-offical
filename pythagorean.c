#include <stdio.h>
#include <cs50.h>

int main(){
    float x,y,z,smallerside_1,smallerside_2,largerside;

    x = get_float("side 1 ");
    y = get_float("side 2 ");
    z = get_float("side 3 ");
    if (x<y){
        if (y<z){
            smallerside_1 = x;
            smallerside_2 = y;
            largerside = z;
        }
	else{
            smallerside_1 = x;
            smallerside_2 = z;
            largerside = y;
        }
    }
    else{
        if (x<z){
            smallerside_1 = y;
            smallerside_2 = x;
            largerside = z;
        }
        else{
            smallerside_1 = y;
            smallerside_2 = z;
            largerside = x;
        }

    }
    if (smallerside_1*smallerside_1 + smallerside_2*smallerside_2 == largerside*largerside){
        printf("yes");
    }
    else{
        printf("No");
    }
}
