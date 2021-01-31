# clion-scmake

This project contains a trivial "Hello World" SystemC application to use verifying CLion with the `makefile`.

SystemC is contains a library and large include file structure. The environment variable `SYSTEMC_HOME` references the top which contains `lib/` and `includes/` directories.

Simple invocation with `make run` is my normal approach, but I am hoping to get CLion to recognize this. The main `makefile` includes a rules definitions file located in variously in the same directory or one of several directories about the code.

The `makefile.defs` uses a lot of `gmake` features.
