https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
#ifndef _QUEUE_H
#define _QUEUE_H

#include "linked_list.h"

#include <stdlib.h>

typedef LinkedList Queue;

Queue *initialise_queue(void);
void *pop_queue(Queue *);
void push_queue(Queue *, void *, size_t);
void *peek_queue(Queue *);
void print_queue(Queue *, void (*)(void *));
void free_queue(Queue *);

#endif
