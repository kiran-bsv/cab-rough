# Variables
CXX = g++
CXXFLAGS = -std=c++11 -Wall
TARGET = cab_management

# Directories
INCDIR = include
SRCDIR = src
OBJDIR = obj

# Sources and Objects
SOURCES = $(wildcard $(SRCDIR)/*.cpp)
OBJECTS = $(patsubst $(SRCDIR)/%.cpp,$(OBJDIR)/%.o,$(SOURCES))
INCLUDES = -I$(INCDIR)

# Default target
all: $(TARGET)

# Link the target executable
$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJECTS)

# Compile source files into object files
$(OBJDIR)/%.o: $(SRCDIR)/%.cpp | $(OBJDIR)
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c $< -o $@

# Create the object directory
$(OBJDIR):
	mkdir -p $(OBJDIR)

# Clean up build files
clean:
	rm -rf $(TARGET) $(OBJDIR)
