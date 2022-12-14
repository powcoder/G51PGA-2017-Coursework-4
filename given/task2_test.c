https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "sort.h"

/* compare two strings */
/* return less than 0, 0, or greater than 0 */
/* if str1 < str2, str1 == str2, str1 > str2 respectively */
int compare_string(void *str1, void *str2)
{
	return strcmp((char *) str1, (char *) str2);
}

int main(int argc, char **argv)
{
	LinkedList *list;
	int i;

	/* parse command line */
	if(argc < 2) {
		fprintf(stderr, "usage: %s LIST_ENTRY [LIST_ENTRY ...]\n", argv[0]);
		exit(EXIT_FAILURE);
	}

	/* initialise list */
	list = initialise_linked_list();

	/* add all entries to list */
	for(i = 1; i < argc; i++)
		append_linked_list(list, (void *) argv[i]);

	/* sort list using merge sort */
	merge_sort(list, compare_string);

	/* print list */
	print_linked_list(list, print_string);

	/* free memory for linked list */
	free_linked_list(list);

	exit(EXIT_SUCCESS);
}
