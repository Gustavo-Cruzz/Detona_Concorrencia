#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "uno.hpp"
#include "stack.hpp"

/* Color scheme:
  red = 0
  blue = 1
  yellow = 2
  green = 3

  Special Cards:
  black = 4 (switch color && +4)
*/

int main()
{
    printf("Deu Certo!\n");
    stack red, blue, yellow, green, main, special;

    init_stack(&red);
    init_stack(&blue);
    init_stack(&yellow);
    init_stack(&green);
    init_stack(&main);
    init_stack(&special);

    deck_init(&red, 0);
    deck_init(&blue, 1);
    deck_init(&yellow, 2);
    deck_init(&green, 3);
    special_init(&special, 4);

    randomize_color_deck(&red);
    randomize_color_deck(&blue);
    randomize_color_deck(&green);
    randomize_color_deck(&yellow);
    randomize_color_deck(&special);

    random_decks(&red, &blue, &green, &yellow, &special, &main);

    randomize_color_deck(&main);
    randomize_color_deck(&main);
    print_stack(main);

    return 0;
}