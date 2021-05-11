#include <stdio.h>
#include <string.h>

void draw(int h, int space);

int main(void)
{
    //int height = get_int("Height: ");
    int height;
    printf("Height: ");
    scanf("%i", &height);
    printf("You are: %i\n", height);

    int space = 0;

    //checking input for valid number / range
    /*
    while(height < 1 || height > 8)
        //height = get_int("Height: ");
        printf("Height: ");
        scanf("%i", &height);
    */

    draw(height, space);

    /*
    for(int i = 0; i < height; i++){
        printf("i = : %i\n", i);
        printf("height = : %i\n", height);
    }
    */
}

void draw(int h, int space)
{
    //printf("Into draw");
    if(h==0)
        return;

    draw((h-1), (space+1));

    for (int i = 0; i < space; i++)
    {
        printf(" ");
    }

    for (int i = 0; i < h; i++)
    {
        printf("#");

        if(h-i==1){
            //printf("New line?");
            printf(" ");
            for (int j = 0; j < h; j++){
                printf("#");
            }
        }
    }

    printf("\n");
}