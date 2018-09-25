INCLUDE_PATH =  -I"$(ISE_LIBRARY)/library/encoding/implementation/include" -I"$(ISE_LIBRARY)/library/time/spec/include" -I"$(ISE_LIBRARY)/library/vision2/spec/include" -I"$(ISE_LIBRARY)/library/vision2/implementation/gtk/Clib"  -D_REENTRANT -I/opt/local/include/gtk-2.0 -I/opt/local/lib/gtk-2.0/include -I/opt/local/include/pango-1.0 -I/opt/local/include/gio-unix-2.0/ -I/opt/local/include -I/opt/local/include/cairo -I/opt/local/include/atk-1.0 -I/opt/local/include/cairo -I/opt/local/include/pixman-1 -I/opt/local/include/libpng16 -I/opt/local/include -I/opt/local/include/gdk-pixbuf-2.0 -I/opt/local/include/libpng16 -I/opt/local/include -I/opt/local/include/pango-1.0 -I/opt/local/include/harfbuzz -I/opt/local/include -I/opt/local/include/pango-1.0 -I/opt/local/include -I/opt/local/include/freetype2 -I/opt/local/include -I/opt/local/include/freetype2 -I/opt/local/include/glib-2.0 -I/opt/local/lib/glib-2.0/include -I/opt/local/include
SHELL = /bin/sh
CC = cc
CPP = c++
CFLAGS = -O0 -pipe -fno-common -fPIC -DEIF_THREADS -DEIF_POSIX_THREADS  -DEIF_IEEE_BEHAVIOR -DWORKBENCH -I"/Applications/MacPorts/Eiffel_17.05/studio/spec/macosx-x86-64/include" -I. $(INCLUDE_PATH)
CPPFLAGS = -O0 -pipe -fno-common -fPIC -DEIF_THREADS -DEIF_POSIX_THREADS  -DWORKBENCH -I"/Applications/MacPorts/Eiffel_17.05/studio/spec/macosx-x86-64/include" -I. $(INCLUDE_PATH)
LDFLAGS = 
CCLDFLAGS =   
LDSHAREDFLAGS =   -dynamiclib -flat_namespace -undefined suppress -o
EIFLIB = "/Applications/MacPorts/Eiffel_17.05/studio/spec/macosx-x86-64/lib/libmtwkbench.a"
EIFTEMPLATES = /Applications/MacPorts/Eiffel_17.05/studio/config/macosx-x86-64/templates
LIBS = -lm -lpthread
MAKE = make
AR = ar
LD = ld
MKDEP = \$(EIFFEL_SRC)/C/mkdep $(DPFLAGS) --
MV = /bin/mv
CP = /bin/cp
RANLIB = :
RM = /bin/rm -f
FILE_EXIST = 
RMDIR = 
X2C = "/Applications/MacPorts/Eiffel_17.05/studio/spec/macosx-x86-64/bin/x2c"
SHAREDLINK = cc
SHAREDLIBS = -lm
SHARED_SUFFIX = .dylib
COMMAND_MAKEFILE = 
START_TEST = if [ ! -f finished ] ; then 
END_TEST = ; fi 
CREATE_TEST = touch finished 
SYSTEM_IN_DYNAMIC_LIB = tictac.dylib 

.SUFFIXES:.cpp .o

.c.o:
	$(CC) $(CFLAGS) -c $<

.cpp.o:
	$(CPP) $(CPPFLAGS) -c $<

OBJECTS = big_file_C3_c.o 

OLDOBJECTS =  es1042.o es1042d.o es1038.o es1038d.o es1041.o es1041d.o es1040.o \
	es1040d.o et1036.o et1036d.o et1034.o et1034d.o et1039.o et1039d.o \
	es1037.o es1037d.o et1035.o et1035d.o et1033.o et1033d.o yy1031.o \
	yy1031d.o ev1030.o ev1030d.o yy1029.o yy1029d.o ev1028.o ev1028d.o \
	ev1054.o ev1054d.o ev1027.o ev1027d.o gr1026.o gr1026d.o ev1024.o \
	ev1024d.o ev1023.o ev1023d.o ev1055.o ev1055d.o ev1053.o ev1053d.o \
	ev1052.o ev1052d.o ki1047.o ki1047d.o ev1050.o ev1050d.o ev1049.o \
	ev1049d.o ev1048.o ev1048d.o ki1046.o ki1046d.o uc1045.o uc1045d.o \
	uc1044.o uc1044d.o yy1032.o yy1032d.o rt1051.o rt1051d.o ev1025.o \
	ev1025d.o uc1043.o uc1043d.o 

all: Cobj3.o

Cobj3.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj3.o $(OBJECTS)
	$(RM) $(OBJECTS)
	$(CREATE_TEST)

clean: local_clean
clobber: local_clobber

local_clean::
	$(RM) core finished *.o

local_clobber:: local_clean
	$(RM) Makefile

