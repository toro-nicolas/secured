# Secured 🔐

## Table of contents 📑
- [Description](https://github.com/toro-nicolas/secured/blob/main/README.md#description-)
- [Usage](https://github.com/toro-nicolas/secured/blob/main/README.md#usage-%EF%B8%8F)
- [Result](https://github.com/toro-nicolas/secured/blob/main/README.md#result-)
- [Compilation](https://github.com/toro-nicolas/secured/blob/main/README.md#compilation-%EF%B8%8F)
- [Code mandatory](https://github.com/toro-nicolas/secured/blob/main/README.md#code-mandatory-)
- [What's next ?](https://github.com/toro-nicolas/secured/blob/main/README.md#whats-next--)
- [Contributors](https://github.com/toro-nicolas/secured/blob/main/README.md#contributors-)


## Description 📝
The **Organized** is a project carried out in **solo**, during our **1st year** in [**EPITECH**](https://www.epitech.eu/) Grand Ecole program.  
Its purpose is to create in [**C**](https://en.wikipedia.org/wiki/C_(programming_language)) a **hash library** for securing data.  


## Usage ⚔️
To use this library, you need to include the **header file** in your project (hashtable.h) and compile your project with the **library** (libhashtable.a).  

If you want test the library, you edit the main functions of the file **main.c** and compile the project with this command :
```sh
make test
```
Then, you can run the test project like this :
```sh
./secured
```


## Result 🚩
The result of this project is an **perfect Secured**.  
If you discover a **problem** or an **error**, don't hesitate to **create an issue** and **report it** to us as soon as possible.


### my.epitech.eu result

| Category                       | Percentage | Numbers of tests |  Crash   |
|--------------------------------|:----------:|:----------------:|:--------:|
| Algorithm app. - Hash function |    100%    |       4/4        |    No    |
| Algorithm app. - Hash table    |    100%    |       5/5        |    No    |
| Basics                         |    100%    |       6/6        |    No    |
| Data structure                 |    100%    |       5/5        |    No    |
| Optimization                   |    100%    |       5/5        |    No    |
| Robustness                     |    100%    |      10/10       |    No    |
| **Results**                    |  **100%**  |    **35/35**     |  **No**  |


### Tests and code coverage
**Unit tests** were performed using [criterion](https://criterion.readthedocs.io/en/master/intro.html).  
In this project, **only** the **library code is covered**.
Unit tests are still to be performed, but a large part of the code is already covered.

You can compile the project and run the unit tests with this command :
```sh
make tests_run
```


## Compilation 🛠️
You can compile the project with this command :
```sh
make
```

If you want clean the project, you can run this command :
```sh
make fclean
```

You can clean and compile the project with ```make re```.

You can compile the unit tests with this command :
```sh
make unit_tests
```


## Code mandatory 📦
- You'll need to create a branch where you'll push your code. Once you've completed your tasks on this branch, we'll work together to merge it and check that everything works.
- Every function you add must be code-style.
- Before merging, you'll need to check that all unit tests pass by running ```make tests_run```.
- Each commit will contain ```[+]``` or ```[-]``` or ```[~]``` followed by a message
    - ```[+]``` : Add feature
    - ```[-]``` : Delete feature
    - ```[~]``` : Edit feature

**Of course, in exceptional cases, we may depart from these rules.**


## What's next ? 🚀
- Add help section
- Add github actions
- Improve the memory management
- Add a documentation for each function
- Add unit tests on each piece of code
- Add more hash algorithms


## Contributors 👤
This project was carried out alone by [**Nicolas TORO**](https://github.com/toro-nicolas).
