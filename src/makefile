

CPPFLAGS+= -nostartfiles
CPPFLAGS+= -fno-stack-protector
CPPFLAGS+= -fno-asynchronous-unwind-tables
CPPFLAGS+= -fno-exceptions

%.s: %.cpp
	g++ $(CPPFLAGS) $< -S $@
