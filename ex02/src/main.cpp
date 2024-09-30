/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 13:23:42 by bkas              #+#    #+#             */
/*   Updated: 2024/09/30 16:11:04 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */

#include "../inc/Array.hpp"

/* **************************** [^] INCLUDES [^] **************************** */

/* **************************** [v] DEFINES [v] **************************** */

#define ARRSIZE 5

/* **************************** [^] DEFINES [^] **************************** */

/* ****************************** [v] MAIN [v] ****************************** */

int main() {
    int *arr;

    /* ************ [v] MEMORY ALLOCATION [v] ************ */
    try {
        arr = new int[ARRSIZE];
    } catch (exception &e) {
        cerr << "(New) Memory Error: " << e.what() << endl;
        return 0;
    }
    /* ************ [^] MEMORY ALLOCATION [^] ************ */

    /* ***************** [v] INTEGER [v] ***************** */
    try {
        srand(time(NULL));
        for (int i = 0; i < ARRSIZE; i++) {
            arr[i] = (rand() % 10);
        }
        Array<int> a(ARRSIZE);
        a.setElements(arr);
        a.printElements();

        /* **** [v] Reach Index [v] **** */
        cout << a[4] << endl;
        /* **** [^] Reach Index [^] **** */
    } catch (exception &e) {
        cerr << e.what() << endl;
    }
    /* ***************** [^] INTEGER [^] ***************** */

    delete[] arr;

    try {
        /* ******** [v] STRING [v] ******** */
        {
            string str[] = {"ali", "veli", "abc", "cde"};
            unsigned int size = sizeof(str) / sizeof(str[0]);
            Array<string> b(size);
            b.setElements(str);
            b.printElements();

            /* **** [v] Reach Index [v] **** */
            cout << b[-3] << endl;
            /* **** [^] Reach Index [^] **** */
        }
        /* ******** [^] STRING [^] ******** */
    } catch (exception &e) {
        cerr << e.what() << endl;
    }
}

/* ****************************** [^] MAIN [^] ****************************** */
