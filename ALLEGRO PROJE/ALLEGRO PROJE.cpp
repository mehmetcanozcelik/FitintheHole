#include <stdio.h>
#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>
#include <time.h>


int main(int argc, char** argv)
{
	srand(time(NULL));
	al_init_primitives_addon();
	ALLEGRO_DISPLAY* display = NULL;
	ALLEGRO_EVENT_QUEUE* queue = NULL;
	ALLEGRO_TIMER* timer;

	al_init();
	al_install_keyboard();

	display = al_create_display(800, 800);

	timer = al_create_timer(1.0 / 2);
	queue = al_create_event_queue();
	al_start_timer(timer);

	al_register_event_source(queue, al_get_display_event_source(display));
	al_register_event_source(queue, al_get_keyboard_event_source());
	al_register_event_source(queue, al_get_timer_event_source(timer));

	int cnt = 2, i;
	int direction = 4;
	int j = 400;
	int x = 0;

	int sqr[50][2] = { { 300, 300 }, { 260, 300 }, { 260, 260 } };
	int shape = rand() % 21;


	while (1)
	{

		ALLEGRO_EVENT ev;
		al_wait_for_event(queue, &ev);
		al_clear_to_color(al_map_rgb(0, 0, 0));
		al_draw_rectangle(5, 5, 795, 795, al_map_rgb(255, 255, 255), 3);
		al_draw_filled_circle(20, 20, 10, al_map_rgb(239, 116, 9));
		al_draw_filled_circle(780, 20, 10, al_map_rgb(7, 192, 198));
		al_draw_filled_circle(20, 780, 10, al_map_rgb(55, 211, 8));
		al_draw_filled_circle(780, 780, 10, al_map_rgb(147, 5, 20));

		if (shape == 0) {
			al_draw_filled_rectangle(400, j, 440, j + 120, al_map_rgb(9, 224, 237));
			al_draw_rectangle(400, 60, 440, 220, al_map_rgb(255, 255, 255), 5);

			if ((sqr[0][0] == 400 && sqr[0][1] == 180)) {
				shape = rand() % 21;
				j = 500;
				sqr[0][0] = 300;
				sqr[0][1] = 700;
				printf("Score: %d\n", x + 1);
				x = x + 1;
			}
			if (j == 40) {
				printf("GAME OVER ! TRY AGAIN.\n");
				system("pause");
			}



		}
		else if (shape == 1) {
			al_draw_filled_rectangle(320, j, 360, j + 80, al_map_rgb(0, 255, 0));
			al_draw_filled_rectangle(440, j, 480, j + 120, al_map_rgb(0, 255, 0));

			al_draw_rectangle(320, 60, 360, 180, al_map_rgb(255, 255, 255), 5);
			al_draw_rectangle(440, 60, 480, 180, al_map_rgb(255, 255, 255), 5);

			if ((sqr[0][0] == 320 && sqr[0][1] == 140)) {
				shape = rand() % 21;
				j = 500;
				sqr[0][0] = 300;
				sqr[0][1] = 700;
				printf("Score: %d\n", x + 1);
				x = x + 1;
			}
			if (j == 40) {
				printf("GAME OVER ! TRY AGAIN.\n");
				system("pause");
			}

		}
		else if (shape == 2) {
			al_draw_filled_rectangle(400, j + 160, 440, j + 360, al_map_rgb(255, 0, 255));


			al_draw_rectangle(400, 60, 440, 260, al_map_rgb(255, 255, 255), 5);
			al_draw_rectangle(440, 140, 480, 180, al_map_rgb(255, 255, 255), 5);

			if ((sqr[0][0] == 440 && sqr[0][1] == 140)) {
				shape = rand() % 21;
				j = 500;
				sqr[0][0] = 300;
				sqr[0][1] = 700;
				printf("Score: %d\n", x + 1);
				x = x + 1;
			}

			if (j == -120) {
				printf("GAME OVER ! TRY AGAIN.\n");
				system("pause");
			}
		}
		else if (shape == 3) {
			al_draw_filled_rectangle(400, j + 180, 440, j + 380, al_map_rgb(75, 0, 255));


			al_draw_rectangle(400, 60, 440, 260, al_map_rgb(255, 255, 255), 5);
			al_draw_rectangle(440, 60, 480, 100, al_map_rgb(255, 255, 255), 5);

			if ((sqr[0][0] == 440 && sqr[0][1] == 60)) {
				shape = rand() % 21;
				j = 500;
				sqr[0][0] = 300;
				sqr[0][1] = 700;
				printf("Score: %d\n", x + 1);
				x = x + 1;
			}
			if (j == -140) {
				printf("GAME OVER ! TRY AGAIN.\n");
				system("pause");
			}
		}
		else if (shape == 4) {
			al_draw_filled_rectangle(400, j + 280, 480, j + 400, al_map_rgb(255, 127, 0));

			al_draw_rectangle(360, 60, 400, 100, al_map_rgb(255, 255, 255), 5);
			al_draw_rectangle(400, 60, 480, 180, al_map_rgb(255, 255, 255), 5);

			if ((sqr[0][0] == 360 && sqr[0][1] == 60)) {
				shape = rand() % 21;
				j = 500;
				sqr[0][0] = 300;
				sqr[0][1] = 700;
				printf("Score: %d\n", x + 1);
				x = x + 1;
			}
			if (j == -240) {
				printf("GAME OVER ! TRY AGAIN.\n");
				system("pause");
			}
		}
		else if (shape == 5) {
			al_draw_filled_rectangle(360, j + 300, 400, j + 340, al_map_rgb(255, 255, 0));
			al_draw_filled_rectangle(360, j + 340, 520, j + 380, al_map_rgb(255, 255, 0));

			al_draw_rectangle(360, 60, 440, 100, al_map_rgb(255, 255, 255), 5);
			al_draw_rectangle(360, 100, 520, 140, al_map_rgb(255, 255, 255), 5);

			if ((sqr[0][0] == 400 && sqr[0][1] == 60)) {
				shape = rand() % 21;
				j = 500;
				sqr[0][0] = 300;
				sqr[0][1] = 700;
				printf("Score: %d\n", x + 1);
				x = x + 1;
			}
			if (j == -260) {
				printf("GAME OVER ! TRY AGAIN.\n");
				system("pause");
			}
		}
		else if (shape == 6) {
			al_draw_filled_rectangle(440, j + 200, 480, j + 400, al_map_rgb(142, 214, 8));
			al_draw_filled_rectangle(400, j + 240, 440, j + 320, al_map_rgb(142, 214, 8));

			al_draw_rectangle(440, 60, 480, 260, al_map_rgb(255, 255, 255), 5);
			al_draw_rectangle(480, 60, 520, 100, al_map_rgb(255, 255, 255), 5);
			al_draw_rectangle(400, 100, 440, 180, al_map_rgb(255, 255, 255), 5);

			if ((sqr[0][0] == 480 && sqr[0][1] == 60)) {
				shape = rand() % 21;
				j = 500;
				sqr[0][0] = 300;
				sqr[0][1] = 700;
				printf("Score: %d\n", x + 1);
				x = x + 1;
			}
			if (j == -160) {
				printf("GAME OVER ! TRY AGAIN.\n");
				system("pause");
			}
		}
		else if (shape == 7) {
			al_draw_filled_rectangle(380, j + 200, 420, j + 320, al_map_rgb(8, 214, 142));
			al_draw_filled_rectangle(340, j + 320, 460, j + 360, al_map_rgb(8, 214, 142));

			al_draw_rectangle(380, 60, 420, 180, al_map_rgb(255, 255, 255), 5);
			al_draw_rectangle(340, 100, 380, 140, al_map_rgb(255, 255, 255), 5);
			al_draw_rectangle(340, 180, 460, 220, al_map_rgb(255, 255, 255), 5);

			if ((sqr[0][0] == 340 && sqr[0][1] == 100)) {
				shape = rand() % 21;
				j = 500;
				sqr[0][0] = 300;
				sqr[0][1] = 700;
				printf("Score: %d\n", x + 1);
				x = x + 1;
			}
			if (j == -160) {
				printf("GAME OVER ! TRY AGAIN.\n");
				system("pause");
			}
		}
		else if (shape == 8) {
			al_draw_filled_rectangle(340, j + 240, 420, j + 280, al_map_rgb(206, 8, 153));
			al_draw_filled_rectangle(380, j + 280, 420, j + 400, al_map_rgb(206, 8, 153));

			al_draw_rectangle(340, 60, 460, 100, al_map_rgb(255, 255, 255), 5);
			al_draw_rectangle(380, 100, 420, 220, al_map_rgb(255, 255, 255), 5);

			if ((sqr[0][0] == 420 && sqr[0][1] == 60)) {
				shape = rand() % 21;
				j = 500;
				sqr[0][0] = 300;
				sqr[0][1] = 700;
				printf("Score: %d\n", x + 1);
				x = x + 1;
			}
			if (j == -200) {
				printf("GAME OVER ! TRY AGAIN.\n");
				system("pause");
			}

		}                                                                                                                      //*DEFAULT SHAPES*//
		else if (shape == 9) {
			al_draw_filled_rectangle(380, j + 240, 460, j + 280, al_map_rgb(112, 110, 155));
			al_draw_filled_rectangle(380, j + 280, 420, j + 360, al_map_rgb(112, 110, 155));
			al_draw_filled_rectangle(380, j + 360, 500, j + 400, al_map_rgb(112, 110, 155));

			al_draw_rectangle(380, 60, 500, 100, al_map_rgb(255, 255, 255), 5);
			al_draw_rectangle(380, 100, 420, 180, al_map_rgb(255, 255, 255), 5);
			al_draw_rectangle(380, 180, 500, 220, al_map_rgb(255, 255, 255), 5);

			if ((sqr[0][0] == 460 && sqr[0][1] == 60)) {
				shape = rand() % 21;
				j = 500;
				sqr[0][0] = 300;
				sqr[0][1] = 700;
				printf("Score: %d\n", x + 1);
				x = x + 1;
			}
			if (j == -200) {
				printf("GAME OVER ! TRY AGAIN.\n");
				system("pause");
			}
		}
		else if (shape == 10) {
			al_draw_filled_rectangle(300, j + 300, 420, j + 340, al_map_rgb(50, 140, 60));

			al_draw_rectangle(340, 60, 380, 100, al_map_rgb(255, 255, 255), 5);
			al_draw_rectangle(300, 100, 420, 140, al_map_rgb(255, 255, 255), 5);

			if ((sqr[0][0] == 340 && sqr[0][1] == 60)) {
				shape = rand() % 21;
				j = 500;
				sqr[0][0] = 300;
				sqr[0][1] = 700;
				printf("Score: %d\n", x + 1);
				x = x + 1;
			}
			if (j == -220) {
				printf("GAME OVER ! TRY AGAIN.\n");
				system("pause");
			}
		}
		else if (shape == 11) {
			al_draw_filled_rectangle(300, j + 280, 340, j + 360, al_map_rgb(140, 45, 60));
			al_draw_filled_rectangle(300, j + 280, 380, j + 320, al_map_rgb(140, 45, 60));
			al_draw_filled_rectangle(440, j + 280, 520, j + 360, al_map_rgb(89, 112, 60));

			al_draw_rectangle(300, 60, 380, 140, al_map_rgb(255, 255, 255), 5);
			al_draw_rectangle(440, 60, 520, 140, al_map_rgb(255, 255, 255), 5);

			if ((sqr[0][0] == 340 && sqr[0][1] == 100)) {
				shape = rand() % 21;
				j = 500;
				sqr[0][0] = 300;
				sqr[0][1] = 700;
				printf("Score: %d\n", x + 1);
				x = x + 1;
			}
			if (j == -240) {
				printf("GAME OVER ! TRY AGAIN.\n");
				system("pause");
			}
		}
		else if (shape == 12) {
			al_draw_filled_rectangle(400, j + 260, 440, j + 380, al_map_rgb(226, 135, 9));
			al_draw_filled_rectangle(440, j + 340, 480, j + 380, al_map_rgb(226, 135, 9));

			al_draw_rectangle(400, 60, 440, 180, al_map_rgb(255, 255, 255), 5);
			al_draw_rectangle(360, 60, 400, 100, al_map_rgb(255, 255, 255), 5);
			al_draw_rectangle(440, 140, 480, 180, al_map_rgb(255, 255, 255), 5);

			if ((sqr[0][0] == 360 && sqr[0][1] == 60)) {
				shape = rand() % 21;
				j = 500;
				sqr[0][0] = 300;
				sqr[0][1] = 700;
				printf("Score: %d\n", x + 1);
				x = x + 1;
			}
			if (j == -220) {
				printf("GAME OVER ! TRY AGAIN.\n");
				system("pause");
			}
		}
		else if (shape == 13) {
			al_draw_filled_rectangle(340, j + 280, 460, j + 360, al_map_rgb(255, 0, 255));

			al_draw_rectangle(380, 60, 420, 100, al_map_rgb(255, 255, 255), 5);
			al_draw_rectangle(340, 100, 460, 180, al_map_rgb(255, 255, 255), 5);

			if ((sqr[0][0] == 380 && sqr[0][1] == 60)) {
				shape = rand() % 21;
				j = 500;
				sqr[0][0] = 300;
				sqr[0][1] = 700;
				printf("Score: %d\n", x + 1);
				x = x + 1;
			}
			if (j == -200) {
				printf("GAME OVER ! TRY AGAIN.\n");
				system("pause");
			}
		}
		else if (shape == 14) {
			al_draw_filled_rectangle(300, j + 200, 340, j + 240, al_map_rgb(255, 0, 0));
			al_draw_filled_rectangle(420, j + 200, 500, j + 240, al_map_rgb(255, 0, 255));

			al_draw_rectangle(300, 60, 380, 100, al_map_rgb(255, 255, 255), 5);
			al_draw_rectangle(420, 60, 500, 100, al_map_rgb(255, 255, 255), 5);

			if ((sqr[0][0] == 340 && sqr[0][1] == 60)) {
				shape = rand() % 21;
				j = 500;
				sqr[0][0] = 300;
				sqr[0][1] = 700;
				printf("Score: %d\n", x + 1);
				x = x + 1;
			}
			if (j == -160) {
				printf("GAME OVER ! TRY AGAIN.\n");
				system("pause");
			}
		}
		else if (shape == 15) {
			al_draw_filled_rectangle(340, j + 240, 380, j + 280, al_map_rgb(255, 255, 0));
			al_draw_filled_rectangle(380, j + 240, 420, j + 400, al_map_rgb(255, 0, 0));

			al_draw_rectangle(300, 60, 380, 100, al_map_rgb(255, 255, 255), 5);
			al_draw_rectangle(380, 60, 420, 220, al_map_rgb(255, 255, 255), 5);

			if ((sqr[0][0] == 300 && sqr[0][1] == 60)) {
				shape = rand() % 21;
				j = 500;
				sqr[0][0] = 300;
				sqr[0][1] = 700;
				printf("Score: %d\n", x + 1);
				x = x + 1;
			}
			if (j == -200) {
				printf("GAME OVER ! TRY AGAIN.\n");
				system("pause");
			}
		}
		else if (shape == 16) {
			al_draw_filled_rectangle(340, j + 320, 460, j + 360, al_map_rgb(0, 255, 0));
			al_draw_filled_rectangle(380, j + 280, 420, j + 240, al_map_rgb(0, 255, 0));

			al_draw_rectangle(340, 120, 460, 160, al_map_rgb(255, 255, 255), 5);
			al_draw_rectangle(380, 40, 420, 120, al_map_rgb(255, 255, 255), 5);

			if ((sqr[0][0] == 380 && sqr[0][1] == 80)) {
				shape = rand() % 21;
				j = 500;
				sqr[0][0] = 300;
				sqr[0][1] = 700;
				printf("Score: %d\n", x + 1);
				x = x + 1;
			}
			if (j == -220) {
				printf("GAME OVER ! TRY AGAIN.\n");
				system("pause");
			}
		}
		else if (shape == 17) {
			al_draw_filled_rectangle(340, j + 320, 380, j + 360, al_map_rgb(0, 0, 255));
			al_draw_filled_rectangle(380, j + 360, 460, j + 400, al_map_rgb(255, 255, 0));

			al_draw_rectangle(340, 60, 420, 100, al_map_rgb(255, 255, 255), 5);
			al_draw_rectangle(380, 100, 460, 140, al_map_rgb(255, 255, 255), 5);

			if ((sqr[0][0] == 380 && sqr[0][1] == 60)) {
				shape = rand() % 21;
				j = 500;
				sqr[0][0] = 300;
				sqr[0][1] = 700;
				printf("Score: %d\n", x + 1);
				x = x + 1;
			}
			if (j == -280) {
				printf("GAME OVER ! TRY AGAIN.\n");
				system("pause");
			}
		}
		else if (shape == 18) {
			al_draw_filled_rectangle(380, j + 320, 420, j + 360, al_map_rgb(7, 190, 195));
			al_draw_filled_rectangle(340, j + 360, 420, j + 400, al_map_rgb(219, 64, 8));

			al_draw_rectangle(380, 60, 460, 100, al_map_rgb(255, 255, 255), 5);
			al_draw_rectangle(340, 100, 420, 140, al_map_rgb(255, 255, 255), 5);

			if ((sqr[0][0] == 420 && sqr[0][1] == 60)) {
				shape = rand() % 21;
				j = 500;
				sqr[0][0] = 300;
				sqr[0][1] = 700;
				printf("Score: %d\n", x + 1);
				x = x + 1;
			}
			if (j == -280) {
				printf("GAME OVER ! TRY AGAIN.\n");
				system("pause");
			}

		}
		else if (shape == 19) {
			al_draw_filled_rectangle(340, j + 240, 380, j + 360, al_map_rgb(0, 250, 0));
			al_draw_filled_rectangle(340, j + 360, 420, j + 400, al_map_rgb(0, 250, 0));

			al_draw_rectangle(340, 60, 380, 180, al_map_rgb(255, 255, 255), 5);
			al_draw_rectangle(340, 180, 460, 220, al_map_rgb(255, 255, 255), 5);

			if ((sqr[0][0] == 420 && sqr[0][1] == 180)) {
				shape = rand() % 21;
				j = 500;
				sqr[0][0] = 300;
				sqr[0][1] = 700;
				printf("Score: %d\n", x + 1);
				x = x + 1;
			}
			if (j == -200) {
				printf("GAME OVER ! TRY AGAIN.\n");
				system("pause");
			}
		}
		else if (shape == 20) {
			al_draw_filled_rectangle(340, j + 220, 380, j + 300, al_map_rgb(0, 250, 0));
			al_draw_filled_rectangle(380, j + 260, 420, j + 300, al_map_rgb(0, 250, 0));

			al_draw_rectangle(340, 60, 380, 140, al_map_rgb(255, 255, 255), 5);
			al_draw_rectangle(380, 100, 420, 180, al_map_rgb(255, 255, 255), 5);

			if ((sqr[0][0] == 380 && sqr[0][1] == 140)) {
				shape = rand() % 21;
				j = 500;
				sqr[0][0] = 300;
				sqr[0][1] = 700;
				printf("Score: %d\n", x + 1);
				x = x + 1;
			}
			if (j == -180) {
				printf("GAME OVER ! TRY AGAIN.\n");
				system("pause");
			}
		}


		if (ev.keyboard.keycode == ALLEGRO_KEY_RIGHT) {
			direction = 1;
		}
		else if (ev.keyboard.keycode == ALLEGRO_KEY_DOWN) {
			direction = 2;
		}
		else if (ev.keyboard.keycode == ALLEGRO_KEY_LEFT) {
			direction = 3;
		}
		else if (ev.keyboard.keycode == ALLEGRO_KEY_UP) {
			direction = 4;
		}



		if (direction == 1) {
			sqr[0][0] += 20;
			j -= 10;
		}
		else if (direction == 2) {
			sqr[0][1] += 20;
			j -= 10;
		}
		else if (direction == 3) {
			sqr[0][0] -= 20;
			j -= 10;
		}
		else if (direction == 4) {
			sqr[0][1] -= 20;
			j -= 10;
		}


		for (i = cnt; i > 0; i--) {
			sqr[i][0] = sqr[i - 1][0];
			sqr[i][1] = sqr[i - 1][1];
		}





		for (i = 0; i < cnt; i++) {
			al_draw_filled_rectangle(sqr[i][0], sqr[i][1], sqr[i][0] + 40, sqr[i][1] + 40, al_map_rgb(255, 255, 255));
		}








		al_flip_display();



	}


	system("pause");
	al_destroy_display(display);
	al_destroy_event_queue(queue);

	return 0;
}



