# Taller 3 de Arquitectura de Computadores II

## Information

This lab was about how to use functions of SSE, in this files are some examples of the usage of SSE and how to define vectores and matrices. To check all the functions of SSE you can [check here](https://software.intel.com/sites/landingpage/IntrinsicsGuide/).

## Installation

To compile this code you only have to run the following command in terminal:

```bash
make
```

Also you can remove all the executable files using the following command:

```bash
make clean
```

## hello_simd

To run this file, that was provided by the professor, you have to set the flags of the SSE version you are using, but in this case gcc has some included. For set the flags in the compilation process you can use **-mssex** where the **x** is the version of SSE you are using. Also you can check the makefile for more info of how to compile the files.

```bash
./hello_simd
```

## max_number

This file contain some SSE functions that helps you to get the max number of 2 vectors, for run this program use the following command:

```bash
./max_number
```

## multiplication

This file is about how to multiply 2 matrices with SSE, for this time I defined two matrices that were going to be part of SSE vectors. To run the program use the following command:

```bash
./multiplication
```
