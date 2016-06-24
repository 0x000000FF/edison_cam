CXX ?= g++

CXXFLAGS += -c -Wall -I/usr/include/opencv2 -I/usr/include/opencv -I/usr/include
LDFLAGS += -L/usr/lib
LIBS += -lopencv_core -lopencv_video -lopencv_highgui

all: opencv_example

opencv_example: example.o; $(CXX) $< -o $@ $(LDFLAGS) $(LIBS)

%.o: %.cpp; $(CXX) $< -o $@ $(CXXFLAGS)

clean: ; rm -f example.o opencv_example