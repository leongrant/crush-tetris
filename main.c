#include <stdio.h>
#include <stdlib.h>

#define BUFFERSIZE 1

// Crushtetris C-Project written by Leon Grant @ Humboldt University Berlin 
// Summer Semester 2020 -- Digital Systems module

int main(int argc, char** argv) 
{
	unsigned char buffer [BUFFERSIZE];
	FILE *stream; //input stream

	int bytes = 0;
	int bufferSize = 0;

	/*
	to-do (input):

	. create differentiation between getting input via pipe and getting input from a file. does c do this automatically?
	
	*/

	//int stones[]; //triplet of (color, x-coordinate, y-coordinate)

	int x; //width of board, e Z
	int y; //height of board, e N_0
	int offset; // = abs( | largest negative value | )

	int board[y][x];
	 
	printf("Hello world!\n");
	
	return 0;
}

int checkFour(int position, int colour)
{
	// will check if a sequence of four stones exists around a given root stone.
	/*
	to-do:

	. check every surrounding stone for a stone of the same type (ie. colour).
	. if one is found, remember its position relative to the root stone, that is to say its directional vector.
	. continue down this vector. if two more such stones are found, return the locations of these.
	- problem: how to return this? bool is insufficient - we do not know which direction, where to stop, etc.
	- int array? 1/0 at the start for yes/no?

	*/

	return 0;
}

void crush(int posX, int posY) //input is range.
{
	// will obliterate 4-er stones.
	return;
}