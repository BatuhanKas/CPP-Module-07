/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 12:28:20 by bkas              #+#    #+#             */
/*   Updated: 2024/09/30 12:16:27 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */

#ifndef ARRAY_TPP
#define ARRAY_TPP

/* **************************** [^] INCLUDES [^] **************************** */

/* ************************* [v] ORTHODOX FORM [v] ************************* */

template <typename T>
Array<T>::Array() : _arr(0), _size(0) {}

template <typename T>
Array<T>::Array(unsigned int n) : _arr(new T[n]), _size(n) {}

template <typename T>
Array<T>::Array(const Array &oth) : _arr(0), _size(0) {
    *this = oth;
}

template <typename T>
const Array<T> &Array<T>::operator=(const Array &oth) {
    if (this == &oth) return *this;
    if (_arr != NULL) delete[] _arr;
    _arr = new T[oth.size()];
    for (unsigned int i = 0; i < oth.size(); i++) {
        _arr[i] = oth._arr[i];
    }
    return *this;
}

template <typename T>
Array<T>::~Array() {
    delete[] _arr;
}

/* ************************* [^] ORTHODOX FORM [^] ************************* */

/* *************************** [v] GET SIZE [v] *************************** */

template <typename T>
unsigned int Array<T>::size() const {
    return this->_size;
}

/* *************************** [^] GET SIZE [^] *************************** */

/* ************************* [v] SET ELEMENTS [v] ************************* */

template <typename T>
void Array<T>::setElements(T *elm) {
    if (size() > 0) {
        for (size_t i = 0; i < size(); i++) {
            _arr[i] = elm[i];
        }
    }
}

/* ************************* [^] SET ELEMENTS [^] ************************* */

/* ************************ [v] PRINT ELEMENTS [v] ************************ */

template <typename T>
void Array<T>::printElements() {
    for (size_t i = 0; i < size(); i++) {
        cout << "arr[" << i << "]: " << _arr[i] << endl;
    }
}

/* ************************ [^] PRINT ELEMENTS [^] ************************ */

/* ************************* [v] OPERATOR [] [v] ************************* */

template <typename T>
T &Array<T>::operator[](unsigned int i) {
    if (i >= 0 && i < size()) return _arr[i];
    throw out_of_range("Index Out of Bounds!");
}

/* ************************* [^] OPERATOR [] [^] ************************* */

#endif
