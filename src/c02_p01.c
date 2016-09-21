#include <stdio.h>

#define WIDTH   8
#define HEIGHT  6

// i avoided the obvious beginner solution, but not by much.
int main(void)
{
    int spread = 3;
    int lpad = 0;
    
    for(int w = WIDTH-1, h = HEIGHT-1; h >= 0; --w, --h){
        if(h > 2 || h == 0){
            printf("%*s*\n", w, "");
        }
        else{
            printf("%*s*%*s*\n", lpad, "", spread, "");
            spread -= 2;
            ++lpad;
        }
    }
}