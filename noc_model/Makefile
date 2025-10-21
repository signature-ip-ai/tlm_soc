CXX = g++
CXXFLAGS += -Wall -Wextra -std=c++17 -O0 -g -Werror=reorder
AR = ar
ARFLAGS = rcs

SRCDIR = .
OBJDIR = obj
LIBDIR = lib

SOURCES = $(wildcard $(SRCDIR)/tlm_top.cpp)
OBJECTS = $(SOURCES:$(SRCDIR)/%.cpp=$(OBJDIR)/%.o)

LIBNAME = tlm_top
LIBRARY = $(LIBDIR)/lib$(LIBNAME).a

design_top: $(LIBRARY)

include Vsig_topology_top.mk

$(LIBRARY): $(OBJECTS) | $(LIBDIR) libVsig_topology_top
	$(AR) $(ARFLAGS) $@ $^ libVsig_topology_top.a ambachicast/lib/libambachicast.a
	@echo "Static library $(LIBRARY) created successfully"

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp | $(OBJDIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@ -I $(SYSTEMC_INCLUDE) -I $(VERILATOR_ROOT)/include -I ambachicast/include

$(OBJDIR):
	mkdir -p $(OBJDIR)

$(LIBDIR):
	mkdir -p $(LIBDIR)

clean:
	rm -rf $(OBJDIR) $(LIBDIR) *.o *.a *.d *.gch
	@echo "Cleaned build artifacts"

rebuild: clean design_top

debug:
	@echo "Sources: $(SOURCES)"
	@echo "Objects: $(OBJECTS)"
	@echo "Library: $(LIBRARY)"

.PHONY: all clean rebuild debug
