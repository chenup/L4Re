#include <stdlib.h>
#define REPS (100000)
int sizes[] = {
    100000, 1024, 42000, 350, 100, 80, 3 ,3,3,3,3,3,3,3,3,3,3,3,3,50,
    100000, 1024, 42000, 350, 100, 80, 3 ,3,3,3,3,3,3,3,3,3,3,3,3,50,
    100000, 1024, 42000, 350, 100, 80, 3 ,3,3,3,3,3,3,3,3,3,3,3,3,50,
    100000, 1024, 42000, 350, 100, 80, 3 ,3,3,3,3,3,3,3,3,3,3,3,3,50,
    100000, 1024, 42000, 350, 100, 80, 3 ,3,3,3,3,3,3,3,3,3,3,3,3,50,
    100000, 1024, 42000, 350, 100, 80, 3 ,3,3,3,3,3,3,3,3,3,3,3,3,50,
    100000, 1024, 42000, 350, 100, 80, 3 ,3,3,3,3,3,3,3,3,3,3,3,3,50,
    100000, 1024, 42000, 350, 100, 80, 3 ,3,3,3,3,3,3,3,3,3,3,3,3,50,
    100000, 1024, 42000, 350, 100, 80, 3 ,3,3,3,3,3,3,3,3,3,3,3,3,50,
    100000, 1024, 42000, 350, 100, 80, 3 ,3,3,3,3,3,3,3,3,3,3,3,3,50,
    100000, 1024, 42000, 350, 100, 80, 3 ,3,3,3,3,3,3,3,3,3,3,3,3,50,
    100000, 1024, 42000, 350, 100, 80, 3 ,3,3,3,3,3,3,3,3,3,3,3,3,50,
    100000, 1024, 42000, 350, 100, 80, 3 ,3,3,3,3,3,3,3,3,3,3,3,3,50,
    100000, 1024, 42000, 350, 100, 80, 3 ,3,3,3,3,3,3,3,3,3,3,3,3,50,
    100000, 1024, 42000, 350, 100, 80, 3 ,3,3,3,3,3,3,3,3,3,3,3,3,50,
    100000, 1024, 42000, 350, 100, 80, 3 ,3,3,3,3,3,3,3,3,3,3,3,3,50,
    100000, 1024, 42000, 350, 100, 80, 3 ,3,3,3,3,3,3,3,3,3,3,3,3,50,
    100000, 1024, 42000, 350, 100, 80, 3 ,3,3,3,3,3,3,3,3,3,3,3,3,50,
    100000, 1024, 42000, 350, 100, 80, 3 ,3,3,3,3,3,3,3,3,3,3,3,3,50,
    100000, 1024, 42000, 350, 100, 80, 3 ,3,3,3,3,3,3,3,3,3,3,3,3,50,
    100000, 1024, 42000, 350, 100, 80, 3 ,3,3,3,3,3,3,3,3,3,3,3,3,50,
    100000, 1024, 42000, 350, 100, 80, 3 ,3,3,3,3,3,3,3,3,3,3,3,3,50,
    100000, 1024, 42000, 350, 100, 80, 3 ,3,3,3,3,3,3,3,3,3,3,3,3,50,
    100000, 1024, 42000, 350, 100, 80, 3 ,3,3,3,3,3,3,3,3,3,3,3,3,50,
    100000, 1024, 42000, 350, 100, 80, 3 ,3,3,3,3,3,3,3,3,3,3,3,3,50,
    100000, 1024, 42000, 350, 100, 80, 3 ,3,3,3,3,3,3,3,3,3,3,3,3,50,
    100000, 1024, 42000, 350, 100, 80, 3 ,3,3,3,3,3,3,3,3,3,3,3,3,50,
    100000, 1024, 42000, 350, 100, 80, 3 ,3,3,3,3,3,3,3,3,3,3,3,3,50,
    100000, 1024, 42000, 350, 100, 80, 3 ,3,3,3,3,3,3,3,3,3,3,3,3,50,
    100000, 1024, 42000, 350, 100, 80, 3 ,3,3,3,3,3,3,3,3,3,3,3,3,50,
    100000, 1024, 42000, 350, 100, 80, 3 ,3,3,3,3,3,3,3,3,3,3,3,3,50,
    100000, 1024, 42000, 350, 100, 80, 3 ,3,3,3,3,3,3,3,3,3,3,3,3,50,
    100000, 1024, 42000, 350, 100, 80, 3 ,3,3,3,3,3,3,3,3,3,3,3,3,50,
    100000, 1024, 42000, 350, 100, 80, 3 ,3,3,3,3,3,3,3,3,3,3,3,3,50,
    100000, 1024, 42000, 350, 100, 80, 3 ,3,3,3,3,3,3,3,3,3,3,3,3,50,
    100000, 1024, 42000, 350, 100, 80, 3 ,3,3,3,3,3,3,3,3,3,3,3,3,50,
    100000, 1024, 42000, 350, 100, 80, 3 ,3,3,3,3,3,3,3,3,3,3,3,3,50,
    100000, 1024, 42000, 350, 100, 80, 3 ,3,3,3,3,3,3,3,3,3,3,3,3,50,
    100000, 1024, 42000, 350, 100, 80, 3 ,3,3,3,3,3,3,3,3,3,3,3,3,50,
    100000, 1024, 42000, 350, 100, 80, 3 ,3,3,3,3,3,3,3,3,3,3,3,3,50,
    100000, 1024, 42000, 350, 100, 80, 3 ,3,3,3,3,3,3,3,3,3,3,3,3,50,
    100000, 1024, 42000, 350, 100, 80, 3 ,3,3,3,3,3,3,3,3,3,3,3,3,50
};
#define NUM (sizeof sizes / sizeof sizes[0])
int main ()
{
    int i, j;
    void *allocs[NUM];
    for (i = 0; i < REPS; i++) {
	for (j = 0; j < NUM; j++) {
	    allocs[j] = malloc(sizes[j]);
	}
	for (j = 0; j < NUM; j++) {
	    free(allocs[j]);
	}
    }
    return 0;
}

