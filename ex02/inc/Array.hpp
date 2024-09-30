/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 13:24:03 by bkas              #+#    #+#             */
/*   Updated: 2024/09/30 12:22:38 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] DEFINES [v] **************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

/* **************************** [^] DEFINES [^] **************************** */

/* **************************** [v] INCLUDES [v] **************************** */

#include <cstdlib>
#include <iostream>

/* **************************** [^] INCLUDES [^] **************************** */

/* **************************** [v] DEFINES [v] **************************** */

using std::cerr;
using std::cout;
using std::endl;
using std::exception;
using std::out_of_range;
using std::string;

/* **************************** [^] DEFINES [^] **************************** */

/* **************************** [v] DISPLAY [v] **************************** */

template <typename T>
class Array {
   private:
    T *_arr;
    unsigned int _size;

   public:
    /* ********** [v] ORTHODOX FORM [v] ********** */
    Array();
    Array(const unsigned int n);
    Array(const Array &oth);
    const Array<T> &operator=(const Array &oth);
    ~Array();
    /* ********** [^] ORTHODOX FORM [^] ********** */

    /* ************ [v] GET SIZE [v] ************ */
    unsigned int size() const;
    /* ************ [^] GET SIZE [^] ************ */

    /* ******** [v] PRINT FUNCTIONS [v] ******** */
    void setElements(T *elm);
    void printElements();
    /* ******** [^] PRINT FUNCTIONS [^] ******** */

    /* ********** [v] OPERATOR [] [v] ********** */
    T &operator[](unsigned int i);
    /* ********** [^] OPERATOR [] [^] ********** */
};

/* **************************** [^] DISPLAY [^] **************************** */

/* ************************** [v] TPP INCLUDE [v] ************************** */

#include "Array.tpp"

/* ************************** [^] TPP INCLUDE [^] ************************** */

#endif
