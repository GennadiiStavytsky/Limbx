#include "libmx.h"

t_list *mx_sort_list(t_list *lst, bool(*cmp)(void *, void *)) {
    t_list *i;
    t_list *j;

    if (lst != NULL) {
        for (i = lst; i != NULL; i = i->next) {
            for (j = i->next; j != NULL; j = j->next) {
                if (cmp(i->data, j->data) == true)
                    mx_swap_list(j, i);
            }
        }
    }
    return lst;
}
