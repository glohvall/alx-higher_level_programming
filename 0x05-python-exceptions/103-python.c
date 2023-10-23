#include <Python.h>
#include <stdio.h>

void print_python_list(PyObject *p) {
	if (!PyList_Check(p)) {
		printf("Invalid List Object\n");
		return;
	}
	printf("[*] Python list info\n");
	printf("[*] Size of the Python List = %ld\n", PyList_Size(p));

	// Print elements of the list
	for (Py_ssize_t i = 0; i < PyList_Size(p); ++i) {
            PyObject *item = PyList_GetItem(p, i);
        	printf("Element %ld: %s\n", i, Py_TYPE(item)->tp_name);
	}
}

void print_python_bytes(PyObject *p) {
	if (!PyBytes_Check(p)) {
		printf("Invalid Bytes Object\n");
		return;
	}

	printf("[.] bytes object info\n");
	printf("size: %ld\n", PyBytes_Size(p));
	printf("trying string: %s\n", PyBytes_AsString(p));
	printf("[*] first 10 bytes: ");

	// Print first 10 bytes or less
	for (Py_ssize_t i = 0; i < PyBytes_Size(p) && i < 10; ++i) {
		printf("%02hhx", PyBytes_AS_STRING(p)[i]);
		if (i < 9 && i + 1 < PyBytes_Size(p)) {
			printf(" ");
		}
	}
	printf("\n");
}
void print_python_float(PyObject *p) {
	if (!PyFloat_Check(p)) {
		printf("Invalid Float Object\n");
		return;
	}

	printf("[.] float object info\n");
	printf("value: %f\n", PyFloat_AsDouble(p));
}
